#include <sun/util/resources/ext/LocaleNames_pl.h>

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

$MethodInfo _LocaleNames_pl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_pl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_pl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_pl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_pl",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_pl_MethodInfo_
};

$Object* allocate$LocaleNames_pl($Class* clazz) {
	return $of($alloc(LocaleNames_pl));
}

void LocaleNames_pl::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_pl::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Zjednoczone Emiraty Arabskie"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
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
			$of("Antyle Holenderskie"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentyna"_s)
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
			$of("AZ"_s),
			$of(u"Azerbejdżan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bośnia i Hercegowina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesz"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bułgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrajn"_s)
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
			$of("Bermudy"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliwia"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazylia"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamy"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Białoruś"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Republika Środkowoafrykańska"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Szwajcaria"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Wybrzeże Kości Słoniowej"_s)
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
			$of("Chiny"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kostaryka"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Republika Zielonego Przylądka"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cypr"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Republika Czeska"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Niemcy"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Dżibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Dania"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Republika Dominikany"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekwador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Zachodnia"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Erytrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Hiszpania"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidżi"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezja"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francja"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Wielka Brytania"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gruzja"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Gujana Francuska"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gwinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gwadelupa"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Gwinea Równikowa"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grecja"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gwatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gwinea Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gujana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Chorwacja"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Węgry"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezja"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indie"_s)
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
			$of("Islandia"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Włochy"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamajka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japonia"_s)
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
			$of(u"Kambodża"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komory"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Korea Północna"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Korea Południowa"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwejt"_s)
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
			$of("Liban"_s)
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
			$of("Litwa"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Łotwa"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libia"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Mołdawia"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
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
			$of("MQ"_s),
			$of("Martynika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauretania"_s)
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
			$of("MX"_s),
			$of("Meksyk"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malezja"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nowa Kaledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holandia"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwegia"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nowa Zelandia"_s)
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
			$of("Polinezja Francuska"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nowa Gwinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipiny"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polska"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Portoryko"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalia"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragwaj"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumunia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rosja"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabia Saudyjska"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seszele"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Szwecja"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Słowenia"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Słowacja"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
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
			$of("SP"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salwador"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Suazi"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Czad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Francuskie Terytoria Zamorskie"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tajlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadżykistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunezja"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TP"_s),
			$of("Wschodni Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turcja"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trynidad i Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tajwan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
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
			$of("US"_s),
			$of("Stany Zjednoczone Ameryki"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugwaj"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Watykan"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Wenezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Dziewicze Wyspy Brytyjskie"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Dziewicze Wyspy Stanów Zjednoczonych"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Wietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
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
			$of(u"Republika Południowej Afryki"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZR"_s),
			$of("Zair"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abchaski"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrykanerski"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amharski"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabski"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("asamski"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("ajmara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbejdżański"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baszkirski"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"białoruski"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bułgarski"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of("biharski"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"tybetański"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretoński"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"kataloński"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsykański"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("czeski"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("walijski"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"duński"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("niemiecki"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"bhutański"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("grecki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("angielski"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"hiszpański"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"estoński"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskijski"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("perski"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"fiński"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fidżi"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("farerski"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("fryzyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("szkocki"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galisyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebrajski"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("chorwacki"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"węgierski"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"armeński"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonezyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of("indonezyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"włoski"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("hebrajski"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japoński"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of("jidisz"_s)
		}),
		$$new($ObjectArray, {
			$of("jw"_s),
			$of("jawajski"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"gruziński"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazaski"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("grenlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("khmerski"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kanadyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"koreański"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kaszmirski"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiski"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"łaciński"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laotański"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litewski"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"łotewski"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaski"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maoryski"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"macedoński"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongolski"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"mołdawski"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malajski"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltański"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"birmański"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalski"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("holenderski"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norweski"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("prowansalski"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo "_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("oryski"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pendżabski"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polski"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("paszto "_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugalski"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("keczua"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retoromański"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rumuński"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rosyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyaruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrycki"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sind"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sangho"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("syngaleski"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"słowacki"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"słoweński"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoański"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("szona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somalijski"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albański"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbski"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("suazi"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundajski"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("szwedzki"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamilski"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tadżycki"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("tajlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkmeński"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongański"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turecki"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatarski"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("ujguryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukraiński"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbecki"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("wietnamski"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("jidisz"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("joruba"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"chiński"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		})
	});
}

LocaleNames_pl::LocaleNames_pl() {
}

$Class* LocaleNames_pl::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pl, name, initialize, &_LocaleNames_pl_ClassInfo_, allocate$LocaleNames_pl);
	return class$;
}

$Class* LocaleNames_pl::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun