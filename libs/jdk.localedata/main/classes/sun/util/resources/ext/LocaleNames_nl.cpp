#include <sun/util/resources/ext/LocaleNames_nl.h>

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

$MethodInfo _LocaleNames_nl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_nl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_nl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_nl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_nl",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_nl_MethodInfo_
};

$Object* allocate$LocaleNames_nl($Class* clazz) {
	return $of($alloc(LocaleNames_nl));
}

void LocaleNames_nl::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_nl::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Verenigde Arabische Emiraten"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua en Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albanië"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armenië"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of("Nederlandse Antillen"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarctica"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Argentinië"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikaans Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Oostenrijk"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Australië"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Alandeilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbeidzjan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnië en Herzegovina"_s)
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
			$of(u"België"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarije"_s)
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
			$of(u"Brazilië"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Bahama’s"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouveteiland"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Wit-Rusland"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Cocoseilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Centraal-Afrikaanse Republiek"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Zwitserland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Ivoorkust"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookeilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kameroen"_s)
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
			$of(u"Servië en Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Kaapverdië"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Christmaseiland"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cyprus"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tsjechië"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Duitsland"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denemarken"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominicaanse Republiek"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algerije"_s)
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
			$of("Egypte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Westelijke Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanje"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Ethiopië"_s)
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
			$of("Falklandeilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Micronesië"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Faeröer"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankrijk"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Verenigd Koninkrijk"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Georgië"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Frans-Guyana"_s)
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
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinee"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Equatoriaal-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Griekenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Zuid-Georgië en Zuidelijke Sandwicheilanden"_s)
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
			$of("Guinee-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkong SAR van China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard- en McDonaldeilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kroatië"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Haïti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hongarije"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indonesië"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ierland"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Israël"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britse Gebieden in de Indische Oceaan"_s)
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
			$of("IJsland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Italië"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jordanië"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirgizië"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambodja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comoren"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts en Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Noord-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Zuid-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Koeweit"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Caymaneilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazachstan"_s)
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
			$of("Litouwen"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letland"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Libië"_s)
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
			$of(u"Moldavië"_s)
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
			$of("Marshalleilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Macedonië"_s)
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
			$of(u"Mongolië"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao SAR van China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Noordelijke Marianeneilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mauritanië"_s)
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
			$of("Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Maleisië"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namibië"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nieuw-Caledonië"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkeiland"_s)
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
			$of("Nederland"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noorwegen"_s)
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
			$of("Nieuw-Zeeland"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
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
			$of(u"Frans-Polynesië"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papoea-Nieuw-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipijnen"_s)
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
			$of("Saint Pierre en Miquelon"_s)
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
			$of("Palestijns Gebied"_s)
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
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Roemenië"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Servië"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saoedi-Arabië"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomonseilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellen"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Soedan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Zweden"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Sint-Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Slovenië"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard en Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slowakije"_s)
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
			$of(u"Somalië"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tomé en Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Syrië"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks- en Caicoseilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tsjaad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Franse Gebieden in de zuidelijke Indische Oceaan"_s)
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
			$of("Oost-Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunesië"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkije"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad en Tobago"_s)
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
			$of("UA"_s),
			$of(u"Oekraïne"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Oeganda"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Amerikaanse kleinere afgelegen eilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Verenigde Staten"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Oezbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vaticaanstad"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent en de Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Britse Maagdeneilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Amerikaanse Maagdeneilanden"_s)
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
			$of("WF"_s),
			$of("Wallis en Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
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
			$of("ZA"_s),
			$of("Zuid-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abchazisch"_s)
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
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amhaars"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonees"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assamees"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Azerbeidzjaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Basjkiers"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Wit-Russisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgaars"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of("Bihari"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengalees"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibetaans"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Bretons"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Catalaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Corsicaans"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Tsjechisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Kerkslavisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Tsjoevasjisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Welsh"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Deens"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Duits"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Grieks"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Engels"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spaans"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estlands"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Baskisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Perzisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Fins"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fijisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Faeröers"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Frans"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Fries"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Iers"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Schots Gaelic"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galicisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Hebreeuws"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindi"_s)
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
			$of("ht"_s),
			$of(u"Haïtiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Hongaars"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Armeens"_s)
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
			$of("id"_s),
			$of("Indonesisch"_s)
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
			$of("ik"_s),
			$of("Inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("IJslands"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Japans"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Javaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("Georgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kazachs"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Koreaans"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Koerdisch"_s)
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
			$of("Kirgizisch"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Latijn"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luxemburgs"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgs"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Litouws"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Letlands"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marshallees"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Macedonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Mongools"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of("Moldavisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Maleis"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltees"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Birmees"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Noors - Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Noord-Ndbele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepalees"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Nederlands"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Noors - Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Noors"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("Zuid-Ndbele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Occitaans"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Pools"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pasjtoe"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portugees"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Reto-Romaans"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Roemeens"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskriet"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Noord-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Singalees"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slowaaks"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Sloveens"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoaans"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albanees"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Servisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Zuid-Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Soendanees"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Zweeds"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Teloegoe"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tadzjieks"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Thais"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmeens"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Turks"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tataars"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Tahitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Oeigoers"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Oekraïens"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Oezbeeks"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamees"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Wallonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Jiddisch"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Chinees"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		})
	});
}

LocaleNames_nl::LocaleNames_nl() {
}

$Class* LocaleNames_nl::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_nl, name, initialize, &_LocaleNames_nl_ClassInfo_, allocate$LocaleNames_nl);
	return class$;
}

$Class* LocaleNames_nl::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun