#include <sun/util/resources/cldr/ext/LocaleNames_ast.h>

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

$MethodInfo _LocaleNames_ast_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ast, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ast, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ast_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ast",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ast_MethodInfo_
};

$Object* allocate$LocaleNames_ast($Class* clazz) {
	return $of($alloc(LocaleNames_ast));
}

void LocaleNames_ast::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ast::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"árabe"_s);
	$var($String, metaValue_bn, u"bengalín"_s);
	$var($String, metaValue_bo, "tibetanu"_s);
	$var($String, metaValue_el, "griegu"_s);
	$var($String, metaValue_he, u"hebréu"_s);
	$var($String, metaValue_hy, "armeniu"_s);
	$var($String, metaValue_ja, u"xaponés"_s);
	$var($String, metaValue_jv, u"xavanés"_s);
	$var($String, metaValue_ka, "xeorxanu"_s);
	$var($String, metaValue_km, u"ḥemer"_s);
	$var($String, metaValue_kn, u"canarés"_s);
	$var($String, metaValue_ko, "coreanu"_s);
	$var($String, metaValue_la, u"llatín"_s);
	$var($String, metaValue_lo, "laosianu"_s);
	$var($String, metaValue_ml, "malayalam"_s);
	$var($String, metaValue_mn, "mongol"_s);
	$var($String, metaValue_my, "birmanu"_s);
	$var($String, metaValue_or, "oriya"_s);
	$var($String, metaValue_si, u"cingalés"_s);
	$var($String, metaValue_su, u"sondanés"_s);
	$var($String, metaValue_ta, "tamil"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, u"tailandés"_s);
	$var($String, metaValue_tl, "tagalog"_s);
	$var($String, metaValue_ban, u"balinés"_s);
	$var($String, metaValue_got, u"góticu"_s);
	$var($String, metaValue_kpe, "kpelle"_s);
	$var($String, metaValue_men, "mende"_s);
	$var($String, metaValue_nqo, u"n’ko"_s);
	$var($String, metaValue_peo, "persa antiguu"_s);
	$var($String, metaValue_phn, "feniciu"_s);
	$var($String, metaValue_saz, "saurashtra"_s);
	$var($String, metaValue_ssy, "saho"_s);
	$var($String, metaValue_syr, "siriacu"_s);
	$var($String, metaValue_uga, u"ugaríticu"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("colonianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandés"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"símbolos"_s)
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
			$of(u"numberación Tai Tham Tham"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of("emilianu"_s)
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
			$of("dialectu gniva/njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("mingrelianu"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("exipciu antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"rajasthanín"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"escritura ‘Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("timne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"númberos Khudawadi"_s)
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
			$of("terena"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Islla Ascensión"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotonganu"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of("grupu dialectal barlavento del cabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"númberos Lith cingaleses"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emiratos Árabes Xuníos"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamencu"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganistán"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua y Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"númberos mro"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"calendariu etíope"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("gilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguila"_s)
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
			$of(u"L’Antártida"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Arxentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"partu d’inscripciones"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Americana"_s)
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
			$of(u"inglés d’Estaos Xuníos"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Islles Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaixán"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("armeniu oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia y Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("cebuanu"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladex"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bélxica"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"altualemán mediu"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Fasu"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Baḥréin"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Benín"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"San Bartolomé"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Les Bermudes"_s)
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
			$of(u"Brunéi"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Caribe neerlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Les Bahames"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Bután"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Islla Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsuana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bielorrusia"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("fala visible"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("calendariu persa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"númberos hebreos"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Canadá"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Islles Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congu - Kinxasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"República Centroafricana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congu - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suiza"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Costa de Marfil"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Islles Cook"_s)
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
			$of(u"Camerún"_s)
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
			$of("Islla Clipperton"_s)
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
			$of("Cabu Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Islla Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Xipre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"númberos balineses"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Chequia"_s)
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
			$of("flamencu occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"volapük clásicu"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Alemaña"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"altualemán antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"achinés"_s)
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
			$of("goan konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"númberos devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Xibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Dinamarca"_s)
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
			$of("brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"númberos armenios en minúscules"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"República Dominicana"_s)
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
			$of("franconianu del Main"_s)
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
			$of("Takr"_s),
			$of("takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Arxelia"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta y Melilla"_s)
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
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Exiptu"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Sáḥara Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauanu"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"chuukés"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"xíriga chinook"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("chipewyanu"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"númberos matemáticos en negrina"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cheroqui"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"España"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Etiopía"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Xunión Europea"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamita"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("calendariu gregorianu"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eurozona"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"númberos gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"árabe de Túnez"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Islles Fixi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falkland Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Islles Feroe"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"pícaru"_s)
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
			$of("alfabetu dajnko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("calendariu nacional indiu"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"romañol"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("griegu antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gabón"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("tsakhur"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"vóticu"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Reinu Xuníu"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nixerianu simplificáu"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Granada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Xeorxa"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guyana Francesa"_s)
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
			$of("Xibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Groenlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"inglés mediu"_s)
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
			$of("Guadalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Guinea Ecuatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grecia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Islles Xeorxa del Sur y Sandwich del Sur"_s)
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
			$of(u"alemán de Pennsylvania"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(u"númberos matemáticos monoespaciaos"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Guinea-Bisáu"_s)
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
			$of("tai lue nuevu"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("kurdu central"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ensin conteníu llingüísticu"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"talixín"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("plautdietsch"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"alemán d’Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ARE China de Ḥong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Islles Heard y McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hondures"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Croacia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"alemán de Suiza"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"calendariu islámicu (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Haití"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Hungría"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("rifianu"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Islles Canaries"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("chinu min nan"_s)
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
			$of("Adlm"_s),
			$of("adlm"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"númberos Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napolitanu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("dialectu ndyuka"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"númberos Sora Sompeng"_s)
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
			$of(u"nabatéu"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Islla de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"regles d’ordenamientu europees"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territoriu Británicu del Océanu Índicu"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Irán"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islandia"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"escritura matemática"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"númberos tailandeses"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of("voro"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of("wayuu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("ordenador"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"númberos bengalinos"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"alemán palatinu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"númberos cirílicos"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"calendariu islámicu"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Xamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of(u"serbiu con pronunciación ekaviana"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Xordania"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Xapón"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"últimu francés mediu fasta 1606"_s)
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
			$of("tonga nyasa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"numberación kannada"_s)
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
			$of("de_CH"_s),
			$of(u"altualemán de Suiza"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("ingrianu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("calendariu budista"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"América Llatina"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirguistán"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Camboya"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Les Comores"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts y Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"heredáu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"francés de Canadá"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Corea del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Corea del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"fonéticu de Pollard"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"francés de Suiza"_s)
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
			$of(u"Islles Caimán"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazakstán"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"cirílicu"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Líbanu"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Santa Llucía"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"eslavónicu cirílicu eclesiásticu antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"baxu alemán"_s)
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
			$of("acadianu"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"cópticu"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of("yupik central"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesothu"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("pahlavi de llibros"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburgu"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letonia"_s)
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
			$of("Libia"_s)
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
			$of("Mahj"_s),
			$of("mahajani"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marruecos"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Mónacu"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavia"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"nüshu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegru"_s)
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
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Islles Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"númberos vai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"númberos matemáticos con trazu doble"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Malí"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Birmania)"_s)
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
			$of(u"ARE China de Macáu"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"gheg d’Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Islles Marianes del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("La Martinica"_s)
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
			$of("capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauriciu"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("altai del sur"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Les Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malaui"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Méxicu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"calendariu xaponés"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malasia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"pahlavi d’inscripciones"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"calendariu hebréu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"orde de clasificación de diccionariu"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nueva Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"romanización de Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"ortografía unificada revisada"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"El Níxer"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Islla Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nixeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("pahlavi de salteriu"_s)
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
			$of(u"Países Baxos"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noruega"_s)
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
			$of("tsakoniu"_s)
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
			$of("Nueva Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"meroíticu en cursiva"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of(u"convención ortográfica brasilanu-portuguesa de 1945"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"romaní"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"meroíticu"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("turcu de Crimea"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"inglés antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Omán"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"francés criollu seselwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"númberos Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panamá"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"calendariu islámicu (tabular, época civil)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("kashubianu"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"inglés de Gran Bretaña"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Perú"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"tati musulmán"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polinesia Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papúa Nueva Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipines"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Paquistán"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre y Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Islles Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puertu Ricu"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Territorios Palestinos"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Paláu"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"númberos griegos en minúscules"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Paraguái"_s)
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
			$of(u"inglés estándar escocés"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"inglés criollu xamaicanu"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"piamontés"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niueanu"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Oceanía esterior"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"estremeñu"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezghianu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"númberos ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"fonética UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"númberos takri"_s)
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
			$of("grupu dialectal sotavento del cabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Mundu"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"África"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("ao naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Norteamérica"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reunión"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"América del Sur"_s)
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
			$of(u"pónticu"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Oceanía"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rumanía"_s)
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
			$of("Rusia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"numberación Tai Lue nueva"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("alfabetu metelko"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"maniquéu"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("pohnpeianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"mandéu"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Islles Salomón"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"África Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Les Seixeles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sudán"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"América Central"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Suecia"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"África Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"araméu"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"África del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("saltu de llinia estrictu"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"África Central"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Eslovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"númberos Tai Laing de Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"África del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard ya Islla Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"América"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Eslovaquia"_s)
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
			$of("Sierra Lleona"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"San Marín"_s)
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
			$of("mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"númberos tamil tradicionales"_s)
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
			$of(u"Sudán del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Santu Tomé y Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"árabe d’Arxelia"_s)
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
			$of("Siria"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Suazilandia"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"árabe d’Exiptu"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"árabe de Marruecos"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"yapés"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("rotumanu"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Tristán da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"sistema de midida d’EE.XX."_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"América del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Islles Turques y Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Tierres Australes Franceses"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of("llingua de signos americana"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togu"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailandia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Taxiquistán"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Caribe"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Tokeláu"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"gueta por consonante Hangul d’aniciu"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmenistán"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunicia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"volapük modernu"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Turquía"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidá y Tobagu"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taiwán"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturianu"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("rusyn"_s)
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
			$of("escritura desconocida"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("khudabadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ucraína"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("ligurianu"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("aromanianu"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asia Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvinianu"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"suaḥili del Congu"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sureste Asiáticu"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("chinu hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"orde de clasificación pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Islles Perifériques Menores de los EE.XX."_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("livonianu"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Naciones Xuníes"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Estaos Xuníos"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaianu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"académicu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"orde de clasificación chinu simplificáu - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Uruguái"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("prusianu"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbequistán"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazight del Atles central"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"orde de clasificación pol trazu"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Ciudá del Vaticanu"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("provenzal antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("San Vicente y Granadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Islles Vírxenes Britániques"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Islles Vírxenes Americanes"_s)
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
			$of("marc"_s)
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
			$of("noruegu antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("armeniu occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis y Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"orde de clasificación tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Rexón de Micronesia"_s)
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
			$of("avk"_s),
			$of("kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"romanización de Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"orde de clasificación anterior, por compatibilidá"_s)
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
			$of("bassa vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"númberos Meetei Mayek"_s)
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
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinesia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of(u"ortografía estándar"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"númberos brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("guyarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("non escritu"_s)
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
			$of(u"símbolos de Bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"orde de clasificación estándar"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("lombardu"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of("dialectu balanka del anii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("resianu"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("escritura de signos"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"númberos cham"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Sudáfrica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"númberos sondaneses"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"saltu de llinia relaxáu"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"númberos xeorxanos"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"orde de clasificación zhuyin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ḥiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"romanización pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabue"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Rexón desconocida"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runes"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"sistema métricu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("calendariu ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho del norte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"númberos telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("geba del naxi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of("hindi de Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"númberos chinos financieros simplificaos"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"númberos arábico-índicos estendíos"_s)
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
			$of(u"númberos n’anchu completu"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hitita"_s)
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
			$of(u"xeroglíficos mayes"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("luri del norte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"orde de clasificación Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("coptu"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"newari clásicu"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"calendariu islámicu (Arabia Saudita, visual)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"sandavés"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"númberos romanos"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"númberos sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("latgalianu"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"araméu samaritanu"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"cáucaso-albanés"_s)
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
			$of("xudeo-persa"_s)
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
			$of("dialectu aluku"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"númberos tirhuta"_s)
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
			$of(u"filipín"_s)
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
			$of("slave"_s)
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
			$of(u"númberos Warang Citi"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"finlandés de Tornedalen"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"bávaru"_s)
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
			$of("%%ABL1943"_s),
			$of(u"formulación ortográfica de 1943"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"xudeo-árabe"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"español européu"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("scots"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sicilianu"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhazianu"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("batak toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avestanín"_s)
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
			$of(u"númberos chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amháricu"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonés"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("dialectu stolvizza/solbica"_s)
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
			$of("silabarios xaponeses"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asamés"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"sardu sassarés"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("llinial A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"aváricu"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("llinial B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("kurdu del sur"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbaixanu"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("dialectu oseacco/osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of(u"alfabetu fonéticu Unifon"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"orde de clasificación por radical y trazu"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bielorrusu"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"búlgaru"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"númberos xavanesos"_s)
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
			$of(u"bretón"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniu"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of("bhks"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"séneca"_s)
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
			$of(u"númberos laosianos"_s)
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
			$of("selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"catalán"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("chechenu"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"ortografía revisada"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("corsu"_s)
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
			$of("checu"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"eslávicu eclesiásticu"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"galés"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"númberos etíopes"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"danés"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portugués européu"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"alemán"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"formatu monetariu estándar"_s)
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
			$of(u"jutlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("lontara"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"irlandés antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"númberos mongoles"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"español d’América Llatina"_s)
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
			$of("calendariu chinu"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of("chinu lliterariu"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("alfabetu de Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of("samogitianu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"númberos griegos"_s)
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
			$of("saltu de llinia normal"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldavu"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"inglés"_s)
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
			$of("laz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"orde de clasificación chinu tradicional - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"español"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estoniu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("vascu"_s)
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
			$of("samaritanu"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("altu sorbiu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"hanunó’o"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"simplificáu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"númberos occidentales"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"árabe chadianu"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("chinu xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fixanu"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("balochi occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"cantonés"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"feroés"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"francés"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"frisón occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"gaélicu escocés"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("gallegu"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("llingua desconocida"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"calendariu etíope Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"guyaratí"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"calendariu islámicu (tabular, época astronómica)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"manés"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"númberos osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ḥausa"_s)
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
			$of("croata"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitianu"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"húngaru"_s)
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
			$of(u"francés cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"fonética IPA"_s)
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
			$of("indonesiu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"númberos tibetanos"_s)
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
			$of(u"yi de Sichuán"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"francés mediu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of(u"alcuerdu ortográficu de 1990 pa la llingua portuguesa"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"francés antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("arpitanu"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"frisón oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("banjar"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"frisón del norte"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandés"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italianu"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("baxu silesianu"_s)
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
			$of(u"árabe del sur antiguu"_s)
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
			$of(u"selayarés"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"númberos lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("sami del sur"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("shavianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madurés"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("lule sami"_s)
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
			$of("inari sami"_s)
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
			$of("chinu wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("skolt sami"_s)
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
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masái"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kazaquistanín"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalaallisut"_s)
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
			$of(u"cachemirés"_s)
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
			$of(u"avésticu"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("curdu"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"córnicu"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirguistanín"_s)
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
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of("hatranu"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburgués"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"númberos malayalam"_s)
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
			$of(u"limburgués"_s)
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
			$of("friulianu"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("sistema de midida imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"numberación Tai Tham Hora"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituanu"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"letón"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshallés"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"orde de clasificación Unicode predetermináu"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maorí"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("macedoniu"_s)
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
			$of("malayu"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltés"_s)
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
			$of("moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("baxu sorbiu"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("aramaicu imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("gueta xeneral"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"noruegu Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele del norte"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepalés"_s)
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
			$of(u"neerlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("noruegu Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("noruegu"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele del sur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"númberos modi"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of("osge"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("kara-kalpak"_s)
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
			$of(u"kabileñu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"politónicu"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("occitanu"_s)
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
			$of(u"inglés modernu primitivu"_s)
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
			$of(u"númberos armenios"_s)
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
			$of("Modi"_s),
			$of("modi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"oséticu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of("romanizacion ALA-LC, edicion de 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"punyabí"_s)
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
			$of("el dialectu lipovaz del resianu"_s)
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
			$of("polacu"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"neerlandés mediu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"númberos saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("calendariu dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashtu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugués"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"írlandés mediu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"orde de clasificación"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"portugués del Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"alfabetu bohorič"_s)
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
			$of("formatu monetariu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"númberos N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("calendariu"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"sistema de 24 hores (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"sistema de 24 hores (1–24)"_s)
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
			$of(u"númberos de Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapoteca"_s)
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
			$of(u"frisón de Saterland"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"etíope"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"sistema de 12 hores (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"sistema de 12 hores (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("romanche"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("moneda"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumanu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"númberos odia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"númberos decimales chinos"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rusu"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"simbólicu Bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("cabuverdianu"_s)
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
			$of(u"inglés d’Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"taquigrafía Duployé"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"sánscritu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"ortografía unificada"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardu"_s)
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
			$of("sami del norte"_s)
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
			$of("serbo-croata"_s)
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
			$of("sumeriu"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("eslovacu"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("eslovenu"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoanu"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somalín"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"númberos arábico-índicos"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanu"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbiu"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("formatu monetariu contable"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sotho del sur"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("dialectu natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("suecu"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"suaḥili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"númberos chinos financieros tradicionales"_s)
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
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Asia Central"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"taxiquistanín"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"buginés"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"inglés de Canadá"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turcomanu"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonganu"_s)
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
			$of(u"númberos xaponeses"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turcu"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("comorianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tártaru"_s)
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
			$of("tahitianu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("dialectu San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"númberos matemáticos Sans-Serif en negrina"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uigur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"itálicu antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"común"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ucraín"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"zeelandés"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("calendariu coptu"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"ortografía resiana estandarizada"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("calmuco"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbequistanín"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"ortografía alemana de 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"baxu saxón"_s)
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
			$of(u"calendariu de la República de China"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietnamín"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"khotanés"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("ciclu horariu (12 o 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"ortografía taraskievica"_s)
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
			$of(u"siriacu clásicu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"númberos matemáticos Sans-Serif"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"kʼicheʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of("quichua del altiplanu de Chimborazo"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of("newa"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"valón"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauz"_s)
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
			$of("chinu gan"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of("kirmanjki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidiu"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("cuneiforme sumeriu acadiu"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazight estándar de Marruecos"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"árabe estándar modernu"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"silábicu unificáu de los nativos canadienses"_s)
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
			$of(u"manchú"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"fraktur llatín"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("silesianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"xeroglíficos anatolios"_s)
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
			$of(u"gaélicu llatín"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"númberos chinos simplificaos"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"númberos chinos tradicionales"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"númberos romanos en minúscules"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("dialectu pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("liciu"_s)
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
			$of("dari zoroastrianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("tipos Moon"_s)
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
			$of(u"francés modernu primitivu"_s)
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
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("alfabetu Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"español de Méxicu"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("siriacu occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("turcu otomanu"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("siriacu estrangelo"_s)
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
			$of("cariu"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("chinu"_s)
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
			$of(u"pérmicu antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("estilu de saltu de llinia"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zulú"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"orde de clasificación de llista telefónica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"monotónicu"_s)
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
			$of(u"númberos financieros xaponeses"_s)
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
			$of("mari occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("siriacu oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"númberos Shan de Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"árabe del norte antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"númberos Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"orde de clasificación reformáu"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"demóticu exipcianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"hieráticu exipcianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("palmirenu"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"embú"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"xeroglíficos exipcianos"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("khutsuri xeorxanu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"chinu simplificáu"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"húngaru antiguu"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"ortografía alemana tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosraeanu"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("venecianu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"númberos limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("chinu tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("vepsiu"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"numberación khmer"_s)
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
			$of("valencianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("xipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"alfabetu turcu llatino unificáu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of(u"serbiu con pronunciación Ijekaviana"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"númberos gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"múltiples llingües"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("sistema de midida"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"glagolíticu"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"gilbertés"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"ortografía común"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("cheroki"_s)
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
			$of(u"númberos tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karachay-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingush"_s)
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
			$of("krl"_s),
			$of("karelianu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of(u"ortografía del diccionariu d’inglés d’Oxford"_s)
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
			$of(u"númberos"_s)
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

LocaleNames_ast::LocaleNames_ast() {
}

$Class* LocaleNames_ast::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ast, name, initialize, &_LocaleNames_ast_ClassInfo_, allocate$LocaleNames_ast);
	return class$;
}

$Class* LocaleNames_ast::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun