#include <sun/util/resources/cldr/ext/LocaleNames_et.h>

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

$MethodInfo _LocaleNames_et_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_et, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_et, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_et_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_et",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_et_MethodInfo_
};

$Object* allocate$LocaleNames_et($Class* clazz) {
	return $of($alloc(LocaleNames_et));
}

void LocaleNames_et::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_et::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ae, "avesta"_s);
	$var($String, metaValue_ar, "araabia"_s);
	$var($String, metaValue_bn, "bengali"_s);
	$var($String, metaValue_bo, "tiibeti"_s);
	$var($String, metaValue_el, "kreeka"_s);
	$var($String, metaValue_gu, u"gudžarati"_s);
	$var($String, metaValue_he, "heebrea"_s);
	$var($String, metaValue_hy, "armeenia"_s);
	$var($String, metaValue_ja, "jaapani"_s);
	$var($String, metaValue_jv, "jaava"_s);
	$var($String, metaValue_ka, "gruusia"_s);
	$var($String, metaValue_km, "khmeeri"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_ko, "korea"_s);
	$var($String, metaValue_la, "ladina"_s);
	$var($String, metaValue_lo, "lao"_s);
	$var($String, metaValue_ml, "malajalami"_s);
	$var($String, metaValue_mn, "mongoli"_s);
	$var($String, metaValue_my, "birma"_s);
	$var($String, metaValue_or, "oria"_s);
	$var($String, metaValue_si, "singali"_s);
	$var($String, metaValue_su, "sunda"_s);
	$var($String, metaValue_ta, "tamili"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, "tai"_s);
	$var($String, metaValue_tl, "tagalogi"_s);
	$var($String, metaValue_ban, "bali"_s);
	$var($String, metaValue_bbc, "bataki"_s);
	$var($String, metaValue_bug, "bugi"_s);
	$var($String, metaValue_ccp, u"tšaakma"_s);
	$var($String, metaValue_chr, u"tšerokii"_s);
	$var($String, metaValue_cop, "kopti"_s);
	$var($String, metaValue_gez, "etioopia"_s);
	$var($String, metaValue_got, "gooti"_s);
	$var($String, metaValue_kpe, "kpelle"_s);
	$var($String, metaValue_mak, "makassari"_s);
	$var($String, metaValue_men, "mende"_s);
	$var($String, metaValue_new, "nevari"_s);
	$var($String, metaValue_nqo, "nkoo"_s);
	$var($String, metaValue_osa, u"oseidži"_s);
	$var($String, metaValue_peo, u"vanapärsia"_s);
	$var($String, metaValue_phn, "foiniikia"_s);
	$var($String, metaValue_sat, "santali"_s);
	$var($String, metaValue_saz, u"sauraštra"_s);
	$var($String, metaValue_sog, "sogdi"_s);
	$var($String, metaValue_syr, u"süüria"_s);
	$var($String, metaValue_uga, "ugariti"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($String, metaValue_zbl, u"Blissi sümbolid"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kölni"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("miranda"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"sümbolid"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"aitšami"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marvari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of("tai tham tham numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of("emiilia"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("mentavei"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanva"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("Gniva/Njiva murre"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("megreli"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("egiptuse"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"radžastani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phakpa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of("hudavadi numbrid"_s)
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
			$of("Ascensioni saar"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetumi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of("sinhala lithi numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Araabia Ühendemiraadid"_s)
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
			$of("mruu numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Etioopia kalender"_s)
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
			$of(u"ajavöönd"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albaania"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armeenia"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("Tengwari"_s)
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
			$of("partia raidkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Ameerika Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Austraalia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("Ameerika inglise"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Ahvenamaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("mjene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Aserbaidžaan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("idaarmeenia"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia ja Hertsegoviina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("sebu"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kumõki"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"keskülemsaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of("vanasogdi"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaaria"_s)
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
			$of("ersa"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Hollandi Kariibi mere saared"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasiilia"_s)
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
			$of(u"Bouvet’ saar"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Valgevene"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"nähtava kõne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Pärsia kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("heebrea numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kits"_s),
			$of(u"kitani väike kiri"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kookossaared"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazandaraani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo DV"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Kesk-Aafrika Vabariik"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo Vabariik"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Šveits"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cooki saared"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Tšiili"_s)
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
			$of("Hiina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clippertoni saar"_s)
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
			$of("Roheneemesaared"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Jõulusaar"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Küpros"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("bali numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tšehhi"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ekadžuki"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("ahomi"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"lääneflaami"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of(metaValue_sog)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Saksamaa"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"vanaülemsaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"atšehi"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"tšiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devanaagari numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Taani"_s)
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
			$of("punktkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("braahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"väiketähelised armeenia numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikaani Vabariik"_s)
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
			$of("Maini frangi"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("sunji"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigree"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("taakri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alžeeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("poollaius"_s)
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
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Eesti"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tivi"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egiptus"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Lääne-Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"tšagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("belau"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"tšuugi"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"tšinuki žargoon"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"tšipevai"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"tšokto"_s)
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
			$of("Hispaania"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etioopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Euroopa Liit"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("eelami"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Gregoriuse kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("euroala"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"šaieeni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"gudžarati numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("Induse"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adõgee"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("Tuneesia araabia"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Soome"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidži"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandi saared"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikroneesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("lokaadi variant"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Fääri saared"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Prantsusmaa"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("pikardi"_s)
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
			$of("India rahvuslik kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("romanja"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("vanakreeka"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("tsahhi"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("vadja"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Ühendkuningriik"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Nigeeria pidžinkeel"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gruusia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Prantsuse Guajaana"_s)
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
			$of(u"tai-löö"_s)
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
			$of(u"Gröönimaa"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("keskinglise"_s)
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
			$of("Ekvatoriaal-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Kreeka"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Lõuna-Georgia ja Lõuna-Sandwichi saared"_s)
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
			$of("Pennsylvania saksa"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingiti"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingoni"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"uus tai-lõõ"_s)
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
			$of("mittekeeleline"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"tšurtšeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"talõši"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("mennoniidisaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("Austria saksa"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkongi erihalduspiirkond"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heardi ja McDonaldi saared"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Horvaatia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghemi"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"šveitsisaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("islamikalender (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungari"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("riifi"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tamašeki"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanaari saared"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"lõunamini"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indoneesia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("kaja-lii numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Iirimaa"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napoli"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of("sora numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("tanguudi"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Iisrael"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("Nabatea"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Mani saar"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Euroopa järjestusreeglid"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Briti India ookeani ala"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iraan"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Itaalia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"matemaatiline tähistus"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("tai numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"võru"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of("vajuu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("arvuti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("bengali numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("Pfalzi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of("kirillitsa numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamikalender"_s)
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
			$of(u"štokavi e-line murrak"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordaania"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("farefare"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Jaapan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("hiliskeskprantsuse (kuni 1606)"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
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
			$of(u"tšitonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("kannada numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kaja-lii"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("siddhami"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Šveitsi ülemsaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"foneetiline sortimisjärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("isuri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("budistlik kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Keenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Ladina-Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kõrgõzstan"_s)
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
			$of("Komoorid"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts ja Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"päritud"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("Kanada prantsuse"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Põhja-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Lõuna-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollardi miao"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Šveitsi prantsuse"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuveit"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("uusmelaneesia"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kaimanisaared"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasahstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kirillitsa"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Liibanon"_s)
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
			$of(u"kürilliline kirikuslaavi"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gvitšini"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("alamsaksa"_s)
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
			$of("akadi"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Libeeria"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of("keskjupiki"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("pahlavi raamatukiri"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Leedu"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Läti"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("sora"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Liibüa"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladiino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"vundžo"_s)
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
			$of("Mahj"_s),
			$of(u"mahaadžani"_s)
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
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"nüšu"_s)
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
			$of("Marshalli Saared"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleuudi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("vai numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Põhja-Makedoonia"_s)
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
			$of("Mongoolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macau erihalduspiirkond"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of("geegi"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Põhja-Mariaanid"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritaania"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("Chrs"_s),
			$of("horezmi"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("kapisnoni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("transkriptsioon (UNGEGN)"_s)
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
			$of("Maldiivid"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mehhiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Jaapani kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaisia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambiik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("pahlavi raidkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namiibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Sahara-tagune Aafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("juudi kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"sõnastiku sortimisjärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Uus-Kaledoonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Wade’i-Gilesi latinisatsioon"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("turojo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"ühtlustatud redigeeritud ortograafia"_s)
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
			$of("Nigeeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("pahlavi psalmikiri"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("phahau-hmongi kiri"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holland"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norra"_s)
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
			$of("tsakoonia"_s)
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
			$of(u"tsimši"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Uus-Meremaa"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("meroe kursiivkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("mustlaskeel"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroe"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("krimmitatari"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("vanainglise"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Omaan"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"seišelli"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of("phahau-hmongi numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("islami ilmalik kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"kašuubi"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Briti inglise"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peruu"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"lõunataadi"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Prantsuse Polüneesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Paapua Uus-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipiinid"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poola"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("evondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre ja Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairni saared"_s)
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
			$of("Palestiina alad"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Belau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("niasi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"väiketähelised kreeka numbrid"_s)
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
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"šoti tavainglise"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of("Jamaica kreoolkeel"_s)
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
			$of("Okeaania hajasaared"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("estremenju"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lesgi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of("ahomi numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA foneetika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("taakri numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai-vieti"_s)
		}),
		$$new($ObjectArray, {
			$of("Maka"_s),
			$of(metaValue_mak)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("maailm"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Aafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("ao"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Põhja-Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Lõuna-Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ložban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("pontose"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"redžangi"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Okeaania"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumeenia"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("mruu"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Venemaa"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"uue tai-lõõ numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("mani"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Araabia"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("poonpei"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandea"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Saalomoni Saared"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("taswaqi"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Lääne-Aafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Seišellid"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudaan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Kesk-Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Rootsi"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Ida-Aafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("aramea"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Põhja-Aafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"jäik reavahetuse laad"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Kesk-Aafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Sloveenia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of("myanmari tai laing numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Lõuna-Aafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard ja Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakkia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("bamumi"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("voleai"_s)
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
			$of("Somaalia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapudunguni"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("traditsioonilised tamili numbrid"_s)
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
			$of(u"Lõuna-Sudaan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé ja Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"Alžeeria araabia"_s)
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
			$of(u"Süüria"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("jao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Svaasimaa"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("aravaki"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of("Egiptuse araabia"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("Maroko araabia"_s)
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
			$of(u"USA mõõdustik"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Ameerika põhjaosa"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks ja Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangbeni"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Tšaad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Prantsuse Lõunaalad"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of("Ameerika viipekeel"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tai"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadžikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Kariibi piirkond"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Ida-Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("jemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"otsing korea alguskonsonandi järgi"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Türkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("boontlingi"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tuneesia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Türgi"_s)
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
			$of("astuuria"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("russiini"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("roviana"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orhoni"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tansaania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"määramata kiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("hudavadi"_s)
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
			$of("aromuuni"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Ida-Aasia"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tõva"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("Kongo suahiili"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Lõuna-Aasia"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Kagu-Aasia"_s)
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
			$of(u"pinyin’i sortimisjärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Lõuna-Euroopa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Ühendriikide hajasaared"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("liivi"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Ühinenud Rahvaste Organisatsioon"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Ameerika Ühendriigid"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("havai"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("akadeemiline"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"hiina lihtsustatud sortimisjärjestus (GB2312)"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("preisi"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Usbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamasikti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"kriipsude sortimisjärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiembooni"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("vanaprovansi"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent ja Grenadiinid"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Briti Neitsisaared"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("USA Neitsisaared"_s)
		}),
		$$new($ObjectArray, {
			$of("Soyo"_s),
			$of("sojombo"_s)
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
			$of("nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rvaa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"vanapõhja"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australaasia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"läänearmeenia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melaneesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis ja Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"traditsiooniline sortimisjärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikroneesia (piirkond)"_s)
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
			$of("noviaal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("finantsnumbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of("Hepburni latinisatsioon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"varasem sortimisjärjestus (ühilduvuse jaoks)"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("valsi"_s)
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
			$of("meitei numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("volaita"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"vašo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("pseudo-aktsent"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("varai"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("avadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polüneesia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of("normitud kirjaviis"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of("braahmi numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("kirjakeeleta"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(metaValue_sat)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("varlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(metaValue_bbc)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jeemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"standardne sortimisjärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("lombardi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zanb"_s),
			$of("Dzanabadzari ruutkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fangi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Resia murre"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("viipekiri"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"tšaami numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Lõuna-Aafrika Vabariik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of("sunda numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("paindlik reavahetuse laad"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanaagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("gruusia numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"zhuyin’i sortimisjärjestus"_s)
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
			$of("pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("tundmatu piirkond"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("ruunikiri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"meetermõõdustik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601 kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"põhjasotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("telugu numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("Louisiana kreoolkeel"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("nasi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"matšame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"Fidži hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("lihtsustatud hiina keele finantsnumbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligainoni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("laiendatud idaaraabia numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nueri"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("siuu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"täislaiusega numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("heti"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargi"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("davida"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"maaja hieroglüüfkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"põhjaluri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"emoji sortimisjärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("vananevari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurdi"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"islamikalender (Saudi Araabia, vaatluspõhine)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandave"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Rooma numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("jakuudi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"šaarada numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("latgali"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Samaaria aramea"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("albaani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("scouse"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasaki"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(metaValue_sat)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("tifinagi"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"juudipärsia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Numbriline"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("kohalikud numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambai"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.diak"_s),
			$of("divehi numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of("tirhuta numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"täislaius"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luisenjo"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("njankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("njamvesi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("njoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipiini"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmongi"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delavari"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"lušei"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"belutši"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("sleivi"_s)
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
			$of("type.nu.wara"_s),
			$of("hoo numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"meä"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhja"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("baieri"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamuni"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("juudiaraabia"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Euroopa hispaania"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"šoti"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sitsiilia"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afari"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abhaasi"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaliik"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(metaValue_bbc)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaani"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"tšaakma numbrid"_s)
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
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragoni"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("Stolvizza/Solbica murre"_s)
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
			$of("jaapani silpkirjad"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assami"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("lineaarkiri A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avaari"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("lineaarkiri B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"lõunakurdi"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"aserbaidžaani"_s)
		}),
		$$new($ObjectArray, {
			$of("Rohg"_s),
			$of("rohingja"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"hodžki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Oseacco/Osojane murre"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"baškiiri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"võtmete-kriipsude sortimisjärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("valgevene"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgaaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of("jaava numbrid"_s)
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
			$of("dogribi"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretooni"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneka"_s)
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
			$of("lao numbrid"_s)
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
			$of(u"sölkupi"_s)
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
			$of("uus kirjaviis"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korsika"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("krii"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"tšehhi"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("kirikuslaavi"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("njengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"tšuvaši"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"kõmri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("etioopia numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("jii"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("taani"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("Euroopa portugali"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("saksa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("standardne rahavorming"_s)
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
			$of(u"jüüti"_s)
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
			$of("vanaiiri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("mongoli numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("maldiivi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Ladina-Ameerika hispaania"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("betavi"_s)
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
			$of("Hiina kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of("klassikaline hiina"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("lisu"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"žemaidi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("kreeka numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("eve"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafuti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("harilik reavahetuse laad"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("inglise"_s)
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
			$of(u"hiina traditsiooniline sortimisjärjestus (Big5)"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("hispaania"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("eesti"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanbi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baski"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("buhidi"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("Samaaria"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"šilha"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"ülemsorbi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("hani"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"šani"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"pärsia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("lihtsustatud"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("araabia numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("traditsiooniline"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"Tšaadi araabia"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("sjangi"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("soome"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fidži"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("foni"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"läänebelutši"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantoni"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"fääri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("transkriptsioon (BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("prantsuse"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"läänefriisi"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("iiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Wcho"_s),
			$of(u"vantšo"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("gaeli"_s)
		}),
		$$new($ObjectArray, {
			$of("Gong"_s),
			$of(u"Gūnjāla gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galeegi"_s)
		}),
		$$new($ObjectArray, {
			$of("Gonm"_s),
			$of("Masarami gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guaranii"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bhodžpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"määramata keel"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Etioopia amete alemi kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("islamikalender (tabulaarne, astronoomiline ajastu)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"mänksi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of("osmani numbrid"_s)
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
			$of("bikoli"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("edo"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hirimotu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("horvaadi"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("ungari"_s)
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
			$of(u"cajun’i"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("IPA foneetika"_s)
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
			$of("indoneesia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tiibeti numbrid"_s)
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
			$of("nuosu"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("keskprantsuse"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("injupiaki"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("vanaprantsuse"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("frankoprovansi"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("idafriisi"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"bandžari"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"põhjafriisi"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandi"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("itaalia"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktituti"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("alamsileesia"_s)
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
			$of(u"Lõuna-Araabia"_s)
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
			$of("selajari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"leptša numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("komi (Aafrika)"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"lõunasaami"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"Shaw’ kiri"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madura"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lule saami"_s)
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
			$of("Inari saami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(metaValue_mak)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("mustjalaindiaani"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("uu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("koltasaami"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("malinke"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
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
			$of("kvanjama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kasahhi"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grööni"_s)
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
			$of(u"kašmiiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("Cirthi"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"leptša"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
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
			$of("Multani"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of("Hatra"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("letseburgi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malajalami numbrid"_s)
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
			$of("limburgi"_s)
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
			$of("friuuli"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"inglise mõõdustik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("tai tham hora numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("leedu"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Katanga luba"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(metaValue_sog)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"läti"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malagassi"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"maršalli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Unicode’i sortimise vaikejärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maoori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedoonia"_s)
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
			$of("malai"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("malta"_s)
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
			$of(u"mokša"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("alamsorbi"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("vanaaramea"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"üldeesmärgiline otsing"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norra bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"põhjandebele"_s)
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
			$of("mandari"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("hollandi"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("uusnorra"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norra"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"lõunandebele"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of("modi numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navaho"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpaki"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"njandža"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"katšini"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabiili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"polütooniline"_s)
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
			$of("oj"_s),
			$of(u"odžibvei"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("armeenia numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kaavi"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of("keskdusuni"_s)
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
			$of("osseedi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of("ALA-LC latinisatsioon (1997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"bišnuprija"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabardi-tšerkessi"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Mauritiuse kreoolkeel"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranani"_s)
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
			$of("sereri"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"Resia Lipovaz’i murre"_s)
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
			$of("poola"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("keskhollandi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"sauraštra numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"puštu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugali"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("keskiiri"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"sortimisjärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Brasiilia portugali"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tjapi"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("rahavorming"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of("nkoo numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"bradži"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("meta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-tunnine süsteem (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-tunnine süsteem (1–24)"_s)
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
			$of("birma numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ketšua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("sapoteegi"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("tai-thami"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(metaValue_gez)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of("saterfriisi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-tunnine süsteem (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-tunnine süsteem (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"romanši"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"vääring"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumeenia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("saho murre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("oria numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"hiina kümnendnumbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("vene"_s)
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
			$of("ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmaki"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("Austraalia inglise"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Duployé kiirkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskriti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"ühtlustatud ortograafia"_s)
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
			$of(u"põhjasaami"_s)
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
			$of("serbia-horvaadi"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumeri"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovaki"_s)
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
			$of("sn"_s),
			$of(u"šona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somaali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("idaaraabia numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albaania"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("svaasi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("arvelduse rahavorming"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"lõunasotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Natisone murre"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("rootsi"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suahiili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of(u"vantšo numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("traditsioonilise hiina keele finantsnumbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("ibani"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Aasia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("burjaadi"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Kesk-Aasia"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Lääne-Aasia"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tadžiki"_s)
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
			$of("en_CA"_s),
			$of("Kanada inglise"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"türkmeeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tsvana"_s)
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
			$of("fonji"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("jaapani numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"türgi"_s)
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
			$of("komoori"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatari"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("djula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("tvii"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahiti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("San Giorgio/Bila murre"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Euroopa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Ida-Euroopa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.rohg"_s),
			$of("rohingja numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Põhja-Euroopa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("daza"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Lääne-Euroopa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uiguuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("vanaitali"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("korea segakiri"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("kaingangi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"üldine"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of("zeelandi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("kopti kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("normitud Resia kirjaviis"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalmõki"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("usbeki"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("saksa reformitud kirjaviis"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("Hollandi alamsaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("siloti"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("hoo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Hiina Vabariigi kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnami"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("saka"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"12 või 24 tunni süsteem"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("Taraskievica ortograafia"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapüki"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of("khovari"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"vanasüüria"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmani"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"kitše"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of("Masarami gondi numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of(metaValue_new)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("vallooni"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauusi"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of(u"Gūnjāla gondi numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("kani"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"kõrmandžki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"lüüdia"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("sumeri-akadi kiilkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volofi"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("tamasikti (Maroko)"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"tänapäeva araabia kirjakeel"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"Kanada põlisrahvaste ühtlustatud silpkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gajo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"mandžu"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("ladina fraktuurkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("sileesia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"Anatoolia hieroglüüfkiri"_s)
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
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("ladina gaeli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("lihtsustatud hiina keele numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("traditsioonilise hiina keele numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("koosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"väiketähelised Rooma numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("bilini"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"lüükia"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("Mooni"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohoogi"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("varajane moodne prantsuse"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidiši"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("more"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("desereti"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("joruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("traditsioonilised numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("Mehhiko hispaania"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"läänesüüria"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"osmanitürgi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"süüria estrangelo"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"tšuangi"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("kaaria"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"kalendžini"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("hiina"_s)
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
			$of("vanapermi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("reavahetuse laad"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("suulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"telefoniraamatu sortimisjärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monotoonne"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"šaarada"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("mbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("jaapani finantsnumbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"tšaami"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(metaValue_gez)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"mäemari"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"idasüüria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("myanmari shan numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasani"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"Põhja-Araabia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("santali numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"reformitud sortimisjärjestus"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("egiptuse demootiline"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("egiptuse hieraatiline"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmyra"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"egiptuse hieroglüüfkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("hutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("lihtsustatud hiina"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("permikomi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("vanaungari"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("saksa traditsiooniline kirjaviis"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosrae"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("veneti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("limbu numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("traditsiooniline hiina"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("vepsa"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("khmeeri numbrid"_s)
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
			$of("valentsia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"Küprose silpkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Diak"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"ühtlustatud türgi-ladina tähestik"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of(u"štokavi ije-line murrak"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundangi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmukhi numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("mitu keelt"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kado"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"mõõdustik"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("maskogi"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagoolitsa"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"üldlevinud kirjaviis"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("kariibi"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("kajuka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamili numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karatšai-balkaari"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"inguši"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of("kinaraia"_s)
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
			$of("efi"_s),
			$of("efiki"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("tulu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("numbrid"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kuruhhi"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"šambala"_s)
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

LocaleNames_et::LocaleNames_et() {
}

$Class* LocaleNames_et::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_et, name, initialize, &_LocaleNames_et_ClassInfo_, allocate$LocaleNames_et);
	return class$;
}

$Class* LocaleNames_et::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun