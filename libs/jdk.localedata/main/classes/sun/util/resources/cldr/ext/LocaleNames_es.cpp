#include <sun/util/resources/cldr/ext/LocaleNames_es.h>

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

$MethodInfo _LocaleNames_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_es, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_es, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_es_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_es",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_es_MethodInfo_
};

$Object* allocate$LocaleNames_es($Class* clazz) {
	return $of($alloc(LocaleNames_es));
}

void LocaleNames_es::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_es::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ae, u"avéstico"_s);
	$var($String, metaValue_ar, u"árabe"_s);
	$var($String, metaValue_bn, u"bengalí"_s);
	$var($String, metaValue_bo, "tibetano"_s);
	$var($String, metaValue_el, "griego"_s);
	$var($String, metaValue_he, "hebreo"_s);
	$var($String, metaValue_hy, "armenio"_s);
	$var($String, metaValue_ja, u"japonés"_s);
	$var($String, metaValue_jv, u"javanés"_s);
	$var($String, metaValue_ka, "georgiano"_s);
	$var($String, metaValue_km, "jemer"_s);
	$var($String, metaValue_kn, u"canarés"_s);
	$var($String, metaValue_ko, "coreano"_s);
	$var($String, metaValue_mn, "mongol"_s);
	$var($String, metaValue_my, "birmano"_s);
	$var($String, metaValue_or, "oriya"_s);
	$var($String, metaValue_si, u"cingalés"_s);
	$var($String, metaValue_su, u"sundanés"_s);
	$var($String, metaValue_ta, "tamil"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, u"tailandés"_s);
	$var($String, metaValue_tl, "tagalo"_s);
	$var($String, metaValue_ban, u"balinés"_s);
	$var($String, metaValue_bug, u"buginés"_s);
	$var($String, metaValue_cop, "copto"_s);
	$var($String, metaValue_got, u"gótico"_s);
	$var($String, metaValue_mni, "manipuri"_s);
	$var($String, metaValue_nqo, u"n’ko"_s);
	$var($String, metaValue_peo, "persa antiguo"_s);
	$var($String, metaValue_phn, "fenicio"_s);
	$var($String, metaValue_syr, "siriaco"_s);
	$var($String, metaValue_uga, u"ugarítico"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kölsch"_s)
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
			$of("Tagb"_s),
			$of(u"tagbanúa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emojis"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("egipcio antiguo"_s)
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
			$of(u"Isla de la Ascensión"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongano"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tetún"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emiratos Árabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamenco"_s)
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
			$of("type.ca.ethiopic"_s),
			$of(u"calendario etíope"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguila"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("zona horaria"_s)
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
			$of(u"Antártida"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
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
			$of(u"inglés estadounidense"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Islas Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaiyán"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("Armenio oriental"_s)
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
			$of("cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangladés"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bélgica"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"alto alemán medio"_s)
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
			$of(u"Baréin"_s)
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
			$of("Bermudas"_s)
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
			$of("Bahamas"_s)
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
			$of("Isla Bouvet"_s)
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
			$of("Belice"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("lenguaje visible"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("calendario persa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"números en hebreo"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Canadá"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Islas Cocos"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazandaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"República Democrática del Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"República Centroafricana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suiza"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Islas Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
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
			$of("Isla Clipperton"_s)
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
			$of("Cabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Curazao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Isla de Navidad"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Chipre"_s)
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
			$of("DE"_s),
			$of("Alemania"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"alto alemán antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"acehnés"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Diego García"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"dígitos en devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Yibuti"_s)
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
			$of(u"números en armenio en minúscula"_s)
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
			$of("Mtei"_s),
			$of(metaValue_mni)
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
			$of("Argelia"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"pangasinán"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("ancho medio"_s)
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
			$of("Egipto"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Sáhara Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"chagatái"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauano"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"trukés"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("jerga chinuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"marí"_s)
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
			$of(u"Unión Europea"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamita"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("calendario gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("zona del euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyene"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"dígitos en guyaratí"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("Indio (harappan)"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adigué"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiyi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Islas Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("variante local"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Islas Feroe"_s)
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
			$of("tkl"_s),
			$of("tokelauano"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"calendario nacional hindú"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("griego antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gabón"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"vótico"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Reino Unido"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("pidgin de Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Granada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guayana Francesa"_s)
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
			$of("Groenlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"inglés medio"_s)
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
			$of("Islas Georgia del Sur y Sandwich del Sur"_s)
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
			$of("nuevo tai lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("kurdo sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"sin contenido lingüístico"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"alemán austríaco"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("RAE de Hong Kong (China)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Islas Heard y McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
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
			$of(u"alemán suizo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"calendario islámico umalqura"_s)
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
			$of("tmh"_s),
			$of("tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Canarias"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("chino min nan"_s)
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
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napolitano"_s)
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
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isla de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"reglas de ordenación europeas"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territorio Británico del Océano Índico"_s)
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
			$of("Islandia"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"notación matemática"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"dígitos en tailandés"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Ordenador"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"dígitos en bengalí"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"calendario islámico"_s)
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
			$of("JO"_s),
			$of("Jordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Japón"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("tonga del Nyasa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"dígitos en canarés"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"alto alemán suizo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Orden de clasificación fonético"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("calendario budista"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Latinoamérica"_s)
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
			$of("Comoras"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"San Cristóbal y Nieves"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("heredado"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"francés canadiense"_s)
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
			$of("Pollard Miao"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"francés suizo"_s)
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
			$of(u"Islas Caimán"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazajistán"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"cirílico"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Líbano"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Santa Lucía"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"cirílico del antiguo eslavo eclesiástico"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("kutchin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"bajo alemán"_s)
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
			$of("acadio"_s)
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
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburgo"_s)
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
			$of("lah"_s),
			$of("lahnda"_s)
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
			$of(u"Mónaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavia"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"San Martín"_s)
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
			$of("Islas Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutiano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Dígitos vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Macedonia del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
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
			$of("RAE de Macao (China)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Islas Marianas del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinica"_s)
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
			$of("type.m0.ungegn"_s),
			$of(u"transliteración UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauricio"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"altái meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivas"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malaui"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"México"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"calendario japonés"_s)
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
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"África subsahariana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("calendario hebreo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"orden de clasificación del diccionario"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nueva Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Romanización Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Níger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Isla Norfolk"_s)
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
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahawh hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Países Bajos"_s)
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
			$of("tsimshiano"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nueva Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"romaní"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"meroítico"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"tártaro de Crimea"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"inglés antiguo"_s)
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
			$of("criollo seychelense"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panamá"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"calendario civil islámico"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("casubio"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"inglés británico"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Perú"_s)
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
			$of("Filipinas"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakistán"_s)
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
			$of(u"San Pedro y Miquelón"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Islas Pitcairn"_s)
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
			$of("Territorios Palestinos"_s)
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
			$of("nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"números en griego en minúscula"_s)
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
			$of("Catar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Inglés escocés estándar"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niueano"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Territorios alejados de Oceanía"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvaluano"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Mundo"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"África"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"América del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reunión"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Sudamérica"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
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
			$of("RU"_s),
			$of("Rusia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharosthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Arabia Saudí"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("pohnpeiano"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandeo"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Islas Salomón"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"África occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sudán"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Centroamérica"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Suecia"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"África oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("arameo"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"África septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santa Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"estilo de salto de línea estricto"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"África central"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Eslovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"África meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard y Jan Mayen"_s)
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
			$of("SL"_s),
			$of("Sierra Leona"_s)
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
			$of("mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"números en tamil tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Sudán del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Santo Tomé y Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"árabe najdí"_s)
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
			$of("Esuatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("arahuaco"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"yapés"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Tristán de Acuña"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("sistema estadounidense"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Norteamérica"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Islas Turcas y Caicos"_s)
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
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Territorios Australes Franceses"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailandia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tayikistán"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Caribe"_s)
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
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Buscar por consonante inicial de hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmenistán"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Túnez"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Turquía"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad y Tobago"_s)
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
			$of("asturiano"_s)
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
			$of("alfabeto desconocido"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ucrania"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("arrumano"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asia oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuviniano"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("suajili del Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sudeste asiático"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("chino hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("orden pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Islas menores alejadas de EE. UU."_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Naciones Unidas"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaiano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("orden del chino simplificado - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("prusiano"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbekistán"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazight del Atlas Central"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("orden de los trazos"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Ciudad del Vaticano"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("provenzal antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("San Vicente y las Granadinas"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Islas Vírgenes Británicas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Islas Vírgenes de EE. UU."_s)
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
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"nórdico antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
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
			$of("orden tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Región de Micronesia"_s)
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
			$of(u"Números financieros"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"orden de clasificación anterior, para compatibilidad"_s)
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
			$of("Pseudoacentos"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudobidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("avadhi"_s)
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
			$of("gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("no escrito"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("ol ciki"_s)
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
			$of(u"símbolos blis"_s)
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
			$of(u"orden estándar"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
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
			$of("ZA"_s),
			$of(u"Sudáfrica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"estilo de salto de línea flexible"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"números en georgiano"_s)
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
			$of(u"Romanización pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabue"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Región desconocida"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"rúnico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"sistema métrico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("calendario ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"dígitos en telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("criollo de Luisiana"_s)
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
			$of(u"números financieros en chino simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"dígitos indoarábigos extendidos"_s)
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
			$of(u"dígitos de ancho completo"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hitita"_s)
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
			$of(u"jeroglíficos mayas"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"lorí septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"newari clásico"_s)
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
			$of("Limb"_s),
			$of("limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"números romanos"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("arameo samaritano"_s)
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
			$of("judeo-persa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Numérico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Dígitos nativos"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmuji"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("ancho completo"_s)
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
			$of("luy"_s),
			$of("luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"bamún"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"judeo-árabe"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"español de España"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"escocés"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("siciliano"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abjasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afrikáans"_s)
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
			$of(u"amárico"_s)
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
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("silabarios japoneses"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asamés"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("lineal A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("lineal B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("kurdo meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbaiyano"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baskir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"orden de clasificación de trazos radicales"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bielorruso"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"búlgaro"_s)
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
			$of("bosnio"_s)
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
			$of("type.nu.laoo"_s),
			$of(u"dígitos en lao"_s)
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
			$of("checheno"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Ortografía revisada"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("corso"_s)
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
			$of("checo"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"eslavo eclesiástico"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("chuvasio"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"galés"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"números en etíope"_s)
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
			$of(u"portugués de Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"alemán"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"formato de moneda estándar"_s)
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
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"irlandés antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"dígitos en mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"español latinoamericano"_s)
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
			$of("calendario chino"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"números en griego"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ewé"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"estilo de salto de línea normal"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldavo"_s)
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
			$of("type.co.big5han"_s),
			$of("orden del chino tradicional - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"español"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estonio"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("euskera"_s)
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
			$of("shi"_s),
			$of("tashelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("alto sorbio"_s)
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
			$of("hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"dígitos occidentales"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"árabe chadiano"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("chino xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finés"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fiyiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("baluchi occidental"_s)
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
			$of("type.m0.bgn"_s),
			$of(u"transliteración USBGN"_s)
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
			$of(u"gaélico escocés"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("gallego"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bhoyapurí"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("lengua desconocida"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"calendario etíope Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"guyaratí"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"manés"_s)
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
			$of("bicol"_s)
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
			$of("criollo haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"húngaro"_s)
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
			$of(u"francés cajún"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Alfabeto fonético internacional IPA"_s)
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
			$of("indonesio"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"dígitos en tibetano"_s)
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
			$of(u"francés medio"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"francés antiguo"_s)
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
			$of("frr"_s),
			$of(u"frisón septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandés"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italiano"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"malayálam"_s)
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
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("sami meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("shaviano"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madurés"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("sami lule"_s)
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
			$of("sami inari"_s)
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
			$of("macasar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("chino wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("sami skolt"_s)
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
			$of("kazajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"groenlandés"_s)
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
			$of("cachemiro"_s)
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
			$of("kurdo"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"córnico"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirguís"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"soninké"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"latín"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburgués"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"dígitos en malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongo-rongo"_s)
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
			$of("friulano"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("sistema imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituano"_s)
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
			$of("sogdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshalés"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("orden predeterminado de Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maorí"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("macedonio"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"maratí"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malayo"_s)
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
			$of("saurashtra"_s)
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
			$of("bajo sorbio"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"búsqueda de uso general"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of("noruego bokmal"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepalí"_s)
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
			$of("noruego nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("noruego"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpako"_s)
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
			$of("cabila"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"Politónico"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("occitano"_s)
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
			$of("ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"números en armenio"_s)
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
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"osético"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("criollo mauriciano"_s)
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
			$of("kbl"_s),
			$of("kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polaco"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"neerlandés medio"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("calendario dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pastún"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugués"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"irlandés medio"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("orden"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"portugués de Brasil"_s)
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
			$of("formato de moneda"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("calendario"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"sistema de 24 horas (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"sistema de 24 horas (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"dígitos en birmano"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapoteco"_s)
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
			$of("Ethi"_s),
			$of(u"etiópico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"sistema de 12 horas (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"sistema de 12 horas (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("romanche"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("moneda"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"dígitos en oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"números decimales en chino"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("ruso"_s)
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
			$of(u"símbolos Bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("criollo caboverdiano"_s)
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
			$of(u"inglés australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"sánscrito"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardo"_s)
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
			$of("sami septentrional"_s)
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
			$of("serbocroata"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumerio"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("eslovaco"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("esloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somalí"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"dígitos indoarábigos"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albanés"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbio"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("suazi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("formato de moneda de contabilidad"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sotho meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("sueco"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suajili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"números financieros en chino tradicional"_s)
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
			$of("buriato"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Asia central"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tayiko"_s)
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
			$of(u"tigriña"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"inglés canadiense"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turcomano"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setsuana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongano"_s)
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
			$of(u"números en japonés"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turco"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("comorense"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tártaro"_s)
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
			$of("tahitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa occidental"_s)
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
			$of("antigua bastardilla"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"común"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"calendario cóptico"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbeko"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Ortografía alemana de 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"bajo sajón"_s)
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
			$of(u"calendario de la República de China"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"kotanés"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("ciclo horario (12 o 24 horas)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"siríaco clásico"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"quiché"_s)
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
			$of("gagauzo"_s)
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
			$of("chino gan"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidio"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("cuneiforme sumerio-acadio"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"wólof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazight estándar marroquí"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"árabe estándar moderno"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"silabarios aborígenes canadienses unificados"_s)
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
			$of("latino fraktur"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(metaValue_mni)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latino"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"latino gaélico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"números en chino simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"números en chino tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"números romanos en minúscula"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("licio"_s)
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
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("yidis"_s)
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
			$of("yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Números tradicionales"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"español de México"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("siriaco occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("turco otomano"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("siriaco estrangelo"_s)
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
			$of("cario"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("chino"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("permiano antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"estilo de salto de línea"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zulú"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"orden de listín telefónico"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"Monotónico"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"números financieros en japonés"_s)
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
			$of("Syrn"_s),
			$of("siriaco oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"orden de clasificación reformado"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"egipcio demótico"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"egipcio hierático"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"jeroglíficos egipcios"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"georgiano eclesiástico"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("chino simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi permio"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"húngaro antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"konkaní"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Ortografía alemana tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosraeano"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("chino tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"dígitos en jemer"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilocano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Valenciano"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("chipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"dígitos en gurmuji"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("varios idiomas"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"sistema de medición"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"glagolítico"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"gilbertés"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("cherokee"_s)
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
			$of(u"dígitos en tamil"_s)
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
			$of("fa_AF"_s),
			$of(u"darí"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("carelio"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"números"_s)
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

LocaleNames_es::LocaleNames_es() {
}

$Class* LocaleNames_es::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_es, name, initialize, &_LocaleNames_es_ClassInfo_, allocate$LocaleNames_es);
	return class$;
}

$Class* LocaleNames_es::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun