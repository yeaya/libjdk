#include <sun/util/resources/ext/LocaleNames_mt.h>

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

$MethodInfo _LocaleNames_mt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_mt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_mt",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_mt_MethodInfo_
};

$Object* allocate$LocaleNames_mt($Class* clazz) {
	return $of($alloc(LocaleNames_mt));
}

void LocaleNames_mt::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_mt::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emirati Għarab Maqgħuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angwilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanija"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenja"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"Antilles Olandiżi"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antartika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Arġentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Amerikana"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Awstrija"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Awstralja"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Ażerbajġan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bożnija Ħerżegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladexx"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Belġju"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarija"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Baħrajn"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunej"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivja"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brażil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Baħamas"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bjelorussja"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Beliże"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Cocos (Keeling) Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Democratic Republic of the Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Repubblika Afrikana Ċentrali"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Svizzera"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kosta ta’ l-Avorju"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Ċili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Ċina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbja"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of("Serbja u Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Ċipru"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Repubblika Ċeka"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Ġermanja"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Ġibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danimarka"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Republikka Domenikana"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alġerija"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekwador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonja"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Eġittu"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara tal-Punent"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanja"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etijopja"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandja"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fiġi"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesja"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Gżejjer Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Franza"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Ingilterra"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Ġorġja"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Gujana Franċiża"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grinlandja"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambja"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gwadelupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ginea Ekwatorjali"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Greċja"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("South Georgia and the South Sandwich Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gwatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Gwam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Ginea-Bissaw"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gujana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Ħong Kong S.A.R., Ċina"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard Island and McDonald Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Ħonduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroazja"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Ħaiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungerija"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indoneżja"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Iżrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indja"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islanda"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italja"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Ġamajka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Ġordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Ġappun"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenja"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodja"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoros"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts and Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Koreja ta’ Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Koreja t’Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwajt"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Każakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanu"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Santa Luċija"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberja"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litwanja"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lussemburgu"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvja"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libja"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marokk"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Maldova"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Gżejjer ta’ Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Maċedonja"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mjanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolja"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao S.A.R., China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Gżejjer Marjana ta’ Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mawritanja"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mawrizju"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Messiku"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malasja"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Możambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibja"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Niġer"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Niġerja"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Olanda"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norveġja"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinesja Franċiża"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papwa-Ginea Ġdida"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippini"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonja"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre and Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinian Territory"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugall"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragwaj"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumanija"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russja"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Għarabja Sawdita"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Żvezja"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapor"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenja"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard and Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakkja"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalja"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome and Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Sirja"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Sważiland"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks and Caicos Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Ċad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Territorji Franċiżi ta’ Nofsinhar"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tajlandja"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Taġikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelaw"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor tal-Lvant"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tuneż"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkija"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad u Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tajwan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanżanija"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Stati Uniti"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugwaj"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Użbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent and the Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezwela"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vjetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanwatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis and Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Majotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Afrika t’Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Żambja"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Żimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"Abkażjan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikans"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Amħariku"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Għarbi"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avarik"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Ajmara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Ażerbajġani"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Baxkir"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarussu"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgaru"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of(u"Biħari"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibetjan"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Brenton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnijan"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"Ċeċen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"Ċamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsiku"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Krij"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Ċek"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Slaviku tal-Knisja"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"Ċuvax"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Welx"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Daniż"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Ġermaniż"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"Diveħi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"Dżongka"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Grieg"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Ingliż"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanjol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estonjan"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Bask"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"Fulaħ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Finlandiż"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"Fiġi"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Fawriż"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Franċiż"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"Friżjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Irlandiż"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Galliku Skoċċiż"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Gallegjan"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Gwarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"Guġarati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manks"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Ħawsa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Ebrajk"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Ħindi"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"Ħiri Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kroat"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Ungeriż"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Armenjan"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"Ħerero"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Indoneżjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupjak"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"Indoneżjan"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Iżlandiż"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Taljan"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inukitut"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("Ebrajk"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Ġappuniż"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of("Jiddix"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Ġavaniż"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Ġorġjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuju"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Każak"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Kmer"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Korejan"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kaxmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Kurdiż"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Korniku"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Kirgiż"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Letżburgiż"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingaljan"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Litwanjan"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Latvjan (Lettix)"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malagażi"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marxall"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Maċedonjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malajalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Mongoljan"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of("Moldavjan"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malajan"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Malti"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Burmiż"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Nawuru"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Bokmahal Norveġiż"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"Ndebele, ta’ Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Nepaliż"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Olandiż"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"Ninorsk Norveġiż"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"Norveġiż"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"Ndebele, t’Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"Navaħo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"Ċiċewa; Njanġa"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Provenzal (wara 1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"Oġibwa"_s)
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
			$of("os"_s),
			$of("Ossettiku"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Punġabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Pollakk"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Paxtun"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Portugiż"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Keċwa"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Reto-Romanz"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Rumen"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russu"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinjarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardinjan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Sami ta’ Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"Sinħaliż"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slovakk"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Sloven"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samojan"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Xona"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Albaniż"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serb"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Soto, t’Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Sundaniż"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Svediż"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Swaħili"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Taġik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Tajlandiż"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Zwana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"Tongan (Gżejjer ta’ Tonga)"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Tork"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"Taħitjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Wigur"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukranjan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Użbek"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Vjetnamiż"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("Volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"Ħoża"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Jiddix"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Joruba"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"Żwang"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Ċiniż"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Żulu"_s)
		})
	});
}

LocaleNames_mt::LocaleNames_mt() {
}

$Class* LocaleNames_mt::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mt, name, initialize, &_LocaleNames_mt_ClassInfo_, allocate$LocaleNames_mt);
	return class$;
}

$Class* LocaleNames_mt::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun