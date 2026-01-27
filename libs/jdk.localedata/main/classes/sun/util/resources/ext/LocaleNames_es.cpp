#include <sun/util/resources/ext/LocaleNames_es.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_es, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_es, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_es_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_es",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_es_MethodInfo_
};

$Object* allocate$LocaleNames_es($Class* clazz) {
	return $of($alloc(LocaleNames_es));
}

void LocaleNames_es::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_es::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
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
			$of("005"_s),
			$of(u"Suramérica"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Oceanía"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"África occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Centroamérica"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"África oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"África septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"África central"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"África meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Américas"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Norteamérica"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Caribe"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asia oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sudeste asiático"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australia y Nueva Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Micronesia [057]"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinesia"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Asia central"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia occidental"_s)
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
			$of("155"_s),
			$of("Europa occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Latinoamérica y el Caribe"_s)
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
			$of("AF"_s),
			$of(u"Afganistán"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua y Barbuda"_s)
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
			$of("AN"_s),
			$of("Antillas Holandesas"_s)
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
			$of("AX"_s),
			$of("Islas Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaiyán"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"árabe"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("Arameo Imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armenio"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"avéstico"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia y Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bélgica"_s)
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
			$of(u"Bahráin"_s)
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
			$of("BM"_s),
			$of("Bermudas"_s)
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
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
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
			$of("Bali"_s),
			$of(u"balinés"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"bengalí"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"símbolos bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"brahmí"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"buginés"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("buhid"_s)
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
			$of("Costa de Marfil"_s)
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
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of("Serbia y Montenegro"_s)
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
			$of("CX"_s),
			$of("Isla Christmas"_s)
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
			$of("Cakm"_s),
			$of("Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"símbolos aborígenes canadienses unificados"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("cario"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("cham"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("copto"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("chipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"cirílico"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"cirílico del antiguo eslavo eclesiástico"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemania"_s)
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
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"República Dominicana"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Argelia"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Taquigrafía Duployé"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipto"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Occidental"_s)
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
			$of("Egyd"_s),
			$of(u"egipcio demótico"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"egipcio hierático"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"jeroglíficos egipcios"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"etiópico"_s)
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
			$of("FO"_s),
			$of("Islas Feroe"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francia"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gabón"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Reino Unido"_s)
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
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
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
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"georgiano eclesiástico"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"glagolítico"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"gótico"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("griego"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmuji"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong"_s)
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
			$of("HT"_s),
			$of(u"Haití"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Hungría"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("han simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("han tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebreo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahawh hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("katakana o hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"húngaro antiguo"_s)
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
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territorio Británico del Océano Índico"_s)
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
			$of("Inds"_s),
			$of("Indio (harappan)"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("antigua bastardilla"_s)
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
			$of("Java"_s),
			$of(u"javanés"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"japonés"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirguizistán"_s)
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
			$of("Comores"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"San Cristóbal y Nieves"_s)
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
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Islas Caimán"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazajstán"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("jemer"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"canarés"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of("Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("Kaithi"_s)
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
			$of("LC"_s),
			$of("Santa Lucia"_s)
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
			$of("LY"_s),
			$of("Libia"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("latino fraktur"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"latino gaélico"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"latín"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("lineal A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("lineal B"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Lisu"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("licio"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidio"_s)
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
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Islas Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Malí"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao"_s)
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
			$of("MU"_s),
			$of("Mauricio"_s)
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
			$of("MY"_s),
			$of("Malasia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandeo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"Maniqueísmo"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"jeroglíficos mayas"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"Mendé"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"Meroítico Cursivo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"meroítico"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"malayálam"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("Luna"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("birmano"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nueva Caledonia"_s)
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
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holanda"_s)
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
			$of("NZ"_s),
			$of("Nueva Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"Árabe del Norte Antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("Nabateo"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Nakhi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of("n\'Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Omán"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("ol chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panamá"_s)
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
			$of(u"Papúa New Guinea"_s)
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
			$of("PS"_s),
			$of("Palestina"_s)
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
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"Palmireño"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("permiano antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Pahlavi, Inscripciones"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Pahlavi, Salterio"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("Pahlavi, Libros"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of("fenicio"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollard Miao"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Parto, Inscripciones"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reunión"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumania"_s)
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
			$of("Rjng"_s),
			$of("Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"rúnico"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Islas Salomón"_s)
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
			$of("SE"_s),
			$of("Suecia"_s)
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
			$of("SI"_s),
			$of("Eslovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard y Jan Mayen"_s)
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
			$of("SR"_s),
			$of("Surinam"_s)
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
			$of("SY"_s),
			$of("Siria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Suazilandia"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("Samaritano"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"Árabe del Sur Antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("Escritura de Signos"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("shaviano"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("binhala"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"sudanés"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("siriaco"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("siriaco estrangelo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("siriaco occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("siriaco oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Islas Turcas y Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Territorios Franceses del Sur"_s)
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
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Oriental"_s)
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
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"tagbanúa"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("tai le"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("Nuevo Tai Lue"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai Viet"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("tengwar"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("tagalo"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"tailandés"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tibetano"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ucrania"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Islas menores alejadas de los Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbekistán"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"ugarítico"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Ciudad del Vaticano"_s)
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
			$of(u"Islas Vírgenes Americanas"_s)
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
			$of("Vaii"_s),
			$of("Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("lenguaje visible"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis y Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Warang Citi"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("persa antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("Sumerio-Acadio Cuneiforme"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Sudáfrica"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabue"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("heredado"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"Notación Matemática"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"símbolos"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("no escrito"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"común"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"escritura desconocida o no válida"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("aar"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abjasio"_s)
		}),
		$$new($ObjectArray, {
			$of("abk"_s),
			$of("Abjasio"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"acehnés"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigeo"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avéstico"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of("afgani (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("afr"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("aka"_s),
			$of("Acano"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("acadio"_s)
		}),
		$$new($ObjectArray, {
			$of("alb"_s),
			$of(u"Albanés"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutiano"_s)
		}),
		$$new($ObjectArray, {
			$of("alg"_s),
			$of("lenguas algonquinas"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"altái meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amárico"_s)
		}),
		$$new($ObjectArray, {
			$of("amh"_s),
			$of(u"Amárico"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonés"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("florines de las Antillas Neerlandesas"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("apa"_s),
			$of("lenguas apache"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"árabe"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("australes argentinos"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("arameo"_s)
		}),
		$$new($ObjectArray, {
			$of("arg"_s),
			$of(u"Aragonés"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of("Armenio"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("araucano"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("pesos argentinos (ARP)"_s)
		}),
		$$new($ObjectArray, {
			$of("art"_s),
			$of("lengua artificial"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("arahuaco"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asamés"_s)
		}),
		$$new($ObjectArray, {
			$of("asm"_s),
			$of(u"Asamés"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ath"_s),
			$of("lenguas atabascas"_s)
		}),
		$$new($ObjectArray, {
			$of("aus"_s),
			$of("lenguas australianas"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("ava"_s),
			$of(u"Ávaro"_s)
		}),
		$$new($ObjectArray, {
			$of("ave"_s),
			$of(u"Avéstico"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("avadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("aym"_s),
			$of("Aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerí"_s)
		}),
		$$new($ObjectArray, {
			$of("aze"_s),
			$of("Azerbaiyano"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("dinares bosnios"_s)
		}),
		$$new($ObjectArray, {
			$of("bai"_s),
			$of("lenguas bamileke"_s)
		}),
		$$new($ObjectArray, {
			$of("bak"_s),
			$of("Bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("baluchi"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("marcos convertibles de Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balinés"_s)
		}),
		$$new($ObjectArray, {
			$of("baq"_s),
			$of("Vasco"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bat"_s),
			$of(u"lengua báltica"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bielorruso"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("beja"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("francos belgas (financieros)"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("ben"_s),
			$of(u"Bengalí"_s)
		}),
		$$new($ObjectArray, {
			$of("ber"_s),
			$of("bereber"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"búlgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of("bihari"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bih"_s),
			$of(u"Biharí"_s)
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
			$of("bis"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"bengalí"_s)
		}),
		$$new($ObjectArray, {
			$of("bnt"_s),
			$of(u"bantú"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetano"_s)
		}),
		$$new($ObjectArray, {
			$of("bos"_s),
			$of("Bosnio"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretón"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"cruceiros brasileños (BRE)"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosnio"_s)
		}),
		$$new($ObjectArray, {
			$of("btk"_s),
			$of("batak"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"Buguinés"_s)
		}),
		$$new($ObjectArray, {
			$of("bul"_s),
			$of(u"Búlgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bur"_s),
			$of("Birmano"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"catalán"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"dólares canadienses"_s)
		}),
		$$new($ObjectArray, {
			$of("cai"_s),
			$of("lengua india centroamericana"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("caribe"_s)
		}),
		$$new($ObjectArray, {
			$of("cat"_s),
			$of(u"Catalán"_s)
		}),
		$$new($ObjectArray, {
			$of("cau"_s),
			$of(u"lengua caucásica"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("checheno"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("cel"_s),
			$of("lengua celta"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("cha"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("euros WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"chagatái"_s)
		}),
		$$new($ObjectArray, {
			$of("chi"_s),
			$of("Chino"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"trukés"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"marí"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("jerga chinuk"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("chu"_s),
			$of(u"Eslavo Eclesiástico"_s)
		}),
		$$new($ObjectArray, {
			$of("chv"_s),
			$of("Chuvacho"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyene"_s)
		}),
		$$new($ObjectArray, {
			$of("cmc"_s),
			$of(u"lenguas chámicas"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("corso"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("pesos colombianos"_s)
		}),
		$$new($ObjectArray, {
			$of("cor"_s),
			$of(u"Córnico"_s)
		}),
		$$new($ObjectArray, {
			$of("cos"_s),
			$of("corso"_s)
		}),
		$$new($ObjectArray, {
			$of("cpe"_s),
			$of(u"lengua criolla o pidgin basada en el inglés"_s)
		}),
		$$new($ObjectArray, {
			$of("cpf"_s),
			$of(u"lengua criolla o pidgin basada en el francés"_s)
		}),
		$$new($ObjectArray, {
			$of("cpp"_s),
			$of(u"lengua criolla o pidgin basada en el portugués"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cre"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"tártaro de Crimea"_s)
		}),
		$$new($ObjectArray, {
			$of("crp"_s),
			$of("lengua criolla o pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("checo"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("casubio"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"eslavo eclesiástico"_s)
		}),
		$$new($ObjectArray, {
			$of("cus"_s),
			$of("lengua cusita"_s)
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
			$of("cze"_s),
			$of("checo"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"danés"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("dan"_s),
			$of(u"danés"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargva"_s)
		}),
		$$new($ObjectArray, {
			$of("day"_s),
			$of("dayak"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"alemán"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slave"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("div"_s),
			$of("Dhivehi"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("dra"_s),
			$of(u"lengua dravídica"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("sorbio inferior"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"neerlandés medieval"_s)
		}),
		$$new($ObjectArray, {
			$of("dut"_s),
			$of(u"Holandés"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("diula"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("dzo"_s),
			$of("Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("egipcio antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("griego"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamita"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"inglés"_s)
		}),
		$$new($ObjectArray, {
			$of("eng"_s),
			$of(u"Inglés"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"inglés medieval"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("epo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"español"_s)
		}),
		$$new($ObjectArray, {
			$of("est"_s),
			$of("Estonio"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estonio"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("vasco"_s)
		}),
		$$new($ObjectArray, {
			$of("ewe"_s),
			$of(u"Efé"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fao"_s),
			$of(u"Faroés"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
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
			$of("fij"_s),
			$of("fidjiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("fin"_s),
			$of(u"Finlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("fiu"_s),
			$of(u"lengua finoúgria"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fidjiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"feroés"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"francés"_s)
		}),
		$$new($ObjectArray, {
			$of("fre"_s),
			$of(u"francés"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"francés medieval"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"francés antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"frisón septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"frisón oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("fry"_s),
			$of("Frisio del Oeste"_s)
		}),
		$$new($ObjectArray, {
			$of("ful"_s),
			$of("Fula"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friulano"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"frisón"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"gaélico escocés"_s)
		}),
		$$new($ObjectArray, {
			$of("gem"_s),
			$of(u"lengua germánica"_s)
		}),
		$$new($ObjectArray, {
			$of("geo"_s),
			$of("Georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ger"_s),
			$of(u"Alemán"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"gilbertés"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("gallego"_s)
		}),
		$$new($ObjectArray, {
			$of("gla"_s),
			$of(u"Gaélico"_s)
		}),
		$$new($ObjectArray, {
			$of("gle"_s),
			$of(u"Irlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("glg"_s),
			$of("Gallego"_s)
		}),
		$$new($ObjectArray, {
			$of("glv"_s),
			$of(u"Manés"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"alemán de la alta edad media"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"alemán de la alta edad antigua"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"gótico"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("griego antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("gre"_s),
			$of("Griego moderno (1453-)"_s)
		}),
		$$new($ObjectArray, {
			$of("grn"_s),
			$of(u"Guaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"alemán suizo"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("guj"_s),
			$of("Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"gaélico manés"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("kutchin"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("hat"_s),
			$of("Haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("hau"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaiano"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebreo"_s)
		}),
		$$new($ObjectArray, {
			$of("heb"_s),
			$of("hebreo"_s)
		}),
		$$new($ObjectArray, {
			$of("her"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("him"_s),
			$of("himachali"_s)
		}),
		$$new($ObjectArray, {
			$of("hin"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hitita"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("hmo"_s),
			$of("Hiri motu"_s)
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
			$of("hrv"_s),
			$of("Croata"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("sorbio superior"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"húngaro"_s)
		}),
		$$new($ObjectArray, {
			$of("hun"_s),
			$of(u"húngaro"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armenio"_s)
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
			$of("iba"_s),
			$of("iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ibo"_s),
			$of("Ibo"_s)
		}),
		$$new($ObjectArray, {
			$of("ice"_s),
			$of(u"Islandés"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonesio"_s)
		}),
		$$new($ObjectArray, {
			$of("ido"_s),
			$of("Ido"_s)
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
			$of("sichuan yi"_s)
		}),
		$$new($ObjectArray, {
			$of("iii"_s),
			$of(u"Yi de Sichuán"_s)
		}),
		$$new($ObjectArray, {
			$of("ijo"_s),
			$of("ijo"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("iku"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ile"_s),
			$of(u"Interlingüe"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilocano"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of("indonesio"_s)
		}),
		$$new($ObjectArray, {
			$of("ina"_s),
			$of(u"Interlingua (IALA, del inglés International Auxiliary Language Association)"_s)
		}),
		$$new($ObjectArray, {
			$of("inc"_s),
			$of(u"lengua índica"_s)
		}),
		$$new($ObjectArray, {
			$of("ind"_s),
			$of("Indonesio"_s)
		}),
		$$new($ObjectArray, {
			$of("ine"_s),
			$of("lengua indoeuropea"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingush"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("ipk"_s),
			$of(u"Iñupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("ira"_s),
			$of("lengua irania"_s)
		}),
		$$new($ObjectArray, {
			$of("iro"_s),
			$of("lenguas iroquesas"_s)
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
			$of("ita"_s),
			$of("Italiano"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("hebreo"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japonés"_s)
		}),
		$$new($ObjectArray, {
			$of("jav"_s),
			$of(u"Javanés"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"yídish"_s)
		}),
		$$new($ObjectArray, {
			$of("jpn"_s),
			$of(u"Japonés"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("judeo-persa"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"judeo-árabe"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"javanés"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpako"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("cabila"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kal"_s),
			$of("Kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("kan"_s),
			$of(u"Canarés"_s)
		}),
		$$new($ObjectArray, {
			$of("kar"_s),
			$of("karen"_s)
		}),
		$$new($ObjectArray, {
			$of("kas"_s),
			$of(u"Cachemirí"_s)
		}),
		$$new($ObjectArray, {
			$of("kau"_s),
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("kaz"_s),
			$of("Kazajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("khi"_s),
			$of("lengua joisana"_s)
		}),
		$$new($ObjectArray, {
			$of("khm"_s),
			$of("Jemer Central"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"kotanés"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("kik"_s),
			$of("Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("kin"_s),
			$of(u"Ruandés"_s)
		}),
		$$new($ObjectArray, {
			$of("kir"_s),
			$of("kirghiz"_s)
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
			$of("jemer"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"canarés"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("kom"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kon"_s),
			$of("Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("kor"_s),
			$of("Coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosraeano"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karachay-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("carelio"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of("kru"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("cachemiro"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdo"_s)
		}),
		$$new($ObjectArray, {
			$of("kua"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("kur"_s),
			$of("Curdo"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenai"_s)
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
			$of("kirghiz"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"latín"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("lao"_s),
			$of("Laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lat"_s),
			$of(u"latín"_s)
		}),
		$$new($ObjectArray, {
			$of("lav"_s),
			$of(u"Letón"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburgués"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezgiano"_s)
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
			$of("lim"_s),
			$of(u"Limburgués"_s)
		}),
		$$new($ObjectArray, {
			$of("lin"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lit"_s),
			$of("Lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("ltz"_s),
			$of(u"Luxemburgués"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("lub"_s),
			$of("Luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lug"_s),
			$of("Luganda"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"luiseño"_s)
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
			$of("lus"_s),
			$of("lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"letón"_s)
		}),
		$$new($ObjectArray, {
			$of("mac"_s),
			$of("Macedonio"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"dirhams marroquíes"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mah"_s),
			$of(u"marshalés"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("macasar"_s)
		}),
		$$new($ObjectArray, {
			$of("mal"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("mao"_s),
			$of(u"Maorí"_s)
		}),
		$$new($ObjectArray, {
			$of("map"_s),
			$of("lengua austronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("mar"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masai"_s)
		}),
		$$new($ObjectArray, {
			$of("may"_s),
			$of("malayo"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mende"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariary malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshalés"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maorí"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("mis"_s),
			$of("lenguas varias"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("macedonio"_s)
		}),
		$$new($ObjectArray, {
			$of("mkh"_s),
			$of("lengua mon-jemer"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mlg"_s),
			$of("Malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mlt"_s),
			$of(u"Maltés"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"manchú"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("mno"_s),
			$of("lenguas manobo"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of("moldavo"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("mon"_s),
			$of("Mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
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
			$of("mul"_s),
			$of(u"lenguas múltiples"_s)
		}),
		$$new($ObjectArray, {
			$of("mun"_s),
			$of("lenguas munda"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandés"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birmano"_s)
		}),
		$$new($ObjectArray, {
			$of("myn"_s),
			$of("maya"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruano"_s)
		}),
		$$new($ObjectArray, {
			$of("nah"_s),
			$of(u"náhuatl"_s)
		}),
		$$new($ObjectArray, {
			$of("nai"_s),
			$of("lengua india norteamericana"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napolitano"_s)
		}),
		$$new($ObjectArray, {
			$of("nau"_s),
			$of("Nauruano"_s)
		}),
		$$new($ObjectArray, {
			$of("nav"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of("bokmal noruego"_s)
		}),
		$$new($ObjectArray, {
			$of("nbl"_s),
			$of("Ndebele del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("nde"_s),
			$of("ndebele septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("ndo"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"bajo alemán"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepalí"_s)
		}),
		$$new($ObjectArray, {
			$of("nep"_s),
			$of(u"Nepalí"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("newari"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("nias"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"córdobas nicaragüenses"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niueano"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"neerlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("nynorsk noruego"_s)
		}),
		$$new($ObjectArray, {
			$of("nno"_s),
			$of("Noruego Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("noruego"_s)
		}),
		$$new($ObjectArray, {
			$of("nob"_s),
			$of("Noruego Bokmal"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"nórdico antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("nor"_s),
			$of("Noruego"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("n\'ko"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("nub"_s),
			$of("lenguas nubias"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"newari clásico"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("nya"_s),
			$of("Chichewa"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("nyamwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("occitano"_s)
		}),
		$$new($ObjectArray, {
			$of("oci"_s),
			$of("Occitano (posterior a 1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("oji"_s),
			$of("Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("ori"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("orm"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"osético"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("oss"_s),
			$of(u"Osético"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("turco otomano"_s)
		}),
		$$new($ObjectArray, {
			$of("oto"_s),
			$of("lenguas otomanas"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"punjabí"_s)
		}),
		$$new($ObjectArray, {
			$of("paa"_s),
			$of(u"lengua papú"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"pangasinán"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("pan"_s),
			$of(u"Penyabí"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauano"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("persa antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("per"_s),
			$of("Persa"_s)
		}),
		$$new($ObjectArray, {
			$of("phi"_s),
			$of("lengua filipina"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("fenicio"_s)
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
			$of("pli"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pol"_s),
			$of("Polaco"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("pohnpeiano"_s)
		}),
		$$new($ObjectArray, {
			$of("por"_s),
			$of(u"Portugués"_s)
		}),
		$$new($ObjectArray, {
			$of("pra"_s),
			$of(u"lenguas prácritas"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("provenzal antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugués"_s)
		}),
		$$new($ObjectArray, {
			$of("pus"_s),
			$of("Pushto; Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("que"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongano"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retorrománico"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("kiroundi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumano"_s)
		}),
		$$new($ObjectArray, {
			$of("roa"_s),
			$of("lengua romance"_s)
		}),
		$$new($ObjectArray, {
			$of("roh"_s),
			$of("Romansh"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"romaní"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("ruso"_s)
		}),
		$$new($ObjectArray, {
			$of("rum"_s),
			$of("rumano"_s)
		}),
		$$new($ObjectArray, {
			$of("run"_s),
			$of(u"Rundí"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("arrumano"_s)
		}),
		$$new($ObjectArray, {
			$of("rus"_s),
			$of("Ruso"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"sánscrito"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("sag"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("yakut"_s)
		}),
		$$new($ObjectArray, {
			$of("sai"_s),
			$of("lengua india sudamericana"_s)
		}),
		$$new($ObjectArray, {
			$of("sal"_s),
			$of("lenguas salish"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("arameo samaritano"_s)
		}),
		$$new($ObjectArray, {
			$of("san"_s),
			$of(u"Sánscrito"_s)
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
			$of("sc"_s),
			$of("sardo"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("siciliano"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"escocés"_s)
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
			$of("sel"_s),
			$of("selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("sem"_s),
			$of(u"lengua semítica"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"irlandés antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("sgn"_s),
			$of("lenguajes de signos"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shan"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"cingalés"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("sin"_s),
			$of(u"Cingalés"_s)
		}),
		$$new($ObjectArray, {
			$of("sio"_s),
			$of("lenguas sioux"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"tólares eslovenos"_s)
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
			$of("sla"_s),
			$of("lengua eslava"_s)
		}),
		$$new($ObjectArray, {
			$of("slo"_s),
			$of("Eslovaco"_s)
		}),
		$$new($ObjectArray, {
			$of("slv"_s),
			$of("Esloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("sami meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("sme"_s),
			$of("Sami del Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("smi"_s),
			$of("lengua sami"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("sami lule"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("sami inari"_s)
		}),
		$$new($ObjectArray, {
			$of("smo"_s),
			$of("Samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("sami skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("sna"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("snd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"soninké"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somalí"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("som"_s),
			$of(u"Somalí"_s)
		}),
		$$new($ObjectArray, {
			$of("son"_s),
			$of("songhai"_s)
		}),
		$$new($ObjectArray, {
			$of("sot"_s),
			$of("Sotho del Sur"_s)
		}),
		$$new($ObjectArray, {
			$of("spa"_s),
			$of(u"Español"_s)
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
			$of("srd"_s),
			$of(u"dólar surinamés"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("srp"_s),
			$of("serbio"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("serer"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("siswati"_s)
		}),
		$$new($ObjectArray, {
			$of("ssa"_s),
			$of("lengua nilo-sahariana"_s)
		}),
		$$new($ObjectArray, {
			$of("ssw"_s),
			$of("Suazi"_s)
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
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sun"_s),
			$of(u"sudanés"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"susú"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumerio"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("sueco"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("swa"_s),
			$of("Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("swe"_s),
			$of("Sueco"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"siríaco clásico"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("siriaco"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("tah"_s),
			$of("tahitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("tai"_s),
			$of("lengua tai"_s)
		}),
		$$new($ObjectArray, {
			$of("tam"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("tat"_s),
			$of("Tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("tel"_s),
			$of("Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temne"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tetún"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tayiko"_s)
		}),
		$$new($ObjectArray, {
			$of("tgk"_s),
			$of("Tajik"_s)
		}),
		$$new($ObjectArray, {
			$of("tgl"_s),
			$of("Tagalo"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"tailandés"_s)
		}),
		$$new($ObjectArray, {
			$of("tha"_s),
			$of(u"Tailandés"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigriña"_s)
		}),
		$$new($ObjectArray, {
			$of("tib"_s),
			$of("Tibetano"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigré"_s)
		}),
		$$new($ObjectArray, {
			$of("tir"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turcomano"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelauano"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalo"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setchwana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongano"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("tonga del Nyasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ton"_s),
			$of("Tongano (Islas Tonga)"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
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
			$of("tsi"_s),
			$of("tsimshiano"_s)
		}),
		$$new($ObjectArray, {
			$of("tsn"_s),
			$of("Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("tso"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tártaro"_s)
		}),
		$$new($ObjectArray, {
			$of("tuk"_s),
			$of("Turcomano"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("tup"_s),
			$of(u"lenguas tupí"_s)
		}),
		$$new($ObjectArray, {
			$of("tur"_s),
			$of("Turco"_s)
		}),
		$$new($ObjectArray, {
			$of("tut"_s),
			$of("lengua altaica"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvaluano"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("twi"_s),
			$of("Tui"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuviniano"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uigur"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ugarítico"_s)
		}),
		$$new($ObjectArray, {
			$of("uig"_s),
			$of("Uiguro"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("ukr"_s),
			$of("Ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("indeterminada"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("urd"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbeko"_s)
		}),
		$$new($ObjectArray, {
			$of("uzb"_s),
			$of("Uzbeco"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("ven"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vie"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("vol"_s),
			$of("Volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"vótico"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"valón"_s)
		}),
		$$new($ObjectArray, {
			$of("wak"_s),
			$of("lenguas wakasha"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("walamo"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("washo"_s)
		}),
		$$new($ObjectArray, {
			$of("wel"_s),
			$of(u"Galés"_s)
		}),
		$$new($ObjectArray, {
			$of("wen"_s),
			$of("lenguas sorbias"_s)
		}),
		$$new($ObjectArray, {
			$of("wln"_s),
			$of(u"valón"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("uolof"_s)
		}),
		$$new($ObjectArray, {
			$of("wol"_s),
			$of("Uolof"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("xho"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("yao"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"yapés"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"yídish"_s)
		}),
		$$new($ObjectArray, {
			$of("yid"_s),
			$of(u"Yídish"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("yor"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("ypk"_s),
			$of("lenguas yupik"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapoteco"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"símbolos bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("chino"_s)
		}),
		$$new($ObjectArray, {
			$of("zha"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("znd"_s),
			$of("zande"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zulú"_s)
		}),
		$$new($ObjectArray, {
			$of("zul"_s),
			$of(u"Zulú"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"zuní"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"sin contenido lingüístico"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zazaki"_s)
		})
	});
}

LocaleNames_es::LocaleNames_es() {
}

$Class* LocaleNames_es::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_es, name, initialize, &_LocaleNames_es_ClassInfo_, allocate$LocaleNames_es);
	return class$;
}

$Class* LocaleNames_es::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun