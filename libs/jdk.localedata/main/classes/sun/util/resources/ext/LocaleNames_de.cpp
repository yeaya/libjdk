#include <sun/util/resources/ext/LocaleNames_de.h>

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

$MethodInfo _LocaleNames_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_de, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_de, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_de",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_de_MethodInfo_
};

$Object* allocate$LocaleNames_de($Class* clazz) {
	return $of($alloc(LocaleNames_de));
}

void LocaleNames_de::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_de::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Welt"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Nordamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Südamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Ozeanien"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Westafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Mittelamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Ostafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Nordafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Zentralafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Südafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Nördliches Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibik"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Ostasien"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Südasien"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Südostasien"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Südeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australien und Neuseeland"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesien"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesisches Inselgebiet"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesien"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asien"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Zentralasien"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Westasien"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Osteuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Nordeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Westeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Lateinamerika und Karibik"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Vereinigte Arabische Emirate"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua und Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanien"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenien"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"Niederländische Antillen"_s)
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
			$of("Argentinien"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikanisch-Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Österreich"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australien"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Aaland-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Aserbaidschan"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("Armi"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("Armenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("Avestisch "_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnien und Herzegowina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesch"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgien"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarien"_s)
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
			$of("Bolivien"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasilien"_s)
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
			$of("Bouvet-Insel"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsuana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("Balinesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Bassa VHA"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Battakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("Bengalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of("Bliss-Symbole"_s)
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
			$of("Blindenschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("Buginesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokos-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Demokratische Republik Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Zentralafrikanische Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Schweiz"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Elfenbeinküste"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cook-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbien"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of("Serbien und Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Weihnachtsinsel"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Zypern"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Tschechische Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("Cakm"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("UCAS"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Karisch"_s)
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
			$of("Koptisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Zypriotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Kyrillisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("Altkirchenslawisch"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Deutschland"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Dschibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Dänemark"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikanische Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algerien"_s)
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
			$of("Duployan Shorthand"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estland"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Ägypten"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Westsahara"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanien"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Äthiopien"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"Ägyptisch - Demotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Ägyptisch - Hieratisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Ägyptische Hieroglyphen"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Äthiopisch"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finnland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fidschi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falkland-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesien"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Färöer-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankreich"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabun"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Vereinigtes Königreich"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgien"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Französisch-Guayana"_s)
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
			$of(u"Grönland"_s)
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
			$of(u"Äquatorial-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Griechenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Süd-Georgia und die südlichen Sandwich-Inseln"_s)
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
			$of("Khutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("Georgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("Gotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("Griechisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("Gujaratisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard- und McDonald-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatien"_s)
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
			$of("Hang"_s),
			$of("Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Chinesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Vereinfachte Chinesische Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Traditionelle Chinesische Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"Hebräisch"_s)
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
			$of("Katakana oder Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Altungarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesien"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irland"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indien"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britische Territorien im Indischen Ozean"_s)
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
			$of("Italien"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("Indus-Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Altitalienisch"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordanien"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("Javanesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("Japanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodscha"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoren"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts und Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Nordkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Südkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kaiman-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasachstan"_s)
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
			$of("Kambodschanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("Koreanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of("Kpelle-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("Kthi"_s)
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
			$of("LC"_s),
			$of("St. Lucia"_s)
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
			$of("Litauen"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettland"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libyen"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Laotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Lateinisch - Fraktur-Variante"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"Lateinisch - Gälische Variante"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Lateinisch"_s)
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
			$of("Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Linear B"_s)
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
			$of("Lykisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydisch"_s)
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
			$of("Moldau"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshall-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Mazedonien"_s)
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
			$of("Mongolei"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Nördliche Mariannen-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauretanien"_s)
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
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldiven"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexiko"_s)
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
			$of("Mand"_s),
			$of(u"Mandäisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"Manichänisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("Maya-Hieroglyphen"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("Mende-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("Meroitisch, kursiv"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Malaysisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("Mongolisch"_s)
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
			$of("Birmanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Neukaledonien"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk-Insel"_s)
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
			$of("Niederlande"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwegen"_s)
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
			$of("Neuseeland"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Altes Nordarabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"Nabatäisch"_s)
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
			$of("Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orchon-Runen"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("Orija"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("Osmanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Französisch-Polynesien"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Neuguinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Philippinen"_s)
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
			$of("PM"_s),
			$of("St. Pierre und Miquelon"_s)
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
			$of(u"Palästina"_s)
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
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmyrenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Altpermisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Phli"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Phlp"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"Phönizisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollard Phonetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Prti"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rumänien"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbien"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russland"_s)
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
			$of("Runenschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi-Arabien"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Solomon-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellen"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Schweden"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slowenien"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard und Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slowakei"_s)
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
			$of("Sao Tome und Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syrien"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swasiland"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("Samaritanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"Altsüdarabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"Gebärdensprache"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shaw-Alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Zinti-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("Sundanesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("Syrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("Syrisch - Estrangelo-Variante"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("Westsyrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("Ostsyrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks- und Caicos-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tschad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Französische Südgebiete"_s)
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
			$of("Tadschikistan"_s)
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
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunesien"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Türkei"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad und Tobago"_s)
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
			$of("Tansania"_s)
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
			$of("Tai Lue"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Tsongaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tavt"_s)
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
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("Tibetanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Übrige Inseln im Pazifik der USA"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Vereinigte Staaten von Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Usbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("Ugaritisch"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikanstadt"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St. Vincent und die Grenadinen"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Britische Jungferninseln"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Amerikanische Jungferninseln"_s)
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
			$of("Vai-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("Sichtbare Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis und Futuna"_s)
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
			$of("Altpersisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("Sumerisch-akkadische Keilschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
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
			$of(u"Südafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Sambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("Geerbter Schriftwert"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Zmth"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Zsym"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Schriftlos"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Unbestimmt"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Uncodierte Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("aar"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abchasisch"_s)
		}),
		$$new($ObjectArray, {
			$of("abk"_s),
			$of("Abchasisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Aceh-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acholi-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adygeisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("Avestisch"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of("Afro-Asiatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("Afrihili "_s)
		}),
		$$new($ObjectArray, {
			$of("afr"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Ainu-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("aka"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("Akkadisch"_s)
		}),
		$$new($ObjectArray, {
			$of("alb"_s),
			$of("Albanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleutisch"_s)
		}),
		$$new($ObjectArray, {
			$of("alg"_s),
			$of("Algonkin-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"Süd-Altaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharisch"_s)
		}),
		$$new($ObjectArray, {
			$of("amh"_s),
			$of("Amharisch"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Altenglisch"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("apa"_s),
			$of("Apache-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"Aramäisch"_s)
		}),
		$$new($ObjectArray, {
			$of("arg"_s),
			$of("Aragonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of("Armenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("Araukanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("art"_s),
			$of("Kunstsprache"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawak-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assamesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("asm"_s),
			$of("Assamesisch "_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Asturianisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ath"_s),
			$of("Athapaskisch"_s)
		}),
		$$new($ObjectArray, {
			$of("aus"_s),
			$of("Australisch"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ava"_s),
			$of("Avarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ave"_s),
			$of("Avestisch "_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("aym"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Aserbaidschanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("aze"_s),
			$of("Aserbaidschanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Baschkirisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("Banda"_s)
		}),
		$$new($ObjectArray, {
			$of("bai"_s),
			$of("Bamileke-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("bak"_s),
			$of("Baschkirisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Belutschisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("Balinesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("baq"_s),
			$of("Baskisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basaa-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("bat"_s),
			$of("Baltisch"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belorussisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Bedauye"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Belorussisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ben"_s),
			$of("Bengalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ber"_s),
			$of("Berber-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of("Biharisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bodschpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislamisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bih"_s),
			$of("Biharisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("Bikol-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Bini-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("bis"_s),
			$of("Bislamisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Blackfoot-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bnt"_s),
			$of("Bantu-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibetanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bos"_s),
			$of("Bosnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Bretonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj-Bhakha"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of("Bretonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("btk"_s),
			$of("Battakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Burjatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Buginesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bul"_s),
			$of("Bulgarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bur"_s),
			$of("Burmesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("cai"_s),
			$of("Zentralamerikanische Indianersprache"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Karibisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cat"_s),
			$of("Katalanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cau"_s),
			$of("Kaukasisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("cel"_s),
			$of("Keltisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("cha"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("Chibcha-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("Tschetschenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Tschagataisch"_s)
		}),
		$$new($ObjectArray, {
			$of("chi"_s),
			$of("Chinesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Trukesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Tscheremissisch"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("Chinook"_s)
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
			$of("Kirchenslawisch"_s)
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
			$of("Cham-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Koptisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cor"_s),
			$of("Cornish"_s)
		}),
		$$new($ObjectArray, {
			$of("cos"_s),
			$of("Korsisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cpe"_s),
			$of("Kreolisch-Englische Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("cpf"_s),
			$of(u"Kreolisch-Französische Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("cpp"_s),
			$of("Kreolisch-Portugiesische Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cre"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Krimtatarisch "_s)
		}),
		$$new($ObjectArray, {
			$of("crp"_s),
			$of("Kreolische Sprache "_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Tschechisch"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kaschubisch "_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Church Slavic"_s)
		}),
		$$new($ObjectArray, {
			$of("cus"_s),
			$of("Kuschitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Walisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cze"_s),
			$of("Tschechisch"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Dänisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakota-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("dan"_s),
			$of(u"Dänisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Darginisch"_s)
		}),
		$$new($ObjectArray, {
			$of("day"_s),
			$of("Dajak"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Deutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delaware-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slave"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Dinka-Sprache"_s)
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
			$of("Drawidisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Niedersorbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Mittelniederländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dut"_s),
			$of(u"Niederländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Dyula-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Bhutani"_s)
		}),
		$$new($ObjectArray, {
			$of("dzo"_s),
			$of("Bhutani"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"Ägyptisch"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Griechisch"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamisch"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Englisch"_s)
		}),
		$$new($ObjectArray, {
			$of("eng"_s),
			$of("Englisch"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Mittelenglisch"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("epo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("est"_s),
			$of("Estnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Baskisch"_s)
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
			$of("Persisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Pangwe-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("fao"_s),
			$of(u"Färöisch "_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Finnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fij"_s),
			$of("Fidschi"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Philippinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fin"_s),
			$of("Finnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fiu"_s),
			$of("Finnougrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fidschi"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Faröisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Französisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fre"_s),
			$of(u"Französisch"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Mittelfranzösisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"Altfranzösisch"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Nordfriesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Ostfriesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fry"_s),
			$of("Westfriesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ful"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friulisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Friesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Irisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Ga-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("Gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Schottisches Gälisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gem"_s),
			$of("Germanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("geo"_s),
			$of("Georgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ger"_s),
			$of("Deutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galizisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gla"_s),
			$of(u"Gälisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gle"_s),
			$of("Irisch"_s)
		}),
		$$new($ObjectArray, {
			$of("glg"_s),
			$of("Galizisch"_s)
		}),
		$$new($ObjectArray, {
			$of("glv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("Mittelhochdeutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("Althochdeutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("Gondi-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Mongondou"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("Gotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Altgriechisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gre"_s),
			$of("Modernes Griechisch (1453-)"_s)
		}),
		$$new($ObjectArray, {
			$of("grn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Schweizerdeutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("Gujaratisch"_s)
		}),
		$$new($ObjectArray, {
			$of("guj"_s),
			$of("Gujaratisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("Kutchin-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Haussa"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("hat"_s),
			$of("Haitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hau"_s),
			$of("Haussa"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiisch"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"Hebräisch"_s)
		}),
		$$new($ObjectArray, {
			$of("heb"_s),
			$of(u"Hebräisch"_s)
		}),
		$$new($ObjectArray, {
			$of("her"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon-Sprache"_s)
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
			$of("Hethitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Miao-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("hmo"_s),
			$of("Hiri Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("Hiri Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kroatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hrv"_s),
			$of("Kroatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Obersorbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Ungarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hun"_s),
			$of("Ungarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Armenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Interlingua"_s)
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
			$of(u"Isländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ido"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Sichuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("iii"_s),
			$of("Sichuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("ijo"_s),
			$of("Ijo-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupiak"_s)
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
			$of("Ilokano-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of("Indonesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ina"_s),
			$of("Interlingua (Internationale Hilfssprache, Vereinigung)"_s)
		}),
		$$new($ObjectArray, {
			$of("inc"_s),
			$of("Indoarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ind"_s),
			$of("Indonesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ine"_s),
			$of("Indogermanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Inguschisch"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("ipk"_s),
			$of("Inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("ira"_s),
			$of("Iranische Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("iro"_s),
			$of("Irokesische Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Isländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italienisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ita"_s),
			$of("Italienisch"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"Hebräisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Japanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("jav"_s),
			$of("Javanesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of("Jiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("jpn"_s),
			$of("Japanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"Jüdisch-Persisch"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"Jüdisch-Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Javanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("Georgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Karakalpakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabylisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("Kachin-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("kal"_s),
			$of(u"Kalaallisut (Grönländisch)"_s)
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
			$of("Karenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kas"_s),
			$of("Kaschmirisch"_s)
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
			$of("Kasachisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardinisch "_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("khi"_s),
			$of("Khoisan-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("khm"_s),
			$of("Khmerisch, Zentral"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Sakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu"_s)
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
			$of("Kirgisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kwanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kasachisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Grönländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Kambodschanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Koreanisch"_s)
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
			$of("Koreanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosraeanisch "_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kpelle-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karatschaiisch-Balkarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Karelisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of("Kru-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Oraon-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kaschmirisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurdisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kua"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Kumykisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kur"_s),
			$of("Kurdisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("Kutenai-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Cornish"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirgisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Lateinisch"_s)
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
			$of("Lamba-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("lao"_s),
			$of("Laotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lat"_s),
			$of("Lateinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lav"_s),
			$of("Lettisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Letzeburgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lesgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lim"_s),
			$of("Limburgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lin"_s),
			$of("Lingalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lit"_s),
			$of("Litauisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Laotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Rotse-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Litauisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ltz"_s),
			$of("Luxemburgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
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
			$of("Luiseno-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lunda-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Lushai-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Lettisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mac"_s),
			$of("Mazedonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Maduresisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Khotta"_s)
		}),
		$$new($ObjectArray, {
			$of("mah"_s),
			$of("Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makassarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mal"_s),
			$of("Malaysisch"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Manding-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("mao"_s),
			$of("Maorisch"_s)
		}),
		$$new($ObjectArray, {
			$of("map"_s),
			$of("Austronesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mar"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Massai-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("may"_s),
			$of("Malay"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandaresisch"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("Mende-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Mittelirisch (900-1200)"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maorisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Micmac-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Minangkabau-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("mis"_s),
			$of("(andere Sprache)"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Mazedonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mkh"_s),
			$of("Mon-Khmer-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malaysisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mlg"_s),
			$of("Malagasisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mlt"_s),
			$of("Maltesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Mongolisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("Mandschurisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Meithei-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("mno"_s),
			$of("Manobo-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of("Moldavisch"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohawk-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("mon"_s),
			$of("Mongolisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mossi-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malay"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Mehrsprachig"_s)
		}),
		$$new($ObjectArray, {
			$of("mun"_s),
			$of("Munda-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Muskogee-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Burmesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("myn"_s),
			$of("Maya-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Ersja-Mordwinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Nauruisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nah"_s),
			$of("Nahuatl"_s)
		}),
		$$new($ObjectArray, {
			$of("nai"_s),
			$of("Nordamerikanische Indianersprache"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Neapolitanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nau"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("nav"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norwegisch, Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nbl"_s),
			$of(u"Ndebele, Süd"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Nord-Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nde"_s),
			$of("Ndebele, Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("ndo"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Niederdeutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nep"_s),
			$of("Nepalesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newan"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Nias-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of("Cordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niue-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Niederländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Norwegisch, Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("nno"_s),
			$of("Norwegisch, Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Norwegisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nob"_s),
			$of("Bokmal, Norwegisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("Nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("Altnordisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nor"_s),
			$of("Norwegisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("N\'Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"Süd-Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Nord-Sotho-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("nub"_s),
			$of("Nubisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Alt-Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("nya"_s),
			$of("Chichewa"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("Nyamwezi-Sprache"_s)
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
			$of("Okzitanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("oci"_s),
			$of("Okzitanisch (nach 1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("oji"_s),
			$of("Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo (Afan)"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Orija"_s)
		}),
		$$new($ObjectArray, {
			$of("ori"_s),
			$of("Orija"_s)
		}),
		$$new($ObjectArray, {
			$of("orm"_s),
			$of("Oromo (Afan)"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("Osage-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("oss"_s),
			$of("Ossetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("Osmanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("oto"_s),
			$of("Otomangue-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Pundjabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("paa"_s),
			$of("Papuasprache"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Mittelpersisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampanggan-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("pan"_s),
			$of("Pundjabisch"_s)
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
			$of("Altpersisch"_s)
		}),
		$$new($ObjectArray, {
			$of("per"_s),
			$of("Persisch"_s)
		}),
		$$new($ObjectArray, {
			$of("phi"_s),
			$of("Philippinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"Phönikisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pli"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pol"_s),
			$of("Polnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Ponapeanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("por"_s),
			$of("Portugiesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pra"_s),
			$of("Prakrit"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("Altprovenzalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Paschtu (Pushto)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portugiesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pus"_s),
			$of("Paschtunisch"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
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
			$of("Osterinsel-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotonganisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Rätoromanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Kirundisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rumänisch"_s)
		}),
		$$new($ObjectArray, {
			$of("roa"_s),
			$of("Romanische Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("roh"_s),
			$of("Romantsch"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romani"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rum"_s),
			$of(u"Rumänisch"_s)
		}),
		$$new($ObjectArray, {
			$of("run"_s),
			$of("Kirundisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromunisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rus"_s),
			$of("Russisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandawe-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("sag"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Jakutisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sai"_s),
			$of(u"Südamerikanische Indianersprache"_s)
		}),
		$$new($ObjectArray, {
			$of("sal"_s),
			$of("Salish-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Samaritanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("san"_s),
			$of("Sanskrit"_s)
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
			$of("Sardisch"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sizilianisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Schottisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Zinti"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Nord-Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selkupisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sem"_s),
			$of("Semitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Altirisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sgn"_s),
			$of(u"Gebärdensprache"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Schan-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Singhalesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("sin"_s),
			$of("Singhalesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sio"_s),
			$of("Sioux-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slowakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Slowenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sla"_s),
			$of("Slawisch"_s)
		}),
		$$new($ObjectArray, {
			$of("slo"_s),
			$of("Slowakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("slv"_s),
			$of("Slowenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"Süd-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sme"_s),
			$of("Nord-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("smi"_s),
			$of("Lappisch"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lule-Lappisch"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inari-Lappisch"_s)
		}),
		$$new($ObjectArray, {
			$of("smo"_s),
			$of("Samoanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Skolt-Lappisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Schonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sna"_s),
			$of("Schonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("snd"_s),
			$of("Zinti-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninke-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdisch "_s)
		}),
		$$new($ObjectArray, {
			$of("som"_s),
			$of("Somalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("son"_s),
			$of("Songhai-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("sot"_s),
			$of(u"Süd-Sotho "_s)
		}),
		$$new($ObjectArray, {
			$of("spa"_s),
			$of("Spanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Sardisch"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Srananisch"_s)
		}),
		$$new($ObjectArray, {
			$of("srp"_s),
			$of("Serbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("Serer-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"Swasiländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ssa"_s),
			$of("Nilosaharanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ssw"_s),
			$of(u"Swasiländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Sesothisch"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Sudanesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("sun"_s),
			$of("Sundanesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("Sumerisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Schwedisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Suaheli"_s)
		}),
		$$new($ObjectArray, {
			$of("swa"_s),
			$of("Suaheli"_s)
		}),
		$$new($ObjectArray, {
			$of("swe"_s),
			$of("Schwedisch"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("Altsyrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Syrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamilisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tah"_s),
			$of("Tahitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tai"_s),
			$of("Tai-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("tam"_s),
			$of("Tsongaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tat"_s),
			$of("Tatarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Telugu"_s)
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
			$of("Tereno-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tadschikisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tgk"_s),
			$of("Tadschikisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tgl"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("tha"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("tib"_s),
			$of("Tibetanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("tir"_s),
			$of("Tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("Tokelauanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("Tlingit-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("Tamaseq"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Sezuan"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tongaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("Tsonga-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ton"_s),
			$of("Tonga (Tonga-Inseln)"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Neumelanesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Türkisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsongaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("Tsimshian-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("tsn"_s),
			$of("Sezuan"_s)
		}),
		$$new($ObjectArray, {
			$of("tso"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tuk"_s),
			$of("Turkmenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("tup"_s),
			$of("Tupi-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("tur"_s),
			$of(u"Türkisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tut"_s),
			$of("Altaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("Elliceanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("twi"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Tahitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuwinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmurtisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uigurisch"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("Ugaritisch"_s)
		}),
		$$new($ObjectArray, {
			$of("uig"_s),
			$of("Uigurisch"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukrainisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ukr"_s),
			$of("Ukrainisch"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Mbundu-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Unbestimmte Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("urd"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Usbekisch"_s)
		}),
		$$new($ObjectArray, {
			$of("uzb"_s),
			$of("Usbekisch"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Vai-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("ven"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("vie"_s),
			$of("Vietnamesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("vol"_s),
			$of(u"Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Wotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Wallonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("wak"_s),
			$of("Wakashanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Walamo-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("Washo-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("wel"_s),
			$of("Walisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("wen"_s),
			$of("Sorbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("wln"_s),
			$of("Wallonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("wol"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"Kalmückisch"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("xho"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("Yao-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("Yapesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Jiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("yid"_s),
			$of("Jiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Joruba"_s)
		}),
		$$new($ObjectArray, {
			$of("yor"_s),
			$of("Joruba"_s)
		}),
		$$new($ObjectArray, {
			$of("ypk"_s),
			$of("Yupik-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotekisch"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("Bliss-Symbole"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Chinesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("zha"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("znd"_s),
			$of("Zande-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("zul"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zuni-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Keine Sprachinhalte"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zaza"_s)
		})
	});
}

LocaleNames_de::LocaleNames_de() {
}

$Class* LocaleNames_de::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_de, name, initialize, &_LocaleNames_de_ClassInfo_, allocate$LocaleNames_de);
	return class$;
}

$Class* LocaleNames_de::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun