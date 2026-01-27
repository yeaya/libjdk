#include <sun/util/resources/ext/LocaleNames_sv.h>

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

$MethodInfo _LocaleNames_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_sv",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_sv_MethodInfo_
};

$Object* allocate$LocaleNames_sv($Class* clazz) {
	return $of($alloc(LocaleNames_sv));
}

void LocaleNames_sv::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Världen"_s)
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
			$of("Sydamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceanien"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Västafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Centralamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Östafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Nordafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Mellanafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Södra Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Nord-/Sydamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Norra Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Karibiska övärlden"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Östra Asien"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Södra Asien"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Sydöstra Asien"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Södra Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australien och Nya Zeeland"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesien"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesiska regionen"_s)
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
			$of("Centralasien"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Västra Asien"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Östra Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Norra Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Västra Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latinamerika och Karibien"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Förenade Arabemiraten"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua och Barbuda"_s)
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
			$of(u"Nederländska Antillerna "_s)
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
			$of("AS"_s),
			$of("Amerikanska Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Österrike"_s)
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
			$of(u"Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbadjan"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("Riksarameiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("Armeniska"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("Avestiska"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnien och Herzegovina"_s)
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
			$of("Bolivia"_s)
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
			$of(u"Bouvetön"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Vitryssland"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("Balinesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Bassa vah"_s)
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
			$of("Blissymboler"_s)
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
			$of("Braille-skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("Buginesiska"_s)
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
			$of(u"Cocosöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Demokratiska republiken Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Centralafrikanska republiken"_s)
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
			$of("Elfenbenskusten"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Cooköarna"_s)
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
			$of("Kina"_s)
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
			$of("Serbien och Montenegro"_s)
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
			$of(u"Julön"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cypern"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Tjeckiska republiken"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("Unified Canadian Aboriginal Syllabics"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Kariska"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("Cherokesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("Cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("Koptiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Cypriotiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Kyrilliska"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("Fornkyrkoslaviska"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Tyskland"_s)
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
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikanska republiken"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeriet"_s)
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
			$of("Duployan-stenografi"_s)
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
			$of("Egypten"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Västra Sahara"_s)
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
			$of("Etiopien"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("Egyptisk demotisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("Egyptisk hieratisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("Egyptiska hieroglyfer"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("Etiopiska"_s)
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
			$of(u"Falklandsöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesien"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Färöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankrike"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Storbritannien"_s)
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
			$of("Franska Guyana"_s)
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
			$of("Ekvatorialguinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grekland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Sydgeorgien och Sydsandwichöarna"_s)
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
			$of("Georgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("Gotiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("Grekiska"_s)
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
			$of("Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heardöch McDonaldöarna"_s)
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
			$of("Ungern"_s)
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
			$of(u"Förenklad han"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Traditionell han"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("Hebreiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Pahawh hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("Katakana eller hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Ungerska runor"_s)
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
			$of("Brittiska territoriet i Indiska Oceanen"_s)
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
			$of("Indusskrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Etruskiska"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
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
			$of("Javanesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("Japanska"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgisistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komorerna"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts och Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Nordkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Sydkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Caymanöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakstan"_s)
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
			$of("Kambodjanska (Khmer)"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("Koreanska"_s)
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
			$of("Libanon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
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
			$of("Tai tham"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Laotiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Frakturlatin"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("Gaelisk latin"_s)
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
			$of("Lykiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydiska"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marocko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavien"_s)
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
			$of(u"Marshallöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Makedonien"_s)
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
			$of("Mongoliet"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Nordmarianerna"_s)
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
			$of("Maldiverna"_s)
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
			$of(u"Moçambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("Mandeiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("Manikeiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("Mayaskrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("Meroitisk skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("Mongoliska"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"Månspråk"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Meitei mayek"_s)
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
			$of("Nya Kaledonien"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Norfolkön"_s)
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
			$of(u"Nederländerna"_s)
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
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nya Zeeland"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Nordlig fornarabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("Nabataeiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Nakhi geba"_s)
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
			$of("Ol chiki"_s)
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
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Franska Polynesien"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nya Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippinerna"_s)
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
			$of("Saint Pierre och Miquelon"_s)
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
			$of("Palmyreniska"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Fornpermiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Pahlavi (Medelpersiska)"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Psalter pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("Bok-pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of("Feniciska"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Miao"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Partiska"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
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
			$of("Ryssland"_s)
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
			$of("Runor"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudiarabien"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Salomonöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellerna"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Sverige"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenien"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard och Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakien"_s)
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
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé och Príncipe"_s)
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
			$of("Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("Samaritanska"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of("Sydlig fornarabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("Teckenskrift"_s)
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
			$of("Singalesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("Sundanesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("Syriska"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("Estrangelo-syriska"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"Västsyriska"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"Östsyriska"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Turks- och Caicosöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tchad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Franska södra territorierna"_s)
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
			$of("Tadzjikistan"_s)
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
			$of("Tunisien"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkiet"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad och Tobago"_s)
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
			$of("Tai le"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"Ny tai lü"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai viet"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("Telugo"_s)
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
			$of(u"Thailändska"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("Tibetanska"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Förenta staternas mindre öar i Oceanien och Västindien"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Amerikas Förenta Stater"_s)
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
			$of("Ugaritiska"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikanen"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent och Grenadinerna"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Brittiska Virgin Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Amerikanska Virgin Islands"_s)
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
			$of("Visible speech"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis och Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Varang kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("Fornpersiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("Sumerisk-akkadisk kilskrift"_s)
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
			$of("Sydafrika"_s)
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
			$of(u"Ärvd skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Matematisk notation"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Symboler"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Oskrivna"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"Inte fastställd skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Okodad skrift"_s)
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
			$of("abchasiska"_s)
		}),
		$$new($ObjectArray, {
			$of("abk"_s),
			$of("Abchasiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Acehnesiska"_s)
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
			$of("Adygeiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("Avestiska"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afroasiatiskt språk"_s)
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
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("aka"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("Akkadiska"_s)
		}),
		$$new($ObjectArray, {
			$of("alb"_s),
			$of("Albanska"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleutiska"_s)
		}),
		$$new($ObjectArray, {
			$of("alg"_s),
			$of("Algonkinska"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("Sydaltaiska"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amhariska"_s)
		}),
		$$new($ObjectArray, {
			$of("amh"_s),
			$of("Amhariska"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragoniska"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Fornengelska (ca.450-1100)"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("apa"_s),
			$of("Apache"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Arabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Officiell arameiska (700-300 f.Kr.)"_s)
		}),
		$$new($ObjectArray, {
			$of("arg"_s),
			$of("Aragonsk spanska"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of("Armeniska"_s)
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
			$of("Artificiellt"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawakiska"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assamesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("asm"_s),
			$of("Assamesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Asturiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ath"_s),
			$of("Athabaskiska"_s)
		}),
		$$new($ObjectArray, {
			$of("aus"_s),
			$of("Australiska"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avariska"_s)
		}),
		$$new($ObjectArray, {
			$of("ava"_s),
			$of(u"Avariskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("ave"_s),
			$of("Avestiska"_s)
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
			$of("azerbadjanska"_s)
		}),
		$$new($ObjectArray, {
			$of("aze"_s),
			$of("Azerbajdzjanska"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("Banda"_s)
		}),
		$$new($ObjectArray, {
			$of("bai"_s),
			$of("Bamileke"_s)
		}),
		$$new($ObjectArray, {
			$of("bak"_s),
			$of("Basjkiriska"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Baluchi"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("Balinesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("baq"_s),
			$of("Baskiska"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bat"_s),
			$of(u"Baltiskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("vitryska"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Beyja"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Vitryska"_s)
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
			$of(u"Berberspråk"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgariska"_s)
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
			$of("Bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("(Edo) Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("bis"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"Svartfotindianernas språk (Siksika)"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengaliska"_s)
		}),
		$$new($ObjectArray, {
			$of("bnt"_s),
			$of(u"Bantuspråk"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetanska"_s)
		}),
		$$new($ObjectArray, {
			$of("bos"_s),
			$of("Bosniska"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretagnska"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of("Bretonska"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosniska"_s)
		}),
		$$new($ObjectArray, {
			$of("btk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Burjatiska"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Buginesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("bul"_s),
			$of("Bulgariska"_s)
		}),
		$$new($ObjectArray, {
			$of("bur"_s),
			$of("Burmesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalan"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("cai"_s),
			$of(u"Centralamerikanskt indianspråk"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Galibi Carib"_s)
		}),
		$$new($ObjectArray, {
			$of("cat"_s),
			$of("Katalanska"_s)
		}),
		$$new($ObjectArray, {
			$of("cau"_s),
			$of(u"Kaukasiskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Tjetjenska"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("cel"_s),
			$of(u"Keltiskt språk"_s)
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
			$of("Chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("Tjetjenska"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("chi"_s),
			$of("Kinesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Truk"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mari (Tjeremissiska)"_s)
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
			$of("Chopi"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Cherokesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("chu"_s),
			$of("Kyrkoslaviska"_s)
		}),
		$$new($ObjectArray, {
			$of("chv"_s),
			$of("Tjuvasjiska"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("cmc"_s),
			$of("Chamic"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korsikanksa"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Koptiska"_s)
		}),
		$$new($ObjectArray, {
			$of("cor"_s),
			$of("Korniska"_s)
		}),
		$$new($ObjectArray, {
			$of("cos"_s),
			$of("Korsikanska"_s)
		}),
		$$new($ObjectArray, {
			$of("cpe"_s),
			$of(u"Kreol-/Pidginspråk, engelskbaserade"_s)
		}),
		$$new($ObjectArray, {
			$of("cpf"_s),
			$of(u"Kreol-/Pidginspråk, franskbaserade"_s)
		}),
		$$new($ObjectArray, {
			$of("cpp"_s),
			$of(u"Kreol-/Pidginspråk, portugisiskbaserade"_s)
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
			$of("Krimtatariska"_s)
		}),
		$$new($ObjectArray, {
			$of("crp"_s),
			$of(u"Kreol-/Pidginspråk"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("tjeckiska"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kashubiska"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Kyrkoslaviska"_s)
		}),
		$$new($ObjectArray, {
			$of("cus"_s),
			$of(u"Kusjitiskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Tjuvasjiska"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("walesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("cze"_s),
			$of("Tjeckiska"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danska"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("dan"_s),
			$of("Danska"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Darginska"_s)
		}),
		$$new($ObjectArray, {
			$of("day"_s),
			$of("Land Dayak"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("tyska"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slave (Athapaskiska)"_s)
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
			$of(u"Dravidiskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"Lågsorbiska"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Medelnederländska (ca.1050-1350)"_s)
		}),
		$$new($ObjectArray, {
			$of("dut"_s),
			$of(u"Nederländska"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("bhutanska"_s)
		}),
		$$new($ObjectArray, {
			$of("dzo"_s),
			$of("Bhutanesiska (Dzongkha)"_s)
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
			$of("Fornegyptiska"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("grekiska"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("engelska"_s)
		}),
		$$new($ObjectArray, {
			$of("eng"_s),
			$of("Engelska"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Medelengelska (1100-1500)"_s)
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
			$of("spanska"_s)
		}),
		$$new($ObjectArray, {
			$of("est"_s),
			$of("Estniska"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estniska"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskiska"_s)
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
			$of("persiska"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fao"_s),
			$of(u"Färöiska"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulani"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finska"_s)
		}),
		$$new($ObjectArray, {
			$of("fij"_s),
			$of("Fidjianska"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("fin"_s),
			$of("Finska"_s)
		}),
		$$new($ObjectArray, {
			$of("fiu"_s),
			$of(u"Finsk-ugriskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"färöiska"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("franska"_s)
		}),
		$$new($ObjectArray, {
			$of("fre"_s),
			$of("Franska"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("Medelfranska (ca.1400-1600)"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("Fornfranska (842-ca.1400)"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Nordfrisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"Östfrisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("fry"_s),
			$of(u"Västfrisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ful"_s),
			$of("Fulani"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friuliska"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("frisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irländska"_s)
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
			$of("skotsk gaeliska"_s)
		}),
		$$new($ObjectArray, {
			$of("gem"_s),
			$of("Germanska"_s)
		}),
		$$new($ObjectArray, {
			$of("geo"_s),
			$of("Georgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ger"_s),
			$of("Tyska"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galiciska"_s)
		}),
		$$new($ObjectArray, {
			$of("gla"_s),
			$of("Gaeliska"_s)
		}),
		$$new($ObjectArray, {
			$of("gle"_s),
			$of("Iriska"_s)
		}),
		$$new($ObjectArray, {
			$of("glg"_s),
			$of("Galiciska"_s)
		}),
		$$new($ObjectArray, {
			$of("glv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Medelhögtyska (ca.1050-1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"Fornhögtyska (ca.750-1050)"_s)
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
			$of("Gotiska"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Grekiska, klassisk (-1453)"_s)
		}),
		$$new($ObjectArray, {
			$of("gre"_s),
			$of("Nygrekiska (1453-)"_s)
		}),
		$$new($ObjectArray, {
			$of("grn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Schweizertyska"_s)
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
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("Gwichin"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("hat"_s),
			$of("Haitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("hau"_s),
			$of("Haussa"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiian"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebreiska"_s)
		}),
		$$new($ObjectArray, {
			$of("heb"_s),
			$of("Hebreiska"_s)
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
			$of("Pahari (Himachali)"_s)
		}),
		$$new($ObjectArray, {
			$of("hin"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"Hettitiskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"Hmongspråk"_s)
		}),
		$$new($ObjectArray, {
			$of("hmo"_s),
			$of("Hirimotu"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("Hirimotu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("kroatiska"_s)
		}),
		$$new($ObjectArray, {
			$of("hrv"_s),
			$of("Kroatiska"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"Högsorbiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("ungerska"_s)
		}),
		$$new($ObjectArray, {
			$of("hun"_s),
			$of("Ungerska"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armeniska"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero"_s)
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
			$of("Ibo (Igbo)"_s)
		}),
		$$new($ObjectArray, {
			$of("ice"_s),
			$of(u"Isländska"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonesiska"_s)
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
			$of("Iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of("indonesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ina"_s),
			$of("Interlingua (International Auxiliary Language Association)"_s)
		}),
		$$new($ObjectArray, {
			$of("inc"_s),
			$of(u"Indo-ariskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("ind"_s),
			$of("Indonesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ine"_s),
			$of(u"Indoeuropeiskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Ingusj"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("ipk"_s),
			$of("Inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("ira"_s),
			$of("Iranska"_s)
		}),
		$$new($ObjectArray, {
			$of("iro"_s),
			$of(u"Irokesiska språk"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"isländska"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italienska"_s)
		}),
		$$new($ObjectArray, {
			$of("ita"_s),
			$of("Italienska"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("hebreiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japanska"_s)
		}),
		$$new($ObjectArray, {
			$of("jav"_s),
			$of("Javanesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of("jiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("jpn"_s),
			$of("Japanska"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("Judepersiska"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("Judearabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Javanesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("georgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Karakalpakiska"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabyliska"_s)
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
			$of("Fornjavanska (Kawi)"_s)
		}),
		$$new($ObjectArray, {
			$of("kaz"_s),
			$of("Kazakiska"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"Kabardinska (Östtjerkessiska)"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kikongo"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("khi"_s),
			$of(u"Khoisanspråk"_s)
		}),
		$$new($ObjectArray, {
			$of("khm"_s),
			$of("Central-Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Sakiska (Khotanesiska)"_s)
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
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kir"_s),
			$of("Kirgisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kwanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakstanska"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grönländska"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("kambodjanska"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Mbundu (Kimbundu)"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("koreanska"_s)
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
			$of("Koreanska"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kusaie"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karachay-Balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Karelska"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"Kru-språk"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kashmiriska"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdiska"_s)
		}),
		$$new($ObjectArray, {
			$of("kua"_s),
			$of("Ovambo"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("kur"_s),
			$of("Kurdiska"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("Kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Korniska"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgisiska"_s)
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
			$of("Laotiska"_s)
		}),
		$$new($ObjectArray, {
			$of("lat"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("lav"_s),
			$of("Lettiska"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luxemburgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lezginska"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Luganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("lim"_s),
			$of("Limburgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lin"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lit"_s),
			$of("Litauiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laotiska"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Lolo (Mongo)"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litauiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ltz"_s),
			$of("Luxemburgiska"_s)
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
			$of("Luganda"_s)
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
			$of("Luo (Kenya och Tanzania)"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("lettiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mac"_s),
			$of("Makedonska"_s)
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
			$of("Marshallesiska"_s)
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
			$of("Mande"_s)
		}),
		$$new($ObjectArray, {
			$of("mao"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("map"_s),
			$of(u"Austronesiskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("mar"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Massajiska"_s)
		}),
		$$new($ObjectArray, {
			$of("may"_s),
			$of("Malajiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Moksja"_s)
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
			$of("malagas"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Medeliriska (900-1200)"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marshallesiska"_s)
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
			$of("Okodat"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedoniska"_s)
		}),
		$$new($ObjectArray, {
			$of("mkh"_s),
			$of(u"Mon-khmerspråk"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mlg"_s),
			$of("Malagassiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mlt"_s),
			$of("Maltesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongoliska"_s)
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
			$of("moldaviska"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("mon"_s),
			$of("Mongoliska"_s)
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
			$of("malajiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Flera"_s)
		}),
		$$new($ObjectArray, {
			$of("mun"_s),
			$of("Munda"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Muskogee"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("burmesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("myn"_s),
			$of(u"Maya-språk"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("nah"_s),
			$of("Nahuatl"_s)
		}),
		$$new($ObjectArray, {
			$of("nai"_s),
			$of(u"Nordamerikanskt indianspråk"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Neapolitansk italienska"_s)
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
			$of(u"Norska (bokmål)"_s)
		}),
		$$new($ObjectArray, {
			$of("nbl"_s),
			$of("Ndebele (syd)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Ndebele (nord)"_s)
		}),
		$$new($ObjectArray, {
			$of("nde"_s),
			$of("Ndebele (nord)"_s)
		}),
		$$new($ObjectArray, {
			$of("ndo"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Lågtyska"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepaliska"_s)
		}),
		$$new($ObjectArray, {
			$of("nep"_s),
			$of("Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Niger-/Kongospråk"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niuiska"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"nederländska"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Nynorska"_s)
		}),
		$$new($ObjectArray, {
			$of("nno"_s),
			$of("Norska (Nynorska)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norska"_s)
		}),
		$$new($ObjectArray, {
			$of("nob"_s),
			$of(u"Bokmål, norska"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("Nogaiska"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"Fornisländska"_s)
		}),
		$$new($ObjectArray, {
			$of("nor"_s),
			$of("Norska"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("N\'Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("Ndebele (syd)"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Pedi"_s)
		}),
		$$new($ObjectArray, {
			$of("nub"_s),
			$of("Nubiska"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navaho"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Klassisk newari"_s)
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
			$of("occitan"_s)
		}),
		$$new($ObjectArray, {
			$of("oci"_s),
			$of("Occitanska (efter 1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("Odjibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("oji"_s),
			$of("Odjibwa (Chippewa)"_s)
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
			$of("Ossetiska"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("Osage"_s)
		}),
		$$new($ObjectArray, {
			$of("oss"_s),
			$of("Ossetiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("Ottomanska (1500-1928)"_s)
		}),
		$$new($ObjectArray, {
			$of("oto"_s),
			$of("Otomi"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("punjabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("paa"_s),
			$of(u"Papuanskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Pahlavi (Medelpersiska)"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampanga"_s)
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
			$of("Palauan"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("Fornpersiska (ca.600-400 fK)"_s)
		}),
		$$new($ObjectArray, {
			$of("per"_s),
			$of("Persiska"_s)
		}),
		$$new($ObjectArray, {
			$of("phi"_s),
			$of("Filippinska"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("Feniciska"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polska"_s)
		}),
		$$new($ObjectArray, {
			$of("pli"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pol"_s),
			$of("Polska"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Pohnpeiska"_s)
		}),
		$$new($ObjectArray, {
			$of("por"_s),
			$of("Portugisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("pra"_s),
			$of("Prakrit"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("Fornprovensalska (-1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashto (pushto)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("pus"_s),
			$of("Pashto"_s)
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
			$of("Rarotongan"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"rätromanska "_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rumänska"_s)
		}),
		$$new($ObjectArray, {
			$of("roa"_s),
			$of("Romanska"_s)
		}),
		$$new($ObjectArray, {
			$of("roh"_s),
			$of(u"Rätoromanska"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romani"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("ryska"_s)
		}),
		$$new($ObjectArray, {
			$of("rum"_s),
			$of(u"Rumänska"_s)
		}),
		$$new($ObjectArray, {
			$of("run"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Arumanska"_s)
		}),
		$$new($ObjectArray, {
			$of("rus"_s),
			$of("Ryska"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
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
			$of("Jakutiska"_s)
		}),
		$$new($ObjectArray, {
			$of("sai"_s),
			$of(u"Sydamerikanskt indianspråk"_s)
		}),
		$$new($ObjectArray, {
			$of("sal"_s),
			$of("Saliska"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Samaritanska"_s)
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
			$of("Sardiska"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sicilianska"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Skotsk gaeliska"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Nordsamiska"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("sem"_s),
			$of(u"Semitiskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sangho"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Forniriska (-900)"_s)
		}),
		$$new($ObjectArray, {
			$of("sgn"_s),
			$of(u"Teckenspråk"_s)
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
			$of("Sidami"_s)
		}),
		$$new($ObjectArray, {
			$of("sin"_s),
			$of("Singalesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("sio"_s),
			$of(u"Sioux-språk"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Sino-tibetanskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovakiska"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("slovenska"_s)
		}),
		$$new($ObjectArray, {
			$of("sla"_s),
			$of(u"Slaviskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("slo"_s),
			$of("Slovakiska"_s)
		}),
		$$new($ObjectArray, {
			$of("slv"_s),
			$of("Slovenska"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Sydsamiska"_s)
		}),
		$$new($ObjectArray, {
			$of("sme"_s),
			$of("Nordsamiska"_s)
		}),
		$$new($ObjectArray, {
			$of("smi"_s),
			$of("Samiska"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lulesamiska"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Enaresamiska"_s)
		}),
		$$new($ObjectArray, {
			$of("smo"_s),
			$of("Samoanska"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Skoltsamiska"_s)
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
			$of("somaliska"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdiska"_s)
		}),
		$$new($ObjectArray, {
			$of("som"_s),
			$of("Somaliska"_s)
		}),
		$$new($ObjectArray, {
			$of("son"_s),
			$of("Songhai"_s)
		}),
		$$new($ObjectArray, {
			$of("sot"_s),
			$of("Sotho, syd-"_s)
		}),
		$$new($ObjectArray, {
			$of("spa"_s),
			$of("Spanska"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanska"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbiska"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Sardiska"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("srp"_s),
			$of("Serbiska"_s)
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
			$of(u"Nilo-sahariskt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("ssw"_s),
			$of("Swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundanesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sun"_s),
			$of("Sundanesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("Sumeriska"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("svenska"_s)
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
			$of("Svenska"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("Klassisk syriska"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Syriska"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("tah"_s),
			$of("Tahitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("tai"_s),
			$of(u"Thaispråk"_s)
		}),
		$$new($ObjectArray, {
			$of("tam"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("tat"_s),
			$of("Tatariska"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("tel"_s),
			$of("Telugo"_s)
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
			$of("tadjekiska"_s)
		}),
		$$new($ObjectArray, {
			$of("tgk"_s),
			$of("Tadzjikiska"_s)
		}),
		$$new($ObjectArray, {
			$of("tgl"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"thailändska"_s)
		}),
		$$new($ObjectArray, {
			$of("tha"_s),
			$of(u"Thailändska"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("tib"_s),
			$of("Tibetanska"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"Tigré"_s)
		}),
		$$new($ObjectArray, {
			$of("tir"_s),
			$of("Tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tivi"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmeniska"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"Tokelauöarna"_s)
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
			$of("tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("Tonga (Nyasa)"_s)
		}),
		$$new($ObjectArray, {
			$of("ton"_s),
			$of(u"Tonga (Tongaöarna)"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turkiska"_s)
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
			$of("tatariska"_s)
		}),
		$$new($ObjectArray, {
			$of("tuk"_s),
			$of("Turkmeniska"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("tup"_s),
			$of("Tupi"_s)
		}),
		$$new($ObjectArray, {
			$of("tur"_s),
			$of("Turkiska"_s)
		}),
		$$new($ObjectArray, {
			$of("tut"_s),
			$of(u"Altaiskt språk"_s)
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
			$of("Tahitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuvinska"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmurtiska (Votjakiska)"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uighur"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("Ugaritiska"_s)
		}),
		$$new($ObjectArray, {
			$of("uig"_s),
			$of("Uiguriska"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrainska"_s)
		}),
		$$new($ObjectArray, {
			$of("ukr"_s),
			$of("Ukrainska"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Obestämd"_s)
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
			$of("uzbekiska"_s)
		}),
		$$new($ObjectArray, {
			$of("uzb"_s),
			$of("Uzbekiska"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Vai"_s)
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
			$of("vietnamesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("vie"_s),
			$of("Vietnamesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("vol"_s),
			$of(u"Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Votiska"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Vallonska"_s)
		}),
		$$new($ObjectArray, {
			$of("wak"_s),
			$of("Wakusjiska"_s)
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
			$of("Kymriska"_s)
		}),
		$$new($ObjectArray, {
			$of("wen"_s),
			$of("Sorbiska"_s)
		}),
		$$new($ObjectArray, {
			$of("wln"_s),
			$of("Vallonska"_s)
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
			$of("Kalmuckiska"_s)
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
			$of("jiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("yid"_s),
			$of("Jiddisch"_s)
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
			$of("Yupik"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotek"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("Blissymboler"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("kinesiska"_s)
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
			$of(u"Icke-språkligt medium"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zaza"_s)
		})
	});
}

LocaleNames_sv::LocaleNames_sv() {
}

$Class* LocaleNames_sv::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sv, name, initialize, &_LocaleNames_sv_ClassInfo_, allocate$LocaleNames_sv);
	return class$;
}

$Class* LocaleNames_sv::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun