#include <sun/util/resources/ext/LocaleNames_fr.h>

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

$MethodInfo _LocaleNames_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_fr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_fr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_fr",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_fr_MethodInfo_
};

$Object* allocate$LocaleNames_fr($Class* clazz) {
	return $of($alloc(LocaleNames_fr));
}

void LocaleNames_fr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Monde"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrique"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Amérique du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Amérique du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Océanie"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Afrique occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Amérique centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Afrique orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Afrique septentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Afrique centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Afrique australe"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amériques"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Amérique septentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Caraïbes"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asie orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asie du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Asie du Sud-Est"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Europe méridionale"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Australie et Nouvelle-Zélande"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Mélanésie"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Région micronésienne"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polynésie"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Asie centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asie occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europe orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europe septentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europe occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Amérique latine et Caraïbes"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorre"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Emirats Arabes Unis"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua et Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
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
			$of("AN"_s),
			$of(u"Antilles Néerlandaises"_s)
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
			$of("AX"_s),
			$of(u"Îles Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaïdjan"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arabe"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"Araméen impérial"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"Arménien"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("Avestique"_s)
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
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgique"_s)
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
			$of("Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudes"_s)
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
			$of("BR"_s),
			$of(u"Brésil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
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
			$of(u"Biélo-Russie"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Bélize"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("Balinais"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("Bamoun"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of("Symboles Bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("Bouguis"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Bouhide"_s)
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
			$of("CD"_s),
			$of(u"République démocratique du Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"République Centre-Africaine"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suisse"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d\'Ivoire"_s)
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
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of(u"Serbie et Monténégro"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cap Vert"_s)
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
			$of(u"République Tchèque"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"Syllabaire autochtone canadien unifié"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Carien"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("Cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("Cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("Copte"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Syllabaire chypriote"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cyrillique"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("Cyrillique (variante slavonne)"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Allemagne"_s)
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
			$of("DM"_s),
			$of("Dominique"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"République Dominicaine"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Algérie"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Sténographie Duployé"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Equateur"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonie"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Erythrée"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Espagne"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopie"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"Démotique égyptien"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Hiératique égyptien"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Hiéroglyphes égyptiens"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("Ethiopique"_s)
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
			$of("FO"_s),
			$of(u"Îles Féroé"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("France"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Royaume-Uni"_s)
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
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Groenland"_s)
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
			$of(u"Guinée Equatoriale"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Grèce"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Géorgie du Sud et îles Sandwich du Sud"_s)
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
			$of(u"Guinée-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"Géorgien khoutsouri"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"Géorgien"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitique"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("Gothique"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("Grec"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("Goudjarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"Gourmoukhî"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong-Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Île Heard et îles McDonald"_s)
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
			$of("HT"_s),
			$of(u"Haïti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hongrie"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"Idéogrammes han"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Idéogrammes han simplifiés"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Idéogrammes han traditionnels"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"Hébreu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("Katakana ou Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Ancien hongrois"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indonésie"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlande"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Israël"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Inde"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territoires britanniques de l\'Océan Indien"_s)
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
			$of("Inds"_s),
			$of("Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Ancien italique"_s)
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
			$of("JP"_s),
			$of("Japon"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("Javanais"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("Japonais"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kyrgyzstan"_s)
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
			$of("KP"_s),
			$of(u"Corée du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Corée du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Koweit"_s)
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
			$of("Kali"_s),
			$of("Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"Coréen"_s)
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
			$of("Liban"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Sainte-Lucie"_s)
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
			$of("Lithuanie"_s)
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
			$of("LY"_s),
			$of("Libye"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("Tai Tham"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Laotien"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"Latin (variante brisée)"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"Latin (variante gaélique)"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("Limbou"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"Linéaire A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"Linéaire B"_s)
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
			$of("Lycien"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydien"_s)
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
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Îles Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Macédoine"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolie"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao"_s)
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
			$of("MU"_s),
			$of("Maurice"_s)
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
			$of("MY"_s),
			$of("Malaisie"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"Mandéen"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"Manichéen"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"Hiéroglyphes mayas"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"Mendé"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"Cursive méroïtique"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"Méroïtique"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("Mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("Moon"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Meitei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibie"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nouvelle-Calédonie"_s)
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
			$of(u"Nigéria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
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
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nouvelle-Zélande"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Arabe ancien du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"Nabatéen"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Nakhi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of("N\'Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogam"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol tchiki"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("Oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("Osmanais"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Pérou"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polynésie Française"_s)
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
			$of("PM"_s),
			$of("Saint-Pierre-et-Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestine"_s)
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
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"Palmyréen"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Ancien permien"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Phags pa"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Pehlevi des inscriptions"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Pehlevi des psautiers"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("Pehlevi des livres"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"Phénicien"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Miao"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Parthe des inscriptions"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"La Réunion"_s)
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
			$of("Rjng"_s),
			$of("Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("Runique"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabie Saoudite"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Îles Salomon"_s)
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
			$of("SE"_s),
			$of(u"Suède"_s)
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
			$of("SI"_s),
			$of(u"Slovénie"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard et Jan Mayen"_s)
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
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tomé et Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syrie"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("Samaritain"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of("Arabe ancien du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("Ecriture des signes"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shavian"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("Singhalais"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("Soundanais"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("Syriaque"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"Syriaque estranghélo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("Syriaque occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("Syriaque oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Îles Turks et Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tchad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Territoires Français du Sud"_s)
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
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkménistan"_s)
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
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanie"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("Tagbanoua"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"Taï-le"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"Nouveau taï-lue"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Tamoul"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"Taï Viet"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"Télougou"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("Tengwar"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"Thâna"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"Thaï"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"Tibétain"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Ouganda"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Dépendances américaines du Pacifique"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Etats-Unis"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Ouzbékistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("Ougaritique"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatican"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint-Vincent-et-les Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Vénézuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Iles Vierges Britanniques"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Iles Vierges Américaines"_s)
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
			$of(u"Vaï"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("Langage visuel"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis-et-Futuna"_s)
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
			$of(u"Cunéiforme persépolitain"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"Cunéiforme suméro-akkadien"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Yémen"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afrique du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambie"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"Hérité"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"Notation mathématique"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Symboles"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Non écrit"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"Script non déterminé"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Ecriture inconnue ou non valide"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("aar"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhaze"_s)
		}),
		$$new($ObjectArray, {
			$of("abk"_s),
			$of("Abkhaze"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Achinais"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"Adyghéen"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("avestan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of("Afro-asiatique"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("Afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("afr"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"Aïnou"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("aka"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("Akkadien"_s)
		}),
		$$new($ObjectArray, {
			$of("alb"_s),
			$of("Albanais"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"Aléoute"_s)
		}),
		$$new($ObjectArray, {
			$of("alg"_s),
			$of("Langue algonquienne"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"Altaï du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amharique"_s)
		}),
		$$new($ObjectArray, {
			$of("amh"_s),
			$of("Amharique"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonais"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Vieil anglais (environ 450-1100)"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("apa"_s),
			$of("Langue apache"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabe"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Arabe"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"Araméen officiel (700-300 av. J.-C.)"_s)
		}),
		$$new($ObjectArray, {
			$of("arg"_s),
			$of("Aragonais"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"Arménien"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("Mapudungun"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("art"_s),
			$of("Langue artificielle"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assamais"_s)
		}),
		$$new($ObjectArray, {
			$of("asm"_s),
			$of("Assamais"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Asturien"_s)
		}),
		$$new($ObjectArray, {
			$of("ath"_s),
			$of("Langue athapascane"_s)
		}),
		$$new($ObjectArray, {
			$of("aus"_s),
			$of("Langue australienne"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("ava"_s),
			$of("Avar"_s)
		}),
		$$new($ObjectArray, {
			$of("ave"_s),
			$of("Avestique"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("aym"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azéri"_s)
		}),
		$$new($ObjectArray, {
			$of("aze"_s),
			$of(u"Azéri"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bachkir"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("Banda"_s)
		}),
		$$new($ObjectArray, {
			$of("bai"_s),
			$of(u"Langue bamilékée"_s)
		}),
		$$new($ObjectArray, {
			$of("bak"_s),
			$of("Bachkir"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Baloutchi"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("Balinais"_s)
		}),
		$$new($ObjectArray, {
			$of("baq"_s),
			$of("Basque"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Bassa"_s)
		}),
		$$new($ObjectArray, {
			$of("bat"_s),
			$of("Langue balte"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"biélorusse"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Bedja"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"Biélorusse"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("ben"_s),
			$of("Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("ber"_s),
			$of(u"Berbère"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgare"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of("bihari"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bichlamar"_s)
		}),
		$$new($ObjectArray, {
			$of("bih"_s),
			$of("Bihari"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("Bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("bis"_s),
			$of("Bichlamar"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Siksika"_s)
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
			$of("bnt"_s),
			$of("Bantou"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"tibétain"_s)
		}),
		$$new($ObjectArray, {
			$of("bos"_s),
			$of("Bosniaque"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of("Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniaque"_s)
		}),
		$$new($ObjectArray, {
			$of("btk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Bouriate"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Bouguinais"_s)
		}),
		$$new($ObjectArray, {
			$of("bul"_s),
			$of("Bulgare"_s)
		}),
		$$new($ObjectArray, {
			$of("bur"_s),
			$of("Birman"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("cai"_s),
			$of(u"Langue amérindienne centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Galibi Caribe"_s)
		}),
		$$new($ObjectArray, {
			$of("cat"_s),
			$of("Catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("cau"_s),
			$of("Langue caucasienne"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"tchétchène"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("cel"_s),
			$of("Langue celtique"_s)
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
			$of("Chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"Tchétchène"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"Tchaghataï"_s)
		}),
		$$new($ObjectArray, {
			$of("chi"_s),
			$of("Chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("Jargon chinook"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("Choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("Chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("chu"_s),
			$of("Slavon liturgique"_s)
		}),
		$$new($ObjectArray, {
			$of("chv"_s),
			$of("Tchouvache"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("cmc"_s),
			$of("Langue chame"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("corse"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Copte"_s)
		}),
		$$new($ObjectArray, {
			$of("cor"_s),
			$of("Cornouaillais"_s)
		}),
		$$new($ObjectArray, {
			$of("cos"_s),
			$of("Corse"_s)
		}),
		$$new($ObjectArray, {
			$of("cpe"_s),
			$of(u"Créole ou pidgin anglais"_s)
		}),
		$$new($ObjectArray, {
			$of("cpf"_s),
			$of(u"Créole ou pidgin français"_s)
		}),
		$$new($ObjectArray, {
			$of("cpp"_s),
			$of(u"Créole ou pidgin portugais"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cri"_s)
		}),
		$$new($ObjectArray, {
			$of("cre"_s),
			$of("Cri"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"Turc de Crimée"_s)
		}),
		$$new($ObjectArray, {
			$of("crp"_s),
			$of(u"Créole ou pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"tchèque"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kachoube"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"slavon d\'église"_s)
		}),
		$$new($ObjectArray, {
			$of("cus"_s),
			$of("Langue couchitique"_s)
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
			$of("cze"_s),
			$of(u"Tchèque"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danois"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("dan"_s),
			$of("Danois"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("day"_s),
			$of("Dayak"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slave (Athapascan)"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("div"_s),
			$of("Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("Dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("dra"_s),
			$of("Langue dravidienne"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Bas-sorabe"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Douala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Moyen néerlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("dut"_s),
			$of(u"Néerlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Dioula"_s)
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
			$of(u"éwé"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("Egyptien ancien"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("grec"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamite"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("anglais"_s)
		}),
		$$new($ObjectArray, {
			$of("eng"_s),
			$of("Anglais"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Moyen anglais"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"espéranto"_s)
		}),
		$$new($ObjectArray, {
			$of("epo"_s),
			$of(u"Espéranto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("espagnol"_s)
		}),
		$$new($ObjectArray, {
			$of("est"_s),
			$of("Estonien"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estonien"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basque"_s)
		}),
		$$new($ObjectArray, {
			$of("ewe"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persan"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fao"_s),
			$of(u"Féroïen"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("peul"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finnois"_s)
		}),
		$$new($ObjectArray, {
			$of("fij"_s),
			$of("Fidjien"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("fin"_s),
			$of("Finnois"_s)
		}),
		$$new($ObjectArray, {
			$of("fiu"_s),
			$of("Langue finno-ougrienne"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fidjien"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"féroïen"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"français"_s)
		}),
		$$new($ObjectArray, {
			$of("fre"_s),
			$of(u"Français"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Moyen français"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"Ancien français"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Frison du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Frison oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("fry"_s),
			$of("Frison occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ful"_s),
			$of("Peul"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Frioulan"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("frison"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("Gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"ecossais gaélique"_s)
		}),
		$$new($ObjectArray, {
			$of("gem"_s),
			$of("Langue germanique"_s)
		}),
		$$new($ObjectArray, {
			$of("geo"_s),
			$of(u"Géorgien"_s)
		}),
		$$new($ObjectArray, {
			$of("ger"_s),
			$of("Allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"Guèze"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertais"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galicien"_s)
		}),
		$$new($ObjectArray, {
			$of("gla"_s),
			$of("Gallois"_s)
		}),
		$$new($ObjectArray, {
			$of("gle"_s),
			$of("Irlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("glg"_s),
			$of("Galicien"_s)
		}),
		$$new($ObjectArray, {
			$of("glv"_s),
			$of("Mannois"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("Moyen haut-allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("Ancien haut-allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("Gothique"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Grec ancien"_s)
		}),
		$$new($ObjectArray, {
			$of("gre"_s),
			$of("Grec, moderne (1453 -)"_s)
		}),
		$$new($ObjectArray, {
			$of("grn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Alémanique"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("goudjrati"_s)
		}),
		$$new($ObjectArray, {
			$of("guj"_s),
			$of("Goudjarati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manx"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("Gwich\'in"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("haoussa"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("hat"_s),
			$of(u"Haïtien"_s)
		}),
		$$new($ObjectArray, {
			$of("hau"_s),
			$of("Haoussa"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Hawaïen"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"hébreu"_s)
		}),
		$$new($ObjectArray, {
			$of("heb"_s),
			$of(u"Hébreu"_s)
		}),
		$$new($ObjectArray, {
			$of("her"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("him"_s),
			$of("Himachali"_s)
		}),
		$$new($ObjectArray, {
			$of("hin"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hittite"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("hmo"_s),
			$of("Hiri Motu"_s)
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
			$of("hrv"_s),
			$of("Croate"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Haut-sorabe"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"créole d\'Haïti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("hongrois"_s)
		}),
		$$new($ObjectArray, {
			$of("hun"_s),
			$of("Hongrois"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"arménien"_s)
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
			$of("Iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ibo"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ice"_s),
			$of("Islandais"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indonésien"_s)
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
			$of("ibo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("yi de Sichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("iii"_s),
			$of("Yi de Sichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("ijo"_s),
			$of("Ijo"_s)
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
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Ilokano"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"indonésien"_s)
		}),
		$$new($ObjectArray, {
			$of("ina"_s),
			$of("Interlingua (International Auxiliary Language Association)"_s)
		}),
		$$new($ObjectArray, {
			$of("inc"_s),
			$of("Langue indo-aryenne"_s)
		}),
		$$new($ObjectArray, {
			$of("ind"_s),
			$of(u"Indonésien"_s)
		}),
		$$new($ObjectArray, {
			$of("ine"_s),
			$of(u"Langue indo-européenne"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Ingouche"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("ipk"_s),
			$of("Inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("ira"_s),
			$of("Langue iranienne"_s)
		}),
		$$new($ObjectArray, {
			$of("iro"_s),
			$of("Langue iroquoienne"_s)
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
			$of("ita"_s),
			$of("Italien"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"hébreu"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japonais"_s)
		}),
		$$new($ObjectArray, {
			$of("jav"_s),
			$of("Javanais"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of("yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("jpn"_s),
			$of("Japonais"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"Judéo-persan"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"Judéo-arabe"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javanais"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("georgien"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Karakalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("Kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kal"_s),
			$of("Groenlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("kan"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("kar"_s),
			$of("Karen"_s)
		}),
		$$new($ObjectArray, {
			$of("kas"_s),
			$of("Kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("kau"_s),
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("Kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("kaz"_s),
			$of("Kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardin"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("khi"_s),
			$of(u"Langue khoïsan"_s)
		}),
		$$new($ObjectArray, {
			$of("khm"_s),
			$of("Khmer central"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Khotanais"_s)
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
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kir"_s),
			$of("Kirghize"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kwanyama"_s)
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
			$of("khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"coréen"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("kom"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kon"_s),
			$of("Kikongo"_s)
		}),
		$$new($ObjectArray, {
			$of("kor"_s),
			$of(u"Coréen"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosrae"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"Kpellé"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanouri"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"Karatchaï balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"Carélien"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of("Krou"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurde"_s)
		}),
		$$new($ObjectArray, {
			$of("kua"_s),
			$of("Kwanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Koumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("kur"_s),
			$of("Kurde"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("Kutenai"_s)
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
			$of("la"_s),
			$of("latin"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("Ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("Lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("Lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("lao"_s),
			$of("Laotien"_s)
		}),
		$$new($ObjectArray, {
			$of("lat"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("lav"_s),
			$of("Letton"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luxembourgeois"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lezghien"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limbourgeois"_s)
		}),
		$$new($ObjectArray, {
			$of("lim"_s),
			$of("Limburgan"_s)
		}),
		$$new($ObjectArray, {
			$of("lin"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lit"_s),
			$of("Lituanien"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lithuanien"_s)
		}),
		$$new($ObjectArray, {
			$of("ltz"_s),
			$of("Luxembourgeois"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("lub"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lug"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("Luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("letton"_s)
		}),
		$$new($ObjectArray, {
			$of("mac"_s),
			$of(u"Macédonien"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Madurais"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mah"_s),
			$of("Marshallais"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makassar"_s)
		}),
		$$new($ObjectArray, {
			$of("mal"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Mandingue"_s)
		}),
		$$new($ObjectArray, {
			$of("mao"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("map"_s),
			$of(u"Malayo-polynésien"_s)
		}),
		$$new($ObjectArray, {
			$of("mar"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Masai"_s)
		}),
		$$new($ObjectArray, {
			$of("may"_s),
			$of("Malais"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Moksa"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"Mendé"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Irlandais, moyen (900 - 1200)"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("mis"_s),
			$of(u"Non codé"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"macédonien"_s)
		}),
		$$new($ObjectArray, {
			$of("mkh"_s),
			$of(u"Langue mon-khmère"_s)
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
			$of("Maltais"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("Mandchou"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("mno"_s),
			$of("Langue manobo"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of("moldave"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("mon"_s),
			$of("Mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"Moré"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathe"_s)
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
			$of("mul"_s),
			$of("Multilingue"_s)
		}),
		$$new($ObjectArray, {
			$of("mun"_s),
			$of("Langue mounda"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Creek"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandais"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birman"_s)
		}),
		$$new($ObjectArray, {
			$of("myn"_s),
			$of("Langue maya"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruan"_s)
		}),
		$$new($ObjectArray, {
			$of("nah"_s),
			$of("Nahuatl"_s)
		}),
		$$new($ObjectArray, {
			$of("nai"_s),
			$of(u"Langue amérindienne du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Napolitain"_s)
		}),
		$$new($ObjectArray, {
			$of("nau"_s),
			$of("Nauruan"_s)
		}),
		$$new($ObjectArray, {
			$of("nav"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norvégien bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nbl"_s),
			$of("Ndebele, Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ndébélé du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("nde"_s),
			$of("Ndebele, nord"_s)
		}),
		$$new($ObjectArray, {
			$of("ndo"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Bas-allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"népalais"_s)
		}),
		$$new($ObjectArray, {
			$of("nep"_s),
			$of(u"Népalais"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of("Niger-kordofanian"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niue"_s)
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
			$of("nno"_s),
			$of(u"Norvégien nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norvégien"_s)
		}),
		$$new($ObjectArray, {
			$of("nob"_s),
			$of(u"Bokmal, Norvégien"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"Nogaï"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("Vieux norrois"_s)
		}),
		$$new($ObjectArray, {
			$of("nor"_s),
			$of(u"Norvégien"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("N\'Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ndébélé du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Pedi"_s)
		}),
		$$new($ObjectArray, {
			$of("nub"_s),
			$of("Langue nubienne"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navaho"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Newari classique"_s)
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
			$of("Nyamwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("Nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzema"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("occitan"_s)
		}),
		$$new($ObjectArray, {
			$of("oci"_s),
			$of(u"Occitan (après 1500)"_s)
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
			$of("galla"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("ori"_s),
			$of("Oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("orm"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ossète"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("Osage"_s)
		}),
		$$new($ObjectArray, {
			$of("oss"_s),
			$of(u"Ossète"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("Turc ottoman"_s)
		}),
		$$new($ObjectArray, {
			$of("oto"_s),
			$of("Langue otomangue"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("pendjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("paa"_s),
			$of("Langue papoue"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampangan"_s)
		}),
		$$new($ObjectArray, {
			$of("pan"_s),
			$of("Panjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("Papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("Persan ancien"_s)
		}),
		$$new($ObjectArray, {
			$of("per"_s),
			$of("Persan"_s)
		}),
		$$new($ObjectArray, {
			$of("phi"_s),
			$of("Langue philippine"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"Phénicien"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polonais"_s)
		}),
		$$new($ObjectArray, {
			$of("pli"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pol"_s),
			$of("Polonais"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Pohnpei"_s)
		}),
		$$new($ObjectArray, {
			$of("por"_s),
			$of("Portugais"_s)
		}),
		$$new($ObjectArray, {
			$of("pra"_s),
			$of(u"Langues prâkrit"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"Provençal ancien"_s)
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
			$of("pus"_s),
			$of("Pushto ; Pashto"_s)
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
			$of("Rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("Rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotongien"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"rhétoroman"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("roumain"_s)
		}),
		$$new($ObjectArray, {
			$of("roa"_s),
			$of("Langue romane"_s)
		}),
		$$new($ObjectArray, {
			$of("roh"_s),
			$of("Romanche"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romani"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("russe"_s)
		}),
		$$new($ObjectArray, {
			$of("rum"_s),
			$of("Roumain"_s)
		}),
		$$new($ObjectArray, {
			$of("run"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aroumain"_s)
		}),
		$$new($ObjectArray, {
			$of("rus"_s),
			$of("Russe"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanscrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("sag"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Yakoute"_s)
		}),
		$$new($ObjectArray, {
			$of("sai"_s),
			$of(u"Langue amérindienne du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("sal"_s),
			$of("Langue salishenne"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"Araméen samaritain"_s)
		}),
		$$new($ObjectArray, {
			$of("san"_s),
			$of("Sanscrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("Sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santal"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sarde"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sicilien"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Ecossais"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("sami du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selkoupe"_s)
		}),
		$$new($ObjectArray, {
			$of("sem"_s),
			$of(u"Langue sémitique"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Ancien irlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("sgn"_s),
			$of("Langue des signes"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("singhalais"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("sin"_s),
			$of("Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("sio"_s),
			$of("Langue sioux"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Sino-tibétain"_s)
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
			$of("sla"_s),
			$of("Langue slave"_s)
		}),
		$$new($ObjectArray, {
			$of("slo"_s),
			$of("Slovaque"_s)
		}),
		$$new($ObjectArray, {
			$of("slv"_s),
			$of(u"Slovène"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Sami du sud"_s)
		}),
		$$new($ObjectArray, {
			$of("sme"_s),
			$of("Sami du Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("smi"_s),
			$of("Langue samie"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Sami de Lule"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Sami d\'Inari"_s)
		}),
		$$new($ObjectArray, {
			$of("smo"_s),
			$of("Samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Sami skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("sna"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("snd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"Soninké"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somali"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("som"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("son"_s),
			$of("Songhai"_s)
		}),
		$$new($ObjectArray, {
			$of("sot"_s),
			$of("Sotho, sud"_s)
		}),
		$$new($ObjectArray, {
			$of("spa"_s),
			$of("Espagnol"_s)
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
			$of("srd"_s),
			$of("Sarde"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Sranan Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("srp"_s),
			$of("Serbe"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"Sérère"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swati"_s)
		}),
		$$new($ObjectArray, {
			$of("ssa"_s),
			$of("Langue nilo-saharienne"_s)
		}),
		$$new($ObjectArray, {
			$of("ssw"_s),
			$of("Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sotho du sud"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("soundanais"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sun"_s),
			$of("Soundanais"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Soussou"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"Sumérien"_s)
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
			$of("swa"_s),
			$of(u"Souahéli"_s)
		}),
		$$new($ObjectArray, {
			$of("swe"_s),
			$of(u"Suédois"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("Syriaque classique"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Syriaque"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamoul"_s)
		}),
		$$new($ObjectArray, {
			$of("tah"_s),
			$of("Tahitien"_s)
		}),
		$$new($ObjectArray, {
			$of("tai"_s),
			$of(u"Langue taï"_s)
		}),
		$$new($ObjectArray, {
			$of("tam"_s),
			$of("Tamoul"_s)
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
			$of(u"Télougou"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("Temne"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("Tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("tgk"_s),
			$of("Tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("tgl"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"thaï"_s)
		}),
		$$new($ObjectArray, {
			$of("tha"_s),
			$of(u"Thaï"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrigna"_s)
		}),
		$$new($ObjectArray, {
			$of("tib"_s),
			$of(u"Tibétain"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("tir"_s),
			$of("Tigrigna"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkmène"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("Tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("Tamacheq"_s)
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
			$of("tog"_s),
			$of("Tonga nyasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ton"_s),
			$of("Tonga (Iles Tonga)"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
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
			$of("tsi"_s),
			$of("Tsimshian"_s)
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
			$of("tatare"_s)
		}),
		$$new($ObjectArray, {
			$of("tuk"_s),
			$of(u"Turkmène"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("tup"_s),
			$of("Langue tupi"_s)
		}),
		$$new($ObjectArray, {
			$of("tur"_s),
			$of("Turc"_s)
		}),
		$$new($ObjectArray, {
			$of("tut"_s),
			$of(u"Langue altaïque"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("twi"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitien"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Touva"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Oudmourte"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ouïgour"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("Ougaritique"_s)
		}),
		$$new($ObjectArray, {
			$of("uig"_s),
			$of(u"Ouïgour"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrainien"_s)
		}),
		$$new($ObjectArray, {
			$of("ukr"_s),
			$of("Ukrainien"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Indéterminé"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("ourdou"_s)
		}),
		$$new($ObjectArray, {
			$of("urd"_s),
			$of("Ourdou"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("ouzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("uzb"_s),
			$of("Ouzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"Vaï"_s)
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
			$of("vietnamien"_s)
		}),
		$$new($ObjectArray, {
			$of("vie"_s),
			$of("Vietnamien"_s)
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
			$of("Vote"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("wallon"_s)
		}),
		$$new($ObjectArray, {
			$of("wak"_s),
			$of("Langues wakashennes"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Wolaitta"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("Washo"_s)
		}),
		$$new($ObjectArray, {
			$of("wel"_s),
			$of("Gallois"_s)
		}),
		$$new($ObjectArray, {
			$of("wen"_s),
			$of("Langue sorabe"_s)
		}),
		$$new($ObjectArray, {
			$of("wln"_s),
			$of("Wallon"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("wol"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("Kalmouk"_s)
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
			$of("Yao"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("Yap"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("yid"_s),
			$of("Yiddish"_s)
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
			$of("Langues yupik"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"Zapotèque"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("Symboles Bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("zha"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("znd"_s),
			$of("Zande"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zoulou"_s)
		}),
		$$new($ObjectArray, {
			$of("zul"_s),
			$of("Zoulou"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Sans contenu linguistique"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zazaki"_s)
		})
	});
}

LocaleNames_fr::LocaleNames_fr() {
}

$Class* LocaleNames_fr::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_fr, name, initialize, &_LocaleNames_fr_ClassInfo_, allocate$LocaleNames_fr);
	return class$;
}

$Class* LocaleNames_fr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun