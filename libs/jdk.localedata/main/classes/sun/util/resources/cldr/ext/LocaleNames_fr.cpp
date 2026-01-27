#include <sun/util/resources/cldr/ext/LocaleNames_fr.h>

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

$MethodInfo _LocaleNames_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_fr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_fr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_fr",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_fr_MethodInfo_
};

$Object* allocate$LocaleNames_fr($Class* clazz) {
	return $of($alloc(LocaleNames_fr));
}

void LocaleNames_fr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ae, "avestique"_s);
	$var($String, metaValue_ar, "arabe"_s);
	$var($String, metaValue_bn, "bengali"_s);
	$var($String, metaValue_bo, u"tibétain"_s);
	$var($String, metaValue_el, "grec"_s);
	$var($String, metaValue_he, u"hébreu"_s);
	$var($String, metaValue_hy, u"arménien"_s);
	$var($String, metaValue_ja, "japonais"_s);
	$var($String, metaValue_jv, "javanais"_s);
	$var($String, metaValue_ka, u"géorgien"_s);
	$var($String, metaValue_km, "khmer"_s);
	$var($String, metaValue_ko, u"coréen"_s);
	$var($String, metaValue_la, "latin"_s);
	$var($String, metaValue_lo, "lao"_s);
	$var($String, metaValue_ml, "malayalam"_s);
	$var($String, metaValue_mn, "mongol"_s);
	$var($String, metaValue_my, "birman"_s);
	$var($String, metaValue_or, "odia"_s);
	$var($String, metaValue_si, "cingalais"_s);
	$var($String, metaValue_ta, "tamoul"_s);
	$var($String, metaValue_te, u"télougou"_s);
	$var($String, metaValue_th, u"thaï"_s);
	$var($String, metaValue_ban, "balinais"_s);
	$var($String, metaValue_chr, "cherokee"_s);
	$var($String, metaValue_cop, "copte"_s);
	$var($String, metaValue_got, "gotique"_s);
	$var($String, metaValue_nqo, u"n’ko"_s);
	$var($String, metaValue_phn, u"phénicien"_s);
	$var($String, metaValue_saz, "saurashtra"_s);
	$var($String, metaValue_syr, "syriaque"_s);
	$var($String, metaValue_uga, "ougaritique"_s);
	$var($String, metaValue_vai, u"vaï"_s);
	$var($String, metaValue_zbl, "symboles Bliss"_s);
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
			$of("mirandais"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symboles"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"marwarî"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"émilien"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of(u"mentawaï"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanoua"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("dialecte de Gniva / Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"mingrélien"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("changma kodha"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"égyptien ancien"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phags pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"timné"_s)
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
			$of(u"Île de l’Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongien"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tétoum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorre"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Émirats arabes unis"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamand"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua-et-Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"calendrier éthiopien"_s)
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
			$of("fuseau horaire"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanie"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arménie"_s)
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
			$of("Antarctique"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentine"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("parthe des inscriptions"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Samoa américaines"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Autriche"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australie"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"anglais américain"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Îles Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"myènè"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaïdjan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"arménien oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnie-Herzégovine"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbade"_s)
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
			$of("koumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgique"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("moyen haut-allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarie"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bahreïn"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Bénin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint-Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudes"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivie"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Pays-Bas caribéens"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brésil"_s)
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
			$of("Bhoutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Île Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Biélorussie"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("parole visible"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("calendrier persan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"chiffres hébreux"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Îles Cocos"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazandérani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"République centrafricaine"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suisse"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Îles Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chili"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"kaithî"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Cameroun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Chine"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombie"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Île Clipperton"_s)
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
			$of("Cap-Vert"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Île Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Chypre"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tchéquie"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ékadjouk"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of("flamand occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Allemagne"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("ancien haut allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("aceh"_s)
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
			$of("konkani de Goa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"chiffres dévanagaris"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danemark"_s)
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
			$of("braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"brâhmî"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominique"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"chiffres arméniens minuscules"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"République dominicaine"_s)
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
			$of("franconien du Main"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"zuñi"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigré"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Algérie"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("en demi-chasse"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta et Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampangan"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Équateur"_s)
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
			$of("Estonie"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Égypte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"tchaghataï"_s)
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
			$of("jargon chinook"_s)
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
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Érythrée"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Espagne"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Éthiopie"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Union européenne"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"élamite"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"calendrier grégorien"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("zone euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"chiffres goudjarâtîs"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adyguéen"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("arabe tunisien"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlande"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fidji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Îles Malouines"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Micronésie"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("variante locale"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Îles Féroé"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("France"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("picard"_s)
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
			$of("calendrier indien"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("romagnol"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("grec ancien"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("tsakhour"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("vote"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Royaume-Uni"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"pidgin nigérian"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenade"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Géorgie"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Guyane française"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernesey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"taï-le"_s)
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
			$of("Groenland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("moyen anglais"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambie"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Guinée"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Guinée équatoriale"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Grèce"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Géorgie du Sud-et-les Îles Sandwich du Sud"_s)
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
			$of("pennsilfaanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Guinée-Bissau"_s)
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
			$of(u"nouveau taï-lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("sans contenu linguistique"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("talysh"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("bas-prussien"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("allemand autrichien"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("R.A.S. chinoise de Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Îles Heard-et-MacDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Croatie"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("suisse allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("calendrier musulman (Umm al Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Haïti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hongrie"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("rifain"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamacheq"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Îles Canaries"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("minnan"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indonésie"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("persan ancien"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlande"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napolitain"_s)
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
			$of(u"Israël"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Île de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Inde"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"règles de classement européen"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territoire britannique de l’océan Indien"_s)
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
			$of("Islande"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italie"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"notation mathématique"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"chiffres thaïs"_s)
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
			$of("informatique"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("chiffres bengalis"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("allemand palatin"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("calendrier musulman"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Jamaïque"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordanie"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("gurenne"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japon"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"françoys de 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"aïnou"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("tonga nyasa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("chiffres en kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("allemand suisse"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"ordre de tri phonétique"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("ingrien"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("calendrier bouddhiste"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Amérique latine"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirghizstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambodge"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comores"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Saint-Christophe-et-Niévès"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kannara"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"hérité"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"français canadien"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Corée du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Corée du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"phonétique de Pollard"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"français suisse"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Koweït"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Îles Caïmans"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("cyrillique"_s)
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
			$of("Sainte-Lucie"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("cyrillique (variante slavonne)"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("bas-allemand"_s)
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
			$of("akkadien"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("Hmnp"_s),
			$of("nyiakeng puachue hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of("youpik central"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("pehlevi des livres"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituanie"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettonie"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libye"_s)
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
			$of("lah"_s),
			$of("lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"thâna"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroc"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavie"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Monténégro"_s)
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
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Îles Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"aléoute"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Chiffres en vaï"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Macédoine du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Birmanie)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolie"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("R.A.S. chinoise de Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"guègue"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Îles Mariannes du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritanie"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malte"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Maurice"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"altaï du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexique"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("calendrier japonais"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaisie"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("pehlevi des inscriptions"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibie"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Afrique subsaharienne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"calendrier hébraïque"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("ordre du dictionnaire"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nouvelle-Calédonie"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("touroyo"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Île Norfolk"_s)
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
			$of("pehlevi des psautiers"_s)
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
			$of("Pays-Bas"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norvège"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Népal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of("tsakonien"_s)
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
			$of(u"Nouvelle-Zélande"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("romani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"méroïtique"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"turc de Crimée"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("ancien anglais"_s)
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
			$of(u"créole seychellois"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of("chiffres nyiakeng puachue hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"cunéiforme persépolitain"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"calendrier musulman (tabulaire, époque civile)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("kachoube"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("anglais britannique"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Pérou"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("tati caucasien"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polynésie française"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papouasie-Nouvelle-Guinée"_s)
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
			$of("Pologne"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"éwondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre-et-Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Îles Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Territoires palestiniens"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palaos"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("niha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("chiffres grecs minuscules"_s)
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
			$of(u"anglais standard écossais"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"créole jamaïcain"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"piémontais"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niuéen"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"régions éloignées de l’Océanie"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"estrémègne"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezghien"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"alphabet phonétique ouralique"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"taï viêt"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Monde"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrique"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("Ao"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Amérique du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"La Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Amérique du Sud"_s)
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
			$of("pontique"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Océanie"_s)
		}),
		$$new($ObjectArray, {
			$of("Elym"_s),
			$of(u"élymaïque"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Roumanie"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbie"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russie"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"manichéen"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"kharochthî"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabie saoudite"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("pohnpei"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"mandéen"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Îles Salomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Afrique occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Soudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Amérique centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Suède"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Afrique orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"araméen"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Afrique septentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapour"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Sainte-Hélène"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("style de saut de ligne strict"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Afrique centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Slovénie"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Afrique australe"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard et Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amériques"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovaquie"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("Saint-Marin"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Sénégal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalie"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("chiffres tamouls traditionnels"_s)
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
			$of("Soudan du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tomé-et-Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"arabe algérien"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("arabe najdi"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Saint-Martin (partie néerlandaise)"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syrie"_s)
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
			$of(u"arabe égyptien"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("arabe marocain"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("yapois"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("rotuman"_s)
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
			$of(u"système américain"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Amérique septentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Îles Turques-et-Caïques"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tchad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Terres australes françaises"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"langue des signes américaine"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Thaïlande"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tadjikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Caraïbes"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("rechercher par consonne initiale en hangeul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkménistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("dialecte boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisie"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turquie"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinité-et-Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taïwan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturien"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"ruthène"_s)
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
			$of("Tanzanie"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("ngoumba"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"écriture inconnue"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("ligure"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("aroumain"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Asie de l’Est"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("touvain"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("swahili du Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asie du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Asie du Sud-Est"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Ouganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("ordre pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europe du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Îles mineures éloignées des États-Unis"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("livonien"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Nations Unies"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"États-Unis"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"hawaïen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"ordre chinois simplifié - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("prussien"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Ouzbékistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"amazighe de l’Atlas central"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("ordre des traits"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"État de la Cité du Vatican"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"provençal ancien"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint-Vincent-et-les Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Îles Vierges britanniques"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Îles Vierges des États-Unis"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Viêt Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"nogaï"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("vieux norrois"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasie"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"arménien occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Mélanésie"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis-et-Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("ordre traditionnel"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"région micronésienne"_s)
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
			$of("Chiffres financiers"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"ancien ordre de tri pour compatibilité"_s)
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
			$of("walamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("pseudo-accents"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("pseudo-bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polynésie"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"goudjarâtî"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"non écrit"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("ol tchiki"_s)
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
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Yémen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("ordre de tri standard"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("lombard"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("dialecte de Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"écriture des signes"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afrique du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("style de saut de ligne permissif"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"dévanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"chiffres géorgiens"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("ordre zhuyin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambie"_s)
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
			$of(u"région indéterminée"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runique"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"système métrique"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("calendrier ISO 8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"chiffres télougous"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"créole louisianais"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"matchamé"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of("hindi fidjien"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"chiffres financiers en chinois simplifié"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"chiffres arabes étendus"_s)
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
			$of("chiffres pleine chasse"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hittite"_s)
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
			$of(u"hiéroglyphes mayas"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("lori du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"newarî classique"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("oudmourte"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbou"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("chiffres romains"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("iakoute"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("latgalien"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"araméen samaritain"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("dialecte scouse"_s)
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
			$of(u"judéo-persan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Numérique"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Chiffres natifs"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"gourmoukhî"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"luba-kasaï (ciluba)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("en pleine chasse"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("isangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"luiseño"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"nyankolé"_s)
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
			$of(u"lushaï"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("baloutchi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("esclave"_s)
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
			$of(u"finnois tornédalien"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("bavarois"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("bassa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamoun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"judéo-arabe"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"espagnol d’Espagne"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzema"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"écossais"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sicilien"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhaze"_s)
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
			$of("bbj"_s),
			$of(u"ghomalaʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amharique"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonais"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("dialecte de Stolvizza / Solbica"_s)
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
			$of("katakana ou hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assamais"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("sarde sassarais"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"linéaire A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"linéaire B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("kurde du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbaïdjanais"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"dialecte d’Oseacco / Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bachkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("ordre de tri radical-traits"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"biélorusse"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgare"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bichelamar"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
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
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniaque"_s)
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
			$of(u"séri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("chiffres laotiens"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("cisena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkoupe"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"tchétchène"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"orthographe révisée"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("corse"_s)
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
			$of(u"tchèque"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"slavon d’église"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("nheengatou"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("tchouvache"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("gallois"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"chiffres éthiopiens"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danois"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portugais européen"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("format de devise standard"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("bedja"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of("jute"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("bouguis"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("ancien irlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("chiffres mongols"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("maldivien"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"espagnol d’Amérique latine"_s)
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
			$of("calendrier chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"chinois littéraire"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of("samogitien"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("chiffres grecs"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"éwé"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("style de saut de ligne normal"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldave"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("anglais"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"espéranto"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of("badaga"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of("laze"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("ordre chinois traditionnel - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("espagnol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estonien"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("han avec bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basque"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("bouhide"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"hangûl"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("samaritain"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("chleuh"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("haut-sorabe"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("sinogrammes"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"hanounóo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"simplifié"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("chiffres occidentaux"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("traditionnel"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("peul"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of("arabe tchadien"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finnois"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fidjien"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("baloutchi occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("cantonais"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"féroïen"_s)
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
			$of(u"français"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("frison occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("Wcho"_s),
			$of("wantcho"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"gaélique écossais"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galicien"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhodjpouri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"langue indéterminée"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"calendrier éthiopien Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("goudjarati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"calendrier musulman (tabulaire, époque astronomique)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("mannois"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("haoussa"_s)
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
			$of("croate"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"créole haïtien"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("hongrois"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"héréro"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"français cadien"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"alphabet phonétique international"_s)
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
			$of(u"indonésien"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"chiffres tibétains"_s)
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
			$of("yi du Sichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"moyen français"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"ancien français"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"francoprovençal"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("frison oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("banjar"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("frison du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandais"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italien"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"bas-silésien"_s)
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
			$of("Sara"_s),
			$of("sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of(u"sélayar"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("same du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("shavien"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madurais"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("same de Lule"_s)
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
			$of(u"maïthili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"same d’Inari"_s)
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
			$of("makassar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("same skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingue"_s)
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
			$of(u"maasaï"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("groenlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanouri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("cachemiri"_s)
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
			$of("kurde"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("cornique"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirghize"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"soninké"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luxembourgeois"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"chiffres malayâlams"_s)
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
			$of("limbourgeois"_s)
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
			$of("frioulan"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"système impérial"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituanien"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga (kiluba)"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("letton"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshallais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ordre de tri Unicode par défaut"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"macédonien"_s)
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
			$of("malais"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltais"_s)
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
			$of("mokcha"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("bas-sorabe"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"araméen impérial"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"recherche générique"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norvégien bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ndébélé du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"népalais"_s)
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
			$of(u"néerlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norvégien nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norvégien"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ndébélé du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("chewa"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("polytonique"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("occitan"_s)
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
			$of(u"mendé"_s)
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
			$of(u"chiffres arméniens"_s)
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
			$of("dusun central"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ossète"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabarde"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"créole mauricien"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("pendjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("douala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"sérère"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("dialecte lipovaz de Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("kanembou"_s)
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
			$of("polonais"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"moyen néerlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("calendrier dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pachto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugais"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("moyen irlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("ordre de tri"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"portugais brésilien"_s)
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
			$of("format de devise"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("calendrier"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"metaʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"système horaire de 24 heures (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"système horaire de 24 heures (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("brahoui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("chiffres birmans"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapotèque"_s)
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
			$of(u"makondé"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of("saterlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"éthiopique"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"système horaire de 12 heures (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"système horaire de 12 heures (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("romanche"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("roundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("devise"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("roumain"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("dialecte saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("chiffres oriyas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"nombres décimaux chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("russe"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("capverdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("soukouma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("anglais australien"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sarde"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("soussou"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("same du Nord"_s)
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
			$of("serbo-croate"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of(u"kényang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"sumérien"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovaque"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slovène"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoan"_s)
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
			$of("chiffres arabes"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanais"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of(u"{0} : {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("format de devise comptable"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sotho du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("soundanais"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("dialecte de Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"suédois"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of("chiffres wantcho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("chiffres financiers en chinois traditionnel"_s)
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
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("bouriate"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Asie centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Asie de l’Ouest"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrigna"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugi"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("anglais canadien"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkmène"_s)
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
			$of("tongien"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("boulou"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("diola-fogny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("chiffres japonais"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turc"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("comorien"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("dioula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitien"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("dialecte de San Giorgio / Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Europe de l’Est"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europe du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Europe de l’Ouest"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ouïghour"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("ancien italique"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("caingangue"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("commun"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrainien"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"zélandais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("calendrier copte"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("ourdou"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"orthographe normalisée de Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmouk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("ouzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("orthographe allemande de 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"bas-saxon néerlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"sylotî nâgrî"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"calendrier républicain chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamien"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("khotanais"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"système horaire (12 ou 24 heures)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("orthographe taraskievica"_s)
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
			$of("syriaque classique"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanais"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"quiché"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of("quichua du Haut-Chimborazo"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("wallon"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagaouze"_s)
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
			$of("gan"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of("kirmanjki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lydien"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"cunéiforme suméro-akkadien"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("amazighe standard marocain"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("arabe standard moderne"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"syllabaire autochtone canadien unifié"_s)
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
			$of("mandchou"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"latin (variante brisée)"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"silésien"_s)
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
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"latin (variante gaélique)"_s)
		}),
		$$new($ObjectArray, {
			$of("Nand"_s),
			$of("nandinagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"chiffres en chinois simplifié"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("chiffres en chinois traditionnel"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("chiffres romains minuscules"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lycien"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"médumba"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of("dari zoroastrien"_s)
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
			$of(u"françois académique de 1694"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"moré"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"déséret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Chiffres traditionnels"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("espagnol du Mexique"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("syriaque occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("turc ottoman"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"syriaque estranghélo"_s)
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
			$of("carien"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalendjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("ancien permien"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("style de saut de ligne"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zoulou"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"ordre de l’annuaire"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monotonique"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimboundou"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("chiffres japonais financiers"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"guèze"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("mari occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("syriaque oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"ordre réformé"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("tagal"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"démotique égyptien"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"hiératique égyptien"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"hiéroglyphes égyptiens"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"géorgien khoutsouri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"chinois simplifié"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permiak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("ancien hongrois"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("orthographe allemande traditionnelle"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"kosraéen"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"vénitien"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("chinois traditionnel"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("sundanais"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("vepse"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"kpellé"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("chiffres khmers"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilocano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("valencien"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("syllabaire chypriote"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"alphabet latin altaïque unifié"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("moundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"chiffres gourmoukhîs"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("multilingue"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"système de mesure"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagolitique"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilbertin"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("caribe"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("chiffres tamouls"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karatchaï balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingouche"_s)
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
			$of(u"carélien"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"éfik"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("toulou"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("nombres"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kouroukh"_s)
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

LocaleNames_fr::LocaleNames_fr() {
}

$Class* LocaleNames_fr::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_fr, name, initialize, &_LocaleNames_fr_ClassInfo_, allocate$LocaleNames_fr);
	return class$;
}

$Class* LocaleNames_fr::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun