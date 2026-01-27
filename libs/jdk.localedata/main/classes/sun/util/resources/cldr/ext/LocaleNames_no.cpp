#include <sun/util/resources/cldr/ext/LocaleNames_no.h>

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

$MethodInfo _LocaleNames_no_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_no, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_no, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_no_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_no",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_no_MethodInfo_
};

$Object* allocate$LocaleNames_no($Class* clazz) {
	return $of($alloc(LocaleNames_no));
}

void LocaleNames_no::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_no::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ae, "avestisk"_s);
	$var($String, metaValue_ar, "arabisk"_s);
	$var($String, metaValue_bo, "tibetansk"_s);
	$var($String, metaValue_el, "gresk"_s);
	$var($String, metaValue_gu, "gujarati"_s);
	$var($String, metaValue_he, "hebraisk"_s);
	$var($String, metaValue_hy, "armensk"_s);
	$var($String, metaValue_ja, "japansk"_s);
	$var($String, metaValue_jv, "javanesisk"_s);
	$var($String, metaValue_ka, "georgisk"_s);
	$var($String, metaValue_km, "khmer"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_ko, "koreansk"_s);
	$var($String, metaValue_lo, "laotisk"_s);
	$var($String, metaValue_ml, "malayalam"_s);
	$var($String, metaValue_mn, "mongolsk"_s);
	$var($String, metaValue_my, "burmesisk"_s);
	$var($String, metaValue_or, "odia"_s);
	$var($String, metaValue_si, "singalesisk"_s);
	$var($String, metaValue_su, "sundanesisk"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, "thai"_s);
	$var($String, metaValue_tl, "tagalog"_s);
	$var($String, metaValue_arc, "arameisk"_s);
	$var($String, metaValue_ban, "balinesisk"_s);
	$var($String, metaValue_bug, "buginesisk"_s);
	$var($String, metaValue_ccp, "chakma"_s);
	$var($String, metaValue_cop, "koptisk"_s);
	$var($String, metaValue_got, "gotisk"_s);
	$var($String, metaValue_kpe, "kpelle"_s);
	$var($String, metaValue_men, "mende"_s);
	$var($String, metaValue_pal, "pahlavi"_s);
	$var($String, metaValue_peo, "gammelpersisk"_s);
	$var($String, metaValue_phn, u"fønikisk"_s);
	$var($String, metaValue_saz, "saurashtra"_s);
	$var($String, metaValue_ssy, "saho"_s);
	$var($String, metaValue_uga, "ugaritisk"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kølnsk"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirandesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symboler"_s)
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
			$of("tai tham tham-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of("emiliansk"_s)
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
			$of("gniva- og njivadialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("mingrelsk"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("gammelegyptisk"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("rajasthani"_s)
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
			$of("Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongansk"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of("barlaventa-dialektgruppen av kappverdiansk"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("De forente arabiske emirater"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamsk"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua og Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("etiopisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("gileki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("tidssone"_s)
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
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("inskripsjonsparthisk"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikansk Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Østerrike"_s)
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
			$of(u"Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Aserbajdsjan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"øst-armensk"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia-Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("cebuansk"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumykisk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"mellomhøytysk"_s)
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
			$of("erzia"_s)
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
			$of("Karibisk Nederland"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
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
			$of(u"Bouvetøya"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Hviterussland"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("synlig tale"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("persisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("hebraiske tall"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokosøyene"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazandarani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Den sentralafrikanske republikk"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Sveits"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Elfenbenskysten"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Cookøyene"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaithisk"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Clippertonøya"_s)
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
			$of("Kapp Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Christmasøya"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kypros"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("baliske tall"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Tsjekkia"_s)
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
			$of("pau cin hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of("vestflamsk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"klassisk volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Tyskland"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"gammelhøytysk"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("achinesisk"_s)
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
			$of("goansk konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devanagari-sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danmark"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("punktskrift"_s)
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
			$of(u"små armenske tall"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Den dominikanske republikk"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of("Main-frankisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei-mayek"_s)
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
			$of("Takr"_s),
			$of("takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algerie"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("halv bredde"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(metaValue_pal)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta og Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("chibcha"_s)
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
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estland"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Vest-Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("tsjagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauisk"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuukesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("chinook"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("chipewiansk"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cherokesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spania"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Den europeiske union"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamittisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("gregoriansk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("eurosonen"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("gujarati-sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adygeisk"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("tunisisk-arabisk"_s)
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
			$of(u"Falklandsøyene"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikronesiaføderasjonen"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"språkvariant"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Færøyene"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamilsk"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankrike"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("pikardisk"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelauisk"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of("dajnkoalfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("indisk nasjonalkalender"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("romagnolsk"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("gammelgresk"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("tsakhursk"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("votisk"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Storbritannia"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nigeriansk pidginspråk"_s)
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
			$of("Fransk Guyana"_s)
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
			$of(u"Grønland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("mellomengelsk"_s)
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
			$of("Ekvatorial-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Hellas"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Sør-Georgia og Sør-Sandwichøyene"_s)
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
			$of("pennsylvaniatysk"_s)
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
			$of("ny tai lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("kurdisk (sorani)"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"uten språklig innhold"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("talysj"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("plautdietsch"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkong SAR Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heard- og McDonaldøyene"_s)
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
			$of("sveitsertysk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("islamsk kalender (Umm al-Qura)"_s)
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
			$of("riff"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamasjek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanariøyene"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("minnan"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("kayah li-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napolitansk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("ndyuka-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of("sora sompeng-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zazaisk"_s)
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
			$of("nabataeansk"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"sorteringsrekkefølge for flerspråklige europeiske dokumenter"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Det britiske territoriet i Indiahavet"_s)
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
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("matematisk notasjon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("thailandske sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"sørestisk"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of("wayuu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"dataspråk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("bengalske sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("palatintysk"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamsk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalsk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of("serbisk med ekavisk uttale"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("nyere mellomfransk til 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KOCIEWIE"_s),
			$of("kociewie"_s)
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
			$of("nyasa-tongansk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("kannada-sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fonetisk sorteringsrekkefølge"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("ingrisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("buddhistisk kalender"_s)
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
			$of("Kirgisistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodsja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komorene"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts og Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("nedarvet"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Nord-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Sør-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("pollard-fonetisk"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Caymanøyene"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kyrillisk"_s)
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
			$of("kirkeslavisk kyrillisk"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("gwichin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("nedertysk"_s)
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
			$of("akkadisk"_s)
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
			$of("sentralyupik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(metaValue_pal)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
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
			$of("Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("sora sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladinsk"_s)
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
			$of("laukika"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("mahajani"_s)
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
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Marshalløyene"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("vai-sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Nord-Makedonia"_s)
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
			$of("Macao SAR Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of("gegisk-albansk"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Nord-Marianene"_s)
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
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("kapiz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN-translitterasjon"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"søraltaisk"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivene"_s)
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
			$of("japansk kalender"_s)
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
			$of("inskripsjonspahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Afrika sør for Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("hebraisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("ordlistesortering"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Ny-Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles-romanisering"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("harmonisert revidert ortografi"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Norfolkøya"_s)
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
			$of("psalter pahlavi"_s)
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
			$of("Nederland"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norge"_s)
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
			$of("tsakonisk"_s)
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
			$of("New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("meroitisk kursiv"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("romani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroitisk"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("krimtatarisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("gammelengelsk"_s)
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
			$of("seselwa"_s)
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
			$of("islamsk kalender (tabell, sivil)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("kasjubisk"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("muslimsk tat"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Fransk Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Ny-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippinene"_s)
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
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre-et-Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Pitcairnøyene"_s)
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
			$of(u"Det palestinske området"_s)
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
			$of("nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"små greske tall"_s)
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
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("skotsk standard engelsk"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of("jamaicansk kreolengelsk"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("piemontesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niueansk"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Ytre Oseania"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("ekstremaduransk"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lesgisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("det uraliske fonetiske alfabet (UPA)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("takri-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalsk"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai viet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of("sotavento-dialektgruppen av kappverdiansk"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("verden"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("ao naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Nord-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Sør-Amerika"_s)
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
			$of("pontisk"_s)
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
			$of("%%SURSILV"_s),
			$of("sursilvan"_s)
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
			$of("Russland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of("ny tai lue-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("Metelko-alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("manikeisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi-Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("ponapisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandaisk"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Salomonøyene"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Vest-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellene"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Mellom-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Sverige"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(metaValue_arc)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Øst-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Nord-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("streng linjeskiftstil"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Sentral-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Sørlige Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard og Jan Mayen"_s)
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
			$of("bamum"_s)
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
			$of("tamilske tall"_s)
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
			$of(u"Sør-Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé og Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("algerisk arabisk"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("najdi-arabisk"_s)
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
			$of("egyptisk arabisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("marokkansk-arabisk"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("yapesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("rotumansk"_s)
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
			$of(u"amerikansk målesystem"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Nordlige Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Turks- og Caicosøyene"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tsjad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"De franske sørterritorier"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"amerikansk tegnspråk"_s)
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
			$of("Tadsjikistan"_s)
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
			$of(u"Øst-Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Søk etter første konsonant i hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("boontling"_s)
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
			$of(u"moderne volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Tyrkia"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad og Tobago"_s)
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
			$of("asturisk"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("rusinsk"_s)
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
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("ukjent skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("ligurisk"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("aromansk"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Øst-Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvinsk"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("kongolesisk swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Sør-Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sørøst-Asia"_s)
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
			$of("pinyinsortering"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Sør-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"USAs ytre øyer"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("livisk"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("FN"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("USA"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaiisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("akademisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("forenklet kinesisk sortering - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"prøyssisk"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Usbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("sentralmarokkansk tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("streksortering"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikanstaten"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"gammelprovençalsk"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St. Vincent og Grenadinene"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"De britiske jomfruøyene"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"De amerikanske jomfruøyene"_s)
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
			$of("nogaisk"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("gammelnorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("vest-armensk"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis og Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("tradisjonell sortering"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesia"_s)
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
			$of("Finansielle tall"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of("Hepburn-romanisering"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"forrige sorteringsrekkefølge (for kompatibilitet)"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("walsertysk"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("bassa vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of("meetei mayek-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("wolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"pseudospråk – aksenter"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray-waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"pseudospråk – tekst begge veier"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("avadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of("standard ortografi"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of("brahmiske tall"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"språk uten skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("ol-chiki"_s)
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
			$of("blissymbol"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"nʼko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"standard sorteringsrekkefølge"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("lombardisk"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of("balankadialekten av anii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("resisk dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of("sutsilvan"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("tegnskrift"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of("cham-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Sør-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of("sundanese-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"løs linjeskiftstil"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("georgiske tall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("zhuyin-sortering"_s)
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
			$of("%%PINYIN"_s),
			$of("pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"ukjent område"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("metrisk system"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO 8601-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("nord-sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("telugu-sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("louisianakreolsk"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("naxi geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of("fijiansk hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("forenklet kinesisk-finanstall"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("utvidede arabisk-indiske sifre"_s)
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
			$of("sifre med full bredde"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hettittisk"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("maya-hieroglyfer"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("nord-luri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"emoji-sorteringsrekkefølge"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("klassisk newari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurtisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("islamsk kalender (Saudi-Arabia, observasjon)"_s)
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
			$of("romertall"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of("sharada-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("latgallisk"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("samaritansk arameisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("kaukasus-albansk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("scouse dialekt"_s)
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
			$of("saz"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"jødepersisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Numerisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Språkspesifikke sifre"_s)
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
			$of("Aluku-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of("biscayan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("full bredde"_s)
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
			$of("mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("baluchi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slavey"_s)
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
			$of("tornedalsfinsk"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhya"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("bairisk"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"jødearabisk"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("skotsk"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("siciliansk"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhasisk"_s)
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
			$of(metaValue_ae)
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
			$of("chakma-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amharisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonsk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("stolvizza- og solbicadialekt"_s)
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
			$of("japanske stavelsesskrifter"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assamesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("sassaresisk sardisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"lineær A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avarisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"lineær B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"sørkurdisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("aserbajdsjansk"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("oseacco- og osojanedialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of("Unifon fonetisk alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("basjkirsk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("radikal-strek-sortering"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("hviterussisk"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgarsk"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of("java-tall"_s)
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
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretonsk"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosnisk"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("laotiske sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"n’ko"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkupisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalansk"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("tsjetsjensk"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("revidert ortografi"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korsikansk"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("tsjekkisk"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("kirkeslavisk"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("tsjuvasjisk"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("walisisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("etiopiske tall"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("dansk"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("tysk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("standard valutaformat"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("beja"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of("jysk"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("gammelirsk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("mongolske tall"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
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
			$of("kinesisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of("klassisk kinesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of("samogitisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("greske tall"_s)
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
			$of("normal linjeskiftstil"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldovsk"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("engelsk"_s)
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
			$of("lazisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("tradisjonell kinesisk sortering - Big 5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("spansk"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("han-kinesisk med bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskisk"_s)
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
			$of("samaritansk"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"høysorbisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of("ulster"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("forenklet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("vestlige sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradisjonell"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulfulde"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of("tsjadisk arabisk"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finsk"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fijiansk"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("vestbalutsji"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantonesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"færøysk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("USBGN-translitterasjon"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("fransk"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("vestfrisisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irsk"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"skotsk-gælisk"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galisisk"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"ukjent språk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("etiopisk amete-alem-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("islamsk kalender (tabell, astronomisk)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("mansk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of("osmanya-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
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
			$of("kroatisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitisk"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("ungarsk"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("cajunfransk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("det internasjonale fonetiske alfabet (IPA)"_s)
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
			$of("indonesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tibetanske sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("ibo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("sichuan-yi"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("mellomfransk"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("gammelfransk"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("arpitansk"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"østfrisisk"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("banjar"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("nordfrisisk"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandsk"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italiensk"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("lavschlesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"høgnorsk"_s)
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
			$of(u"gammelsørarabisk"_s)
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
			$of("type.nu.lepc"_s),
			$of("lepecha-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"sørsamisk"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("shavisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("bauddha"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("maduresisk"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("lulesamisk"_s)
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
			$of("enaresamisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
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
			$of("skoltesamisk"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kikongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyu"_s)
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
			$of("kasakhisk"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grønlandsk"_s)
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
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kasjmiri"_s)
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
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdisk"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kornisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgisisk"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of("multani"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of("hatransk armensk"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luxemburgsk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malayalam-sifre"_s)
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
			$of("limburgsk"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friuliansk"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"britisk målesystem"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("thai tham hora-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litauisk"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("latvisk"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdisk"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("gassisk"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshallesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"standard Unicode-sorteringsrekkefølge"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedonsk"_s)
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
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malayisk"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltesisk"_s)
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
			$of("moksja"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(metaValue_arc)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("lavsorbisk"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"generelt søk"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norsk bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("nord-ndebele"_s)
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
			$of("nederlandsk"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("norsk nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norsk"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"sør-ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpakisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabylsk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("polytonisk rettskriving"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("oksitansk"_s)
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
			$of("tidlig moderne engelsk"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("armenske tall"_s)
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
			$of("sentraldusun"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of("modi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("ossetisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of("ALA-LC-romanisering, 1997-utgaven"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardisk"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("mauritisk-kreolsk"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjabi"_s)
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
			$of("resia med Lipovaz-dialekt"_s)
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
			$of("bqi"_s),
			$of("bakhtiari"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polsk"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("mellomnederlandsk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of("sarushatra-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of("vallader"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugisisk"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("mellomirsk"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"sorteringsrekkefølge"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of("bohorisk alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("valutaformat"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"n’ko-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of("jauer"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of("surmiransk"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-timers system (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-timers system (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("brahui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("burmesiske sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapotekisk"_s)
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
			$of("vaidika"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of("saterfrisisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("jyutping"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-timers system (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-timers system (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("retoromansk"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumensk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("odia-sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("kinesiske desimaltall"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("russisk"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akose"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("blissymboler"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kappverdisk"_s)
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
			$of("Dupl"_s),
			$of("duployan stenografi"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("harmonisert ortografi"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardisk"_s)
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
			$of("nordsamisk"_s)
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
			$of("serbokroatisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumerisk"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovakisk"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("slovensk"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("gammeltamilsk"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoansk"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("arabisk-indiske sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albansk"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"valutaformat for regnskapsføring"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"sør-sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("natisonedialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("svensk"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("tradisjonell kinesisk-finanstall"_s)
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
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("burjatisk"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Sentral-Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Vest-Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadsjikisk"_s)
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
			$of("tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmensk"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongansk"_s)
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
			$of("japanske tall"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("tyrkisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komorisk"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatarisk"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("san giorgio- og biladialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Øst-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Nord-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Vest-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uigurisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("gammelitalisk"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("felles"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrainsk"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of("zeeuws"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("koptisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("standardisert resisk ortografi"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmukkisk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("usbekisk"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("tysk ortografi fra 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("nedersaksisk"_s)
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
			$of("minguo-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("khotanesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("timesyklus (12 eller 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("taraskievica-ortografi"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapyk"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of("khowar"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("klassisk syrisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"k’iche’"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"kichwa (Chimborazo-høylandet)"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("vallonsk"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagausisk"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("syriakisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of("kirmancki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lydisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("sumersk-akkadisk kileskrift"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("standard marrokansk tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("moderne standardarabisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"felles kanadiske urspråksstavelser"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("fonxsamp"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("mandsju"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("frakturlatinsk"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("schlesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("anatoliske hieroglyfer"_s)
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
			$of("latinsk"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"gælisk latinsk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("forenklet kinesisk-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("tradisjonell kinesisk-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"små romertall"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("Pamaka-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lykisk"_s)
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
			$of("zoroastrisk dari"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("moon"_s)
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
			$of("eldre nyfransk"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("jiddisk"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("syrisk"_s)
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
			$of("Tradisjonelle tall"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("vestlig syriakisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("ottomansk tyrkisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("estrangelosyriakisk"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("karisk"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("kinesisk"_s)
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
			$of("gammelpermisk"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("linjeskiftstil"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("telefonkatalogsortering"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monotonisk rettskriving"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("japanske finanstall"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("vestmarisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"østlig syriakisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("myanmar shan-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("elbasisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("gammelnordarabisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("ol chiki-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("reformert sortering"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("egyptisk demotisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("egyptisk hieratisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of("itihasa"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("palmyrensk"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("kiembu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("egyptiske hieroglyfer"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("georgisk khutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("forenklet kinesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komipermjakisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("gammelungarsk"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("tradisjonell tysk ortografi"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosraeansk"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("venetiansk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("limbu-tall"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("tradisjonell kinesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("vepsisk"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("khmer-sifre"_s)
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
			$of("valensiansk"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("kypriotisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("samlet tyrkisk-latinsk alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of("serbisk med ijekavisk uttale"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmukhi-sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"flere språk"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"målesystem"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagolittisk"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("kiribatisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("felles ortografi"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karibisk"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamilske sifre"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karatsjajbalkarsk"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingusjisk"_s)
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
			$of("karelsk"_s)
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
			$of("tall"_s)
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
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		})
	}));
	return data;
}

LocaleNames_no::LocaleNames_no() {
}

$Class* LocaleNames_no::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_no, name, initialize, &_LocaleNames_no_ClassInfo_, allocate$LocaleNames_no);
	return class$;
}

$Class* LocaleNames_no::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun