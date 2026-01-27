#include <sun/util/resources/cldr/ext/LocaleNames_gl.h>

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

$MethodInfo _LocaleNames_gl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_gl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_gl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_gl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_gl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_gl_MethodInfo_
};

$Object* allocate$LocaleNames_gl($Class* clazz) {
	return $of($alloc(LocaleNames_gl));
}

void LocaleNames_gl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_gl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"árabe"_s);
	$var($String, metaValue_bn, u"bengalí"_s);
	$var($String, metaValue_bo, "tibetano"_s);
	$var($String, metaValue_el, "grego"_s);
	$var($String, metaValue_gu, "guxarati"_s);
	$var($String, metaValue_he, "hebreo"_s);
	$var($String, metaValue_hy, "armenio"_s);
	$var($String, metaValue_ja, u"xaponés"_s);
	$var($String, metaValue_ka, "xeorxiano"_s);
	$var($String, metaValue_km, "khmer"_s);
	$var($String, metaValue_kn, u"kannará"_s);
	$var($String, metaValue_ko, "coreano"_s);
	$var($String, metaValue_lo, "laosiano"_s);
	$var($String, metaValue_ml, "malabar"_s);
	$var($String, metaValue_mn, "mongol"_s);
	$var($String, metaValue_my, "birmano"_s);
	$var($String, metaValue_or, u"odiá"_s);
	$var($String, metaValue_si, u"cingalés"_s);
	$var($String, metaValue_ta, u"támil"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, u"tailandés"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kölsch"_s)
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
			$of("Zsye"_s),
			$of("emojis"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("exipcio antigo"_s)
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
			$of("AC"_s),
			$of(u"Illa de Ascensión"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongano"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetun"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Os Emiratos Árabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamengo"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganistán"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua e Barbuda"_s)
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
			$of("fuso horario"_s)
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
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"A Antártida"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("A Arxentina"_s)
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
			$of(u"Illas Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Acerbaixán"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia e Hercegovina"_s)
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
			$of("kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bélxica"_s)
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
			$of(u"Benín"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Illas Bermudas"_s)
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
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Caribe Neerlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("O Brasil"_s)
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
			$of("Illa Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Belarús"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("calendario persa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"numeración hebrea"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"O Canadá"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Illas Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazandaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"República Democrática do Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"República Centroafricana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"República do Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Suíza"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Illas Cook"_s)
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
			$of("A China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Illa Clipperton"_s)
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
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Illa Christmas"_s)
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
			$of(u"Alemaña"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"achinés"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("kiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Diego García"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"díxitos devanagáricos"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Dinamarca"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"acholí"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("braille"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"numeración armenia en minúscula"_s)
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
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigré"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Alxeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("ancho medio"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta e Melilla"_s)
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
			$of("EG"_s),
			$of("Exipto"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"O Sáhara Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauano"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("choctaw"_s)
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
			$of("type.ca.gregorian"_s),
			$of("calendario gregoriano"_s)
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
			$of(u"díxitos guxaratis"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigueo"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fixi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Illas Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("variante rexional"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Illas Feroe"_s)
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
			$of("type.ca.indian"_s),
			$of("Calendario nacional indio"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("grego antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gabón"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("O Reino Unido"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("pidgin nixeriano"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Granada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Xeorxia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Güiana Francesa"_s)
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
			$of("GI"_s),
			$of("Xibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Groenlandia"_s)
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
			$of("Illas Xeorxia do Sur e Sandwich do Sur"_s)
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
			$of("A Guinea Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Güiana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("kurdo central"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"sen contido lingüístico"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"alemán austríaco"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong RAE da China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Illa Heard e Illas McDonald"_s)
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
			$of(u"alemán suízo"_s)
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
			$of("IC"_s),
			$of("Illas Canarias"_s)
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
			$of("Illa de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("A India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territorio Británico do Océano Índico"_s)
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
			$of(u"notación matemática"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"díxitos tailandeses"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"díxitos bengalís"_s)
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
			$of("Xamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Xordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"O Xapón"_s)
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
			$of("type.nu.knda"_s),
			$of(u"díxitos kannarás"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"alto alemán suízo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Orde de clasificación fonética"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("calendario budista"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"América Latina"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirguizistán"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Camboxa"_s)
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
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts e Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"francés canadense"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Corea do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Corea do Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"francés suízo"_s)
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
			$of(u"Illas Caimán"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazakistán"_s)
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
			$of(u"O Líbano"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Santa Lucía"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"baixo alemán"_s)
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
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
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
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marrocos"_s)
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
			$of("Saint Martin"_s)
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
			$of("Illas Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutiano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Díxitos Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Macedonia do Norte"_s)
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
			$of("Macau RAE da China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Illas Marianas do Norte"_s)
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
			$of(u"transliteración do UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauricio"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("altai meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivas"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"México"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"calendario xaponés"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaisia"_s)
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
			$of(u"Criterio de ordenación do dicionario"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nova Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Níxer"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Illa Norfolk"_s)
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
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Países Baixos"_s)
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
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nova Zelandia"_s)
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
			$of("seselwa (crioulo das Seychelles)"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panamá"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Calendario islámico (civil, tabular)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"inglés británico"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"O Perú"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("A Polinesia Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papúa-Nova Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinas"_s)
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
			$of("Saint Pierre et Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Illas Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Rico"_s)
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
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"numeración grega en minúscula"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("O Paraguai"_s)
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
			$of("niu"_s),
			$of("niueano"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Territorios afastados de Oceanía"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezguio"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuvalés"_s)
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
			$of(u"América do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reunión"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"América do Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Oceanía"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Romanía"_s)
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
			$of("SA"_s),
			$of("Arabia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Illas Salomón"_s)
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
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"O Sudán"_s)
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
			$of("arameo"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"África Setentrional"_s)
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
			$of(u"estilo de quebra de liña estrita"_s)
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
			$of("018"_s),
			$of(u"África Meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard e Jan Mayen"_s)
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
			$of("Serra Leoa"_s)
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
			$of(u"numeración támil tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"O Sudán do Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"San Tomé e Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("O Salvador"_s)
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
			$of("SZ"_s),
			$of("Eswatini"_s)
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
			$of("sistema estadounidense de unidades"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"América Setentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Illas Turks e Caicos"_s)
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
			$of("Territorios Austrais Franceses"_s)
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
			$of(u"Taxiquistán"_s)
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
			$of("Timor Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Clasificar por consonante inicial hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmenistán"_s)
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
			$of("TR"_s),
			$of(u"Turquía"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad e Tobago"_s)
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
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"sistema de escritura descoñecido"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ucraína"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"aromanés"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asia Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvaniano"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"suahili congolés"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia Meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sueste Asiático"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Orde de clasificación pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa Meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Illas Menores Distantes dos Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Nacións Unidas"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Os Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaiano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"orde de clasifcación chinesa simplificada - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("O Uruguai"_s)
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
			$of("tamazight de Marrocos central"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Orde de clasificación polo número de trazos"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Cidade do Vaticano"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("San Vicente e As Granadinas"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Illas Virxes Británicas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Illas Virxes Estadounidenses"_s)
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
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis e Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Orde de clasificación tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Rexión de Micronesia"_s)
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
			$of(u"Números financeiros"_s)
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
			$of("wolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudoacentos"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray-waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudobidireccional"_s)
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
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("non escrito"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("walrpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("O Iemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n’ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"criterio de ordenación estándar"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Suráfrica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"estilo de quebra de liña flexible"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"devanágari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"numeración xeorxiana"_s)
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
			$of(u"Rexión descoñecida"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"sistema métrico decimal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("calendario ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sesotho do norte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"díxitos de telugu"_s)
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
			$of(u"numeración financeira chinesa simplificada"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"díxitos indoarábigos ampliados"_s)
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
			$of(u"díxitos de ancho completo"_s)
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
			$of("lrc"_s),
			$of("luri setentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurto"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"Calendario islámico (Arabia Saudita,"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"numeración romana"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("iacuto"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("santali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Numérico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Díxitos orixinais"_s)
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
			$of("ancho completo"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lunda"_s)
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
			$of("lus"_s),
			$of("mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balinés"_s)
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
			$of("es_ES"_s),
			$of(u"español de España"_s)
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
			$of("abkhazo"_s)
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
			$of("am"_s),
			$of(u"amhárico"_s)
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
			$of("silabarios xaponeses"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"assamés"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("kurdo meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aimará"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("acerbaixano"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baxkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Criterio de ordenación radical-trazo"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("belaruso"_s)
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
			$of(u"bosníaco"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"díxitos laosianos"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
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
			$of("co"_s),
			$of("corso"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
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
			$of("chuvaxo"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"galés"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"numeración etíope"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dinamarqués"_s)
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
			$of(u"formato de moeda estándar"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Díxitos mongoles"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"español de América"_s)
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
			$of(u"calendario chinés"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"numeración grega"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"estilo de quebra de liña normal"_s)
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
			$of(u"Orde de clasificación chinesa tradicional - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"español"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estoniano"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("han con bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"éuscaro"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
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
			$of("fa"_s),
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"díxitos occidentais"_s)
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
			$of("fi"_s),
			$of(u"finés"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fixiano"_s)
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
			$of(u"transliteración do BGN"_s)
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
			$of("galego"_s)
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
			$of(u"lingua descoñecida"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Calendario Amete Alem etíope"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
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
			$of("bin"_s),
			$of("bini"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("croata"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("crioulo haitiano"_s)
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
			$of(u"díxitos tibetanos"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"yi sichuanés"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
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
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("saami meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"xavanés"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madurés"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("saami de Lule"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("saami de Inari"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"siksiká"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("saami skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
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
			$of("kazako"_s)
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
			$of(u"caxemirés"_s)
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
			$of("kirguiz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
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
			$of(u"díxitos malabares"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
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
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("sistema imperial de unidades"_s)
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
			$of("mg"_s),
			$of("malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshalés"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"criterio de ordenación Unicode predeterminado"_s)
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
			$of("malaio"_s)
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
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("baixo sorbio"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"busca de carácter xeral"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"noruegués bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele setentrional"_s)
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
			$of("nl"_s),
			$of(u"neerlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"noruegués nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"noruegués"_s)
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
			$of("ny"_s),
			$of("chewa"_s)
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
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"numeración armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("ossetio"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("cabardiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("crioulo mauriciano"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"panxabí"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polaco"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("calendario dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("paxto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugués"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"criterio de ordenación"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"portugués do Brasil"_s)
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
			$of("formato de moeda"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("calendario"_s)
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
			$of(u"díxitos birmanos"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"etíope"_s)
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
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("moeda"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"romanés"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"díxitos do odiá"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"numeración decimal chinesa"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("ruso"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"kiñaruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("caboverdiano"_s)
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
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("saami setentrional"_s)
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
			$of(u"díxitos indoarábigos"_s)
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
			$of("formato de moeda contable"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundanés"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("sueco"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"numeración financeira chinesa tradicional"_s)
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
			$of("taxico"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigriña"_s)
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
			$of(u"inglés canadense"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmeno"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalo"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongano"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"numeración xaponesa"_s)
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
			$of("comoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tártaro"_s)
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
			$of("Europa do Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa Setentrional"_s)
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
			$of("Zyyy"_s),
			$of(u"común"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ucraíno"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Calendario cóptico"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urdú"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("calmuco"_s)
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
			$of("nds_NL"_s),
			$of(u"baixo saxón"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("calendario Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("ciclo horario (12 ou 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuk"_s)
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
			$of("gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"siríaco"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"wólof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazight marroquí estándar"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"árabe estándar moderno"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("Silabario aborixe canadiano unificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latino"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"numeración chinesa simplificada"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"numeración chinesa tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"numeración romana en minúsculas"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
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
			$of("yi"_s),
			$of("yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("ioruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Numeros tradicionais"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"español de México"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"chinés"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"estilo de quebra de liña"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zulú"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"orde de clasificación da guía telefónica"_s)
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
			$of(u"numeración financeira xaponesa"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ge’ez"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Criterio de ordenación reformado"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"chinés simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi permio"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"chinés tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"díxitos khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilocano"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"díxitos do gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("varias linguas"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("sistema internacional de unidades"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("kiribatiano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"díxitos do támil"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"carachaio-bálcara"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("inguxo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
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

LocaleNames_gl::LocaleNames_gl() {
}

$Class* LocaleNames_gl::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_gl, name, initialize, &_LocaleNames_gl_ClassInfo_, allocate$LocaleNames_gl);
	return class$;
}

$Class* LocaleNames_gl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun