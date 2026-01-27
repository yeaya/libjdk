#include <sun/util/resources/ext/LocaleNames_it.h>

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

$MethodInfo _LocaleNames_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_it",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_it_MethodInfo_
};

$Object* allocate$LocaleNames_it($Class* clazz) {
	return $of($alloc(LocaleNames_it));
}

void LocaleNames_it::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_it::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Mondo"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("America del Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("America del Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Africa occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("America centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Africa orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Africa settentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Africa centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Africa meridionale"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Americhe"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("America settentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Caraibi"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asia orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia meridionale"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Asia sudorientale"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa meridionale"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australia e Nuova Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Regione Micronesiana"_s)
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
			$of("Asia centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa settentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("America Latina e Caraibi"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Emirati Arabi Uniti"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua e Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
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
			$of("Antille Olandesi"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antartide"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa americane"_s)
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
			$of("Isole Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaigian"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arabo"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("Aramaico imperiale"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("Armeno"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("Avestano"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia-Erzegovina"_s)
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
			$of("Belgio"_s)
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
			$of("BM"_s),
			$of("Bermuda"_s)
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
			$of("BR"_s),
			$of("Brasile"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Isola di Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bielorussia"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("Balinese"_s)
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
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("Bengalese"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of("Simboli bliss"_s)
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
			$of("Buginese"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Isole Cocos"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Repubblica democratica del Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Repubblica Centrafricana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Svizzera"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Costa d\'Avorio"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Isole Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Cile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Camerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Cina"_s)
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
			$of("Serbia e Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Capo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Isola di Natale"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cipro"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Repubblica Ceca"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("Simboli aborigeni canadesi unificati"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Cario"_s)
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
			$of("Copto"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Cipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cirillico"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("Cirillico (antico slavo ecclesiastico)"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Germania"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Gibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danimarca"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Repubblica Dominicana"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
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
			$of("Stenografia duployan"_s)
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
			$of("Egitto"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spagna"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("Egiziano demotico"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("Ieratico egiziano"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("Geroglifici egiziani"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("Etiope"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Figi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Isole Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Isole Færoer"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francia"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Regno Unito"_s)
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
			$of("Guayana Francese"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibilterra"_s)
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
			$of("Guadalupa"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Guinea Equatoriale"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grecia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Georgia del sud e isole Sandwich meridionali"_s)
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
			$of("Guinea Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("Khutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("Georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitico"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("Gotico"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("Greco"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Isole Heard e McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Croazia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungheria"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Han"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Han semplificato"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Han tradizionale"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("Ebraico"_s)
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
			$of("Katakana o Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Ungherese antico"_s)
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
			$of("Israele"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Territorio britannico dell\'Oceano Indiano"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islanda"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"Indù"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Italico antico"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Giamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Giordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Giappone"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("Giavanese"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("Giapponese"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirghizistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambogia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comore"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts e Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Corea del Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Corea del Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Isole Cayman"_s)
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
			$of("Coreano"_s)
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
			$of("Libano"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Sainte Lucia"_s)
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
			$of("Lussemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettonia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libia"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("Tai Tham"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Variante fraktur del latino"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("Latino gaelico"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latino"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("Lineare A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Lineare B"_s)
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
			$of("Licio"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lidio"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marocco"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
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
			$of("Isole Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Macedonia"_s)
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
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Isole Marianne settentrionali"_s)
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
			$of("Maurizio"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldive"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Messico"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambico"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("Mandaico"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("Manicheo"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("Geroglifici maya"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("Corsivo meroitico"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meoitico"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("Mongolo"_s)
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
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nuova Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Isola Norfolk"_s)
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
			$of("Paesi Bassi"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norvegia"_s)
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
			$of("Nuova Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Arabo antico del nord"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("Lingua nabatea"_s)
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
			$of("Ogamico"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol Chiki"_s)
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
			$of("Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Perù"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polinesia Francese"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nuova Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippine"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonia"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre e Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
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
			$of("Portogallo"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmyrene"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Permiano antico"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Pahlavi (Inscriptional)"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Pahlavi (Psalter)"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("Pahlavi (Book)"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of("Fenicio"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Miao"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Partico (iscrizioni)"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
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
			$of("RU"_s),
			$of("Russia"_s)
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
			$of("Runico"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Isole Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Svezia"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Sant\'Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard e Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovacchia"_s)
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
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé e Principe"_s)
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
			$of("Swaziland"_s)
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
			$of("Arabo antico del sud"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("SignWriting"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shaviano"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("Singalese"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("Sundanese"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("Siriaco"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("Siriaco estrangelo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("Siriaco occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("Siriaco orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Isole Turks e Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Ciad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Territori Francesi d\'Oltremare"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailandia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tagikistan"_s)
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
			$of("TM"_s),
			$of("Turkmenistan"_s)
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
			$of("Turchia"_s)
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
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("Tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("Tai Le"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("Tai Lue semplificato"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai Viet"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("Telugu"_s)
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
			$of("Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Tailandese"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("Tibetano"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ucraina"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Isole minori lontane degli Stati Uniti"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Stati Uniti"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("Ugaritico"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Città del Vaticano"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent e Grenadine"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Isole Vergini (GB)"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Isole Vergini (USA)"_s)
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
			$of("Discorso visibile"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis e Futuna"_s)
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
			$of("Persiano antico"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("Cuneiforme sumero-accadico"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotta"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Sudafrica"_s)
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
			$of("Zinh"_s),
			$of("Script ereditato"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Notazione matematica"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Simboli"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Non scritto"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Script indeterminato"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Script non codificato"_s)
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
			$of("abhaso"_s)
		}),
		$$new($ObjectArray, {
			$of("abk"_s),
			$of("Abkhaso"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Accinese"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acioli"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("avestano"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of("Lingua afroasiatica"_s)
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
			$of("Ainu"_s)
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
			$of("Accado"_s)
		}),
		$$new($ObjectArray, {
			$of("alb"_s),
			$of("Albanese"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleuto"_s)
		}),
		$$new($ObjectArray, {
			$of("alg"_s),
			$of("Lingue algonchine"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("Altai del sud"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amarico"_s)
		}),
		$$new($ObjectArray, {
			$of("amh"_s),
			$of("Amarico"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonese"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Inglese antico (dal 450 al 1100 c.a.)"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("apa"_s),
			$of("Lingue apache"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabo"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Arabo"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Aramaico ufficiale (dal 700 al 300 AC)"_s)
		}),
		$$new($ObjectArray, {
			$of("arg"_s),
			$of("Aragonese"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of("Armeno"_s)
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
			$of("Lingua artificiale"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Aruaco"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assamese"_s)
		}),
		$$new($ObjectArray, {
			$of("asm"_s),
			$of("Assamese"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Asturiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ath"_s),
			$of("Lingue Athapascan"_s)
		}),
		$$new($ObjectArray, {
			$of("aus"_s),
			$of("Australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avarico"_s)
		}),
		$$new($ObjectArray, {
			$of("ava"_s),
			$of("Avaro"_s)
		}),
		$$new($ObjectArray, {
			$of("ave"_s),
			$of("Avestano"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aymará"_s)
		}),
		$$new($ObjectArray, {
			$of("aym"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azero"_s)
		}),
		$$new($ObjectArray, {
			$of("aze"_s),
			$of("Azero"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baschiro"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("Banda"_s)
		}),
		$$new($ObjectArray, {
			$of("bai"_s),
			$of("Lingue bamileke"_s)
		}),
		$$new($ObjectArray, {
			$of("bak"_s),
			$of("Baschiro"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Beluci"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("Balinese"_s)
		}),
		$$new($ObjectArray, {
			$of("baq"_s),
			$of("Basco"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bat"_s),
			$of("Lingua baltica"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bielorusso"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Begia"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Bielorusso"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Wemba"_s)
		}),
		$$new($ObjectArray, {
			$of("ben"_s),
			$of("Bengalese"_s)
		}),
		$$new($ObjectArray, {
			$of("ber"_s),
			$of("Berbero"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgaro"_s)
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
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bih"_s),
			$of("Bihari"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("Bicol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("bis"_s),
			$of("Bislama"_s)
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
			$of("bengalese"_s)
		}),
		$$new($ObjectArray, {
			$of("bnt"_s),
			$of("Bantu"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetano"_s)
		}),
		$$new($ObjectArray, {
			$of("bos"_s),
			$of("Bosniaco"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretone"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of("Bretone"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniaco"_s)
		}),
		$$new($ObjectArray, {
			$of("btk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Buginese"_s)
		}),
		$$new($ObjectArray, {
			$of("bul"_s),
			$of("Bulgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bur"_s),
			$of("Birmano"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("catalano"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("cai"_s),
			$of("Lingua indiana dell\'America centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Caribe (Galibi)"_s)
		}),
		$$new($ObjectArray, {
			$of("cat"_s),
			$of("Catalano"_s)
		}),
		$$new($ObjectArray, {
			$of("cau"_s),
			$of("Lingua caucasica"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("ceceno"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("cel"_s),
			$of("Lingua celtica"_s)
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
			$of("Ceceno"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Chagataico"_s)
		}),
		$$new($ObjectArray, {
			$of("chi"_s),
			$of("Cinese"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Chuukese"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("Gergo chinook"_s)
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
			$of("Slavo ecclesiastico"_s)
		}),
		$$new($ObjectArray, {
			$of("chv"_s),
			$of("Chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("cmc"_s),
			$of("Lingue chamic"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("corso"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Copto"_s)
		}),
		$$new($ObjectArray, {
			$of("cor"_s),
			$of("Cornico"_s)
		}),
		$$new($ObjectArray, {
			$of("cos"_s),
			$of("Corso"_s)
		}),
		$$new($ObjectArray, {
			$of("cpe"_s),
			$of("Creolo e pidgin basato sull\'inglese"_s)
		}),
		$$new($ObjectArray, {
			$of("cpf"_s),
			$of("Creolo e pidgin basato sul francese"_s)
		}),
		$$new($ObjectArray, {
			$of("cpp"_s),
			$of("Creolo e pidgin basato sul portoghese"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cre"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Turco crimeo"_s)
		}),
		$$new($ObjectArray, {
			$of("crp"_s),
			$of("Creolo e pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("ceco"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kashubian"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("slavo ecclesiastico"_s)
		}),
		$$new($ObjectArray, {
			$of("cus"_s),
			$of("Lingua cuscitica"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("gallese"_s)
		}),
		$$new($ObjectArray, {
			$of("cze"_s),
			$of("Ceco"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danese"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("dan"_s),
			$of("Danese"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("day"_s),
			$of("Land Dayak"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("tedesco"_s)
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
			$of("Dinca"_s)
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
			$of("Lingua dravidica"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Basso sorabo"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("Olandese medio (dal 1050 al 1350 c.a.)"_s)
		}),
		$$new($ObjectArray, {
			$of("dut"_s),
			$of("Olandese"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Diula"_s)
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
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("Egiziano antico"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuka"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("greco"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamitico"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("inglese"_s)
		}),
		$$new($ObjectArray, {
			$of("eng"_s),
			$of("Inglese"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Inglese medio (dal 1100 al 1500)"_s)
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
			$of("spagnolo"_s)
		}),
		$$new($ObjectArray, {
			$of("est"_s),
			$of("Estone"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estone"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basco"_s)
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
			$of("persiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fao"_s),
			$of("Faroese"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finlandese"_s)
		}),
		$$new($ObjectArray, {
			$of("fij"_s),
			$of("Figiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filippino"_s)
		}),
		$$new($ObjectArray, {
			$of("fin"_s),
			$of("Finlandese"_s)
		}),
		$$new($ObjectArray, {
			$of("fiu"_s),
			$of("Lingua ungrofinnica"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("figiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("faeroese"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("francese"_s)
		}),
		$$new($ObjectArray, {
			$of("fre"_s),
			$of("Francese"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("Francese medio (dal 1400 al 1600 c.a.)"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("Francese antico (dal 842 al 1400 c.a.)"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Frisone settentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Frisone orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("fry"_s),
			$of("Frisone occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("ful"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friulano"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("frisone"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irlandese"_s)
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
			$of("gaelico scozzese"_s)
		}),
		$$new($ObjectArray, {
			$of("gem"_s),
			$of("Lingua germanica"_s)
		}),
		$$new($ObjectArray, {
			$of("geo"_s),
			$of("Georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ger"_s),
			$of("Tedesco"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertese"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galiziano"_s)
		}),
		$$new($ObjectArray, {
			$of("gla"_s),
			$of("Gaelico"_s)
		}),
		$$new($ObjectArray, {
			$of("gle"_s),
			$of("Irlandese"_s)
		}),
		$$new($ObjectArray, {
			$of("glg"_s),
			$of("Galiziano"_s)
		}),
		$$new($ObjectArray, {
			$of("glv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("Tedesco medio alto (dal 1050 al 1500 c.a.)"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guaranì"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("Tedesco antico alto (dal 750 al 1050 c.a.)"_s)
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
			$of("Gotico"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Greco antico (fino al 1453)"_s)
		}),
		$$new($ObjectArray, {
			$of("gre"_s),
			$of("Greco moderno (dal 1453)"_s)
		}),
		$$new($ObjectArray, {
			$of("grn"_s),
			$of(u"Guaranì"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Tedesco svizzero"_s)
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
			$of("manx"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("Gwich\'in"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("haussa"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
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
			$of("Hawaiano"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("ebraico"_s)
		}),
		$$new($ObjectArray, {
			$of("heb"_s),
			$of("Ebraico"_s)
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
			$of("croato"_s)
		}),
		$$new($ObjectArray, {
			$of("hrv"_s),
			$of("Croato"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Alto sorabo"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("ungherese"_s)
		}),
		$$new($ObjectArray, {
			$of("hun"_s),
			$of("Ungherese"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armeno"_s)
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
			$of("Islandese"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonesiano"_s)
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
			$of("Sichuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("ijo"_s),
			$of("Ijo"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
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
			$of("Ilocano"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of("indonesiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ina"_s),
			$of("Interlingua (Associazione internazionale per la lingua ausiliaria)"_s)
		}),
		$$new($ObjectArray, {
			$of("inc"_s),
			$of("Lingua indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("ind"_s),
			$of("Indonesiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ine"_s),
			$of("Lingua indoeuropea"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Ingush"_s)
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
			$of("Iraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("iro"_s),
			$of("Lingue irochesi"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandese"_s)
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
			$of("ebraico"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("giapponese"_s)
		}),
		$$new($ObjectArray, {
			$of("jav"_s),
			$of("Giavanese"_s)
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
			$of("Giapponese"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("Giudeo persiano"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("Giudeo arabo"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("giavanese"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Kara-Kalpak"_s)
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
			$of("Kalaallisut"_s)
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
			$of("Kazako"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardia"_s)
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
			$of("Lingua khoisan"_s)
		}),
		$$new($ObjectArray, {
			$of("khm"_s),
			$of("Khmer centrale"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Khotanese"_s)
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
			$of("Kirghiso"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kwanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazako"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("groenlandese"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("cambogiano (khmer)"_s)
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
			$of("coreano"_s)
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
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("kor"_s),
			$of("Coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosraean"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karachay-Balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Careliano"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of("Kru"_s)
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
			$of("curdo"_s)
		}),
		$$new($ObjectArray, {
			$of("kua"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("kur"_s),
			$of("Curdo"_s)
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
			$of("cornico"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirghiso"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latino"_s)
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
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("lat"_s),
			$of("Latino"_s)
		}),
		$$new($ObjectArray, {
			$of("lav"_s),
			$of("Lettone"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("lussemburghese"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lezghian"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburghese"_s)
		}),
		$$new($ObjectArray, {
			$of("lim"_s),
			$of("Limburgese"_s)
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
			$of("lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("ltz"_s),
			$of("Lussemburghese"_s)
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
			$of("Luo (Kenya e Tanzania)"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("lettone"_s)
		}),
		$$new($ObjectArray, {
			$of("mac"_s),
			$of("Macedone"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Madurese"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mah"_s),
			$of("Marshallese"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("mal"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("mao"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("map"_s),
			$of("Austronesiano"_s)
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
			$of("Malese"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgascio"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Irlandese medio (dal 900 al 1200)"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshallese"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Mi\'kmaq"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("mis"_s),
			$of("Lingue non codificate"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("macedone"_s)
		}),
		$$new($ObjectArray, {
			$of("mkh"_s),
			$of("Lingua mon-khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mlg"_s),
			$of("Malgascio"_s)
		}),
		$$new($ObjectArray, {
			$of("mlt"_s),
			$of("Maltese"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongolo"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("Manchu"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("mno"_s),
			$of("Manobo"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of("moldavo"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("mon"_s),
			$of("Mongolo"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malese"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltese"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Multilingua"_s)
		}),
		$$new($ObjectArray, {
			$of("mun"_s),
			$of("Lingua munda"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Creek"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandese"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birmano"_s)
		}),
		$$new($ObjectArray, {
			$of("myn"_s),
			$of("Lingue maya"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruano"_s)
		}),
		$$new($ObjectArray, {
			$of("nah"_s),
			$of("Nahuatl"_s)
		}),
		$$new($ObjectArray, {
			$of("nai"_s),
			$of("Lingua indiana del Nord America"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Napoletano"_s)
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
			$of(u"norvegese bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nbl"_s),
			$of("Ndebele del sud"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele settentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("nde"_s),
			$of("Ndebele del nord"_s)
		}),
		$$new($ObjectArray, {
			$of("ndo"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Basso tedesco"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalese"_s)
		}),
		$$new($ObjectArray, {
			$of("nep"_s),
			$of("Nepalese"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Nepal Bhasa"_s)
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
			$of("Lingua niger-cordofan"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("neerlandese"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("norvegese nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("nno"_s),
			$of("Norvegese nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norvegese"_s)
		}),
		$$new($ObjectArray, {
			$of("nob"_s),
			$of(u"Norvegese bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("Nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("Norse antico"_s)
		}),
		$$new($ObjectArray, {
			$of("nor"_s),
			$of("Norvegese"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("N\'Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele meridionale"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Pedi"_s)
		}),
		$$new($ObjectArray, {
			$of("nub"_s),
			$of("Nubiano"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Newari classico"_s)
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
			$of("Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("occitano"_s)
		}),
		$$new($ObjectArray, {
			$of("oci"_s),
			$of("Occitano (dopo il 1500)"_s)
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
			$of("oromo (afan)"_s)
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
			$of("ossetiano"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("Osage"_s)
		}),
		$$new($ObjectArray, {
			$of("oss"_s),
			$of("Ossetico"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("Turco, ottomano (1500-1928)"_s)
		}),
		$$new($ObjectArray, {
			$of("oto"_s),
			$of("Lingue otomi"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("paa"_s),
			$of("Lingua papuana"_s)
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
			$of("Pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("pan"_s),
			$of("Punjabi"_s)
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
			$of("Persiano antico (dal 600 al 400 AC)"_s)
		}),
		$$new($ObjectArray, {
			$of("per"_s),
			$of("Persiano"_s)
		}),
		$$new($ObjectArray, {
			$of("phi"_s),
			$of("Lingua filippina"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("Fenicio"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polacco"_s)
		}),
		$$new($ObjectArray, {
			$of("pli"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pol"_s),
			$of("Polacco"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Pohnpeiano"_s)
		}),
		$$new($ObjectArray, {
			$of("por"_s),
			$of("Portoghese"_s)
		}),
		$$new($ObjectArray, {
			$of("pra"_s),
			$of("Pracrito"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("Provenzale antico (fino al 1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portoghese"_s)
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
			$of("Rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("Rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotonga"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("retoromanzo"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumeno"_s)
		}),
		$$new($ObjectArray, {
			$of("roa"_s),
			$of("Lingua romanza"_s)
		}),
		$$new($ObjectArray, {
			$of("roh"_s),
			$of("Romancio"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romani"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("russo"_s)
		}),
		$$new($ObjectArray, {
			$of("rum"_s),
			$of("Romeno"_s)
		}),
		$$new($ObjectArray, {
			$of("run"_s),
			$of("Kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromaniano"_s)
		}),
		$$new($ObjectArray, {
			$of("rus"_s),
			$of("Russo"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanscrito"_s)
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
			$of("Yakut"_s)
		}),
		$$new($ObjectArray, {
			$of("sai"_s),
			$of("Lingua indiana del Sud America"_s)
		}),
		$$new($ObjectArray, {
			$of("sal"_s),
			$of("Lingue salish"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Aramaico samaritano"_s)
		}),
		$$new($ObjectArray, {
			$of("san"_s),
			$of("Sanscrito"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("Sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardo"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Siciliano"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Scozzese"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("sami settentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("sem"_s),
			$of("Lingua semitica"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sangho"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Irlandese antico (fino al 900)"_s)
		}),
		$$new($ObjectArray, {
			$of("sgn"_s),
			$of("Lingua dei segni"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("singalese"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("sin"_s),
			$of("Singalese"_s)
		}),
		$$new($ObjectArray, {
			$of("sio"_s),
			$of("Lingue sioux"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Lingua sino-tibetana"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovacco"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("sloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("sla"_s),
			$of("Lingua slava"_s)
		}),
		$$new($ObjectArray, {
			$of("slo"_s),
			$of("Slovacco"_s)
		}),
		$$new($ObjectArray, {
			$of("slv"_s),
			$of("Sloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Sami del sud"_s)
		}),
		$$new($ObjectArray, {
			$of("sme"_s),
			$of("Sami del nord"_s)
		}),
		$$new($ObjectArray, {
			$of("smi"_s),
			$of("Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Sami lule"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Sami inari"_s)
		}),
		$$new($ObjectArray, {
			$of("smo"_s),
			$of("Samoano"_s)
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
			$of("Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somalo"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("som"_s),
			$of("Somalo"_s)
		}),
		$$new($ObjectArray, {
			$of("son"_s),
			$of("Songhai"_s)
		}),
		$$new($ObjectArray, {
			$of("sot"_s),
			$of("Sotho del sud"_s)
		}),
		$$new($ObjectArray, {
			$of("spa"_s),
			$of("Spagnolo"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanese"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbo"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Sardo"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Sranan Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("srp"_s),
			$of("Serbo"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("Serer"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("siswati"_s)
		}),
		$$new($ObjectArray, {
			$of("ssa"_s),
			$of("Lingua nilo-sahariana"_s)
		}),
		$$new($ObjectArray, {
			$of("ssw"_s),
			$of("Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sudanese"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sun"_s),
			$of("Sundanese"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("Sumero"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("svedese"_s)
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
			$of("Svedese"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("Siriaco classico"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Siriaco"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("tah"_s),
			$of("Taitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("tai"_s),
			$of("Tai"_s)
		}),
		$$new($ObjectArray, {
			$of("tam"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("tat"_s),
			$of("Tataro"_s)
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
			$of("tagiko"_s)
		}),
		$$new($ObjectArray, {
			$of("tgk"_s),
			$of("Tagiko"_s)
		}),
		$$new($ObjectArray, {
			$of("tgl"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("thai"_s)
		}),
		$$new($ObjectArray, {
			$of("tha"_s),
			$of("Tailandese"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("tib"_s),
			$of("Tibetano"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("tir"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmeno"_s)
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
			$of("Tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongano"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("Tonga (Nyasa)"_s)
		}),
		$$new($ObjectArray, {
			$of("ton"_s),
			$of("Tonga (Isole Tonga)"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok pisin"_s)
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
			$of("tataro"_s)
		}),
		$$new($ObjectArray, {
			$of("tuk"_s),
			$of("Turkmeno"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("tup"_s),
			$of("Lingue tupi"_s)
		}),
		$$new($ObjectArray, {
			$of("tur"_s),
			$of("Turco"_s)
		}),
		$$new($ObjectArray, {
			$of("tut"_s),
			$of("Lingua altaica"_s)
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
			$of("tahitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuvinian"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uiguro"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("Ugaritico"_s)
		}),
		$$new($ObjectArray, {
			$of("uig"_s),
			$of("Uiguro"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ucraino"_s)
		}),
		$$new($ObjectArray, {
			$of("ukr"_s),
			$of("Ucraino"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Lingua imprecisata"_s)
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
			$of("Uzbeko"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Vai"_s)
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
			$of("Vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("vol"_s),
			$of("Volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Voto"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("vallone"_s)
		}),
		$$new($ObjectArray, {
			$of("wak"_s),
			$of("Lingue wakash"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Walamo"_s)
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
			$of("Gallese"_s)
		}),
		$$new($ObjectArray, {
			$of("wen"_s),
			$of("Sorabo"_s)
		}),
		$$new($ObjectArray, {
			$of("wln"_s),
			$of("Vallone"_s)
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
			$of("Kalmyk"_s)
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
			$of("Yapese"_s)
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
			$of("Lingue Yupik"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotec"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("Simboli bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("cinese"_s)
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
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("zul"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Nessun contenuto linguistico"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zazaki"_s)
		})
	});
}

LocaleNames_it::LocaleNames_it() {
}

$Class* LocaleNames_it::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_it, name, initialize, &_LocaleNames_it_ClassInfo_, allocate$LocaleNames_it);
	return class$;
}

$Class* LocaleNames_it::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun