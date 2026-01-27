#include <sun/util/resources/cldr/ext/LocaleNames_sl.h>

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

$MethodInfo _LocaleNames_sl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sl_MethodInfo_
};

$Object* allocate$LocaleNames_sl($Class* clazz) {
	return $of($alloc(LocaleNames_sl));
}

void LocaleNames_sl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of("svet"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Severna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Južna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceanija"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Zahodna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Srednja Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Vzhodna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Severna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Srednja Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Južna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerike"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"severnoameriška celina"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibi"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Vzhodna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Južna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Jugovzhodna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Južna Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Avstralija in Nova Zelandija"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezija"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("mikronezijska regija"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinezija"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Osrednja Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Zahodna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Vzhodna Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Severna Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Zahodna Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("podsaharska Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latinska Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Otok Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Združeni arabski emirati"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigva in Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angvila"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanija"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenija"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Ameriška Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Avstrija"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Avstralija"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Ålandski otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbajdžan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosna in Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangladeš"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgija"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bolgarija"_s)
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
			$of("BL"_s),
			$of(u"Saint Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudi"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunej"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivija"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Nizozemski Karibi"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazilija"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahami"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvetov otok"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Bocvana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belorusija"_s)
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
			$of("CC"_s),
			$of("Kokosovi otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Demokratična republika Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Srednjeafriška republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Švica"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Slonokoščena obala"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookovi otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Čile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kitajska"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbija"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Otok Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kostarika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Zelenortski otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Božični otok"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Ciper"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Češka"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Nemčija"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Džibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danska"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikanska republika"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alžirija"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta in Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonija"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Zahodna Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Španija"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopija"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Evropska unija"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"evroobmočje"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finska"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidži"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandski otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezija"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Ferski otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francija"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Združeno kraljestvo"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gruzija"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Francoska Gvajana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grenlandija"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambija"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekvatorialna Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Grčija"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Južna Georgia in Južni Sandwichevi otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gvineja Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gvajana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Posebno upravno območje Ljudske republike Kitajske Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heardov otok in McDonaldovi otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Hrvaška"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Madžarska"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanarski otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezija"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irska"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Otok Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indija"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britansko ozemlje v Indijskem oceanu"_s)
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
			$of("Islandija"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italija"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamajka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordanija"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japonska"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenija"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambodža"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komori"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts in Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Severna Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Južna Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuvajt"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kajmanski otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazahstan"_s)
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
			$of(u"Lihtenštajn"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Šrilanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberija"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvija"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libija"_s)
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
			$of("Moldavija"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Črna gora"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallovi otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Severna Makedonija"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mjanmar (Burma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolija"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Posebno upravno območje Ljudske republike Kitajske Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Severni Marianski otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mavretanija"_s)
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
			$of("Maldivi"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malavi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mehika"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malezija"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibija"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nova Kaledonija"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Norfolški otok"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigerija"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragva"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Nizozemska"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norveška"_s)
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
			$of("Nova Zelandija"_s)
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
			$of("Francoska Polinezija"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nova Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipini"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poljska"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre in Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Portoriko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinsko ozemlje"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalska"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragvaj"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Ostala oceanija"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romunija"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Srbija"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusija"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudova Arabija"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomonovi otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sejšeli"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Švedska"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Sveta Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenija"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard in Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slovaška"_s)
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
			$of("Somalija"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Južni Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome in Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Sirija"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Esvatini"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Otoki Turks in Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Čad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francosko južno ozemlje"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tajska"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadžikistan"_s)
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
			$of("Tunizija"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Turčija"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad in Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tajvan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanija"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukrajina"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Stranski zunanji otoki Združenih držav"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Združeni narodi"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Združene države Amerike"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugvaj"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent in Grenadine"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britanski Deviški otoki"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Ameriški Deviški otoki"_s)
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
			$of("Wallis in Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("psevdonaglasi"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("psevdobidi"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
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
			$of(u"Južnoafriška republika"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambija"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Neznano ali neveljavno območje"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abhaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avestijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afrikanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"akanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amharščina"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"arabščina"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asamščina"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ajmarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbajdžanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"baškirščina"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"beloruščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bolgarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bislamščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"bambarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"bengalščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"tibetanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katalonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"čečenščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"čamorščina"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korziščina"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"krijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"češčina"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"stara cerkvena slovanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"čuvaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"valižanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"danščina"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"nemščina"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"diveščina"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzonka"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"evenščina"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"grščina"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"angleščina"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"španščina"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"estonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"baskovščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"perzijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"fulščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fidžijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ferščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"francoščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"zahodna frizijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"škotska gelščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galicijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"gvaranijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gudžaratščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"manščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"havščina"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"hebrejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"hindijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hiri motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"hrvaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haitijska kreolščina"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"madžarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"armenščina"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingva"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indonezijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingve"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"igboščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"sečuanska jiščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"inupiaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandščina"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"italijanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"inuktitutščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"javanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"gruzijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"kongovščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"kikujščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kvanjama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kazaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grenlandščina"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"kmerščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"kanareščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"korejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"kanurščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kašmirščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kurdščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"komijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"kornijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirgiščina"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"latinščina"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luksemburščina"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laoščina"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"litovščina"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"latvijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malgaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshallovščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maorščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"makedonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"malajalamščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"mongolščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"maratščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"malteščina"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"burmanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"naurujščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"knjižna norveščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"severna ndebelščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepalščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"nizozemščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"novonorveščina"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norveščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"južna ndebelščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"navajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"njanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"okcitanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"anašinabščina"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"odijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"osetinščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pandžabščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"palijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"poljščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"paštunščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugalščina"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"kečuanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retoromanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"rundščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"romunščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ruščina"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"ruandščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrt"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardinščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sindščina"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"severna samijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"srbohrvaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"sinhalščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slovaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slovenščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"šonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somalščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"srbščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"svazijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"švedščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("svahili"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tamilščina"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"telugijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tadžiščina"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"tajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigrajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkmenščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"tagalogščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"cvanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"turščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"congščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tatarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("tvi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahitščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ujgurščina"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukrajinščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urdujščina"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbeščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietnamščina"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapik"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"valonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"volofščina"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"koščina"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidiš"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"jorubščina"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"kitajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zulujščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ačejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"ačolijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"adangmejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adigejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"aghemščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ainujščina"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akadščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"aleutščina"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"južna altajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"stara angleščina"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"angikaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"aramejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"mapudungunščina"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"arapaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"aravaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"asujščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"asturijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"avadščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"beludžijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"bedža"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"benajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"zahodnobalučijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bodžpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("bikolski jezik"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("edo"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"bradžbakanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"bodojščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"burjatščina"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"buginščina"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"blinščina"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"kadoščina"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karibski jezik"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"sebuanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"čigajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"čibčevščina"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"čagatajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"trukeščina"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"marijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"činuški žargon"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"čoktavščina"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"čipevščina"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"čerokeščina"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"čejenščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"soranska kurdščina"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"koptščina"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"krimska tatarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"sejšelska francoska kreolščina"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"kašubščina"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"dakotščina"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"darginščina"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"taitajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"delavarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"slavejščina"_s)
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
			$of("dje"_s),
			$of(u"zarmajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"dolnja lužiška srbščina"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"srednja nizozemščina"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"jola-fonjiščina"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("diula"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"embujščina"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"efiščina"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"stara egipčanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"elamščina"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"srednja angleščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"evondovščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"fangijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"fantijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filipinščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"fonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"cajunska francoščina"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"srednja francoščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"stara francoščina"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"severna frizijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"vzhodna frizijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"furlanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gagavščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"gajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"gbajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"etiopščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"kiribatščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"srednja visoka nemščina"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"stara visoka nemščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"gorontalščina"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"gotščina"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"grebščina"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"stara grščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"nemščina (Švica)"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"gusijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gvičin"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"haidščina"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"havajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"hiligajnonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"hetitščina"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"hmonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"gornja lužiška srbščina"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ibanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ibibijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ilokanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"inguščina"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"mačamejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"judovska perzijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"judovska arabščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"karakalpaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kabilščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"kačinščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"kambaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kavi"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabardinščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"tjapska nigerijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"makondščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"zelenortskootoška kreolščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("kasi"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"kotanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"kalenjinščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"komi-permjaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"konkanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"kosrajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"kpelejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karačaj-balkarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"karelščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kuruk"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"šambala"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kölnsko narečje"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kumiščina"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"kutenajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ladinščina"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"langijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("landa"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lezginščina"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"lakotščina"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"louisianska kreolščina"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"severna lurijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"luisenščina"_s)
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
			$of(u"mizojščina"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"luhijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madurščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"magadščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maitili"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"makasarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mokšavščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"mandarščina"_s)
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
			$of("mfe"_s),
			$of(u"morisjenščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"srednja irščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makuva-meto"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("meta"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"mikmaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"mandžurščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"manipurščina"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"mohoščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"mosijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"več jezikov"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"creekovščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandeščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"marvarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"erzjanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazanderanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"min nan kitajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"napolitanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("khoekhoe"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"nizka nemščina"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"nevarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"niaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niuejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ngiemboonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"nogajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"stara nordijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n’ko"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"severna sotščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"nuerščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"klasična nevarščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"njamveščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("njankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("njoro"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"otomanska turščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"pangasinanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"pampanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamentu"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palavanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nigerijski pidžin"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"stara perzijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"feničanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"ponpejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"stara pruščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"stara provansalščina"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of("quiche"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"radžastanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"rapanujščina"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotongščina"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"romščina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"aromunščina"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"sandavščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"jakutščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"samaritanska aramejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"samburščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"sasaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"santalščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ngambajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"sangujščina"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sicilijanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"škotščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"južna kurdščina"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"selkupščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"stara irščina"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"tahelitska berberščina"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"šanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"sidamščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"južna samijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"luleška samijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"inarska samijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"skoltska samijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"surinamska kreolščina"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"sererščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"susujščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"sumerščina"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"šikomor"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"klasična sirščina"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"sirščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"temnejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tetumščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigrejščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"tivščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"tokelavščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klingonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"tlingitščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tamajaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"malavijska tongščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"tsimščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"tumbukščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuvalujščina"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuvinščina"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"tamašek (Srednji Atlas)"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"udmurtščina"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("ugaritski jezik"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"umbundščina"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("neznan jezik"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"vajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"votjaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("walser"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"valamščina"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"varajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"vašajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"varlpirščina"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalmiščina"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"sogščina"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"jaojščina"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"japščina"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("jangben"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"jembajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kantonščina"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapoteščina"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("znakovni jezik Bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"zenaščina"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"standardni maroški tamazig"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"zunijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("brez jezikoslovne vsebine"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"zazajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arabski"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("imperialno-aramejski"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armenski"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("avestanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("balijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"bataški"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalski"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of("znakovna pisava Bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("bramanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("braillova pisava"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("buginski"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("buhidski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("poenotena zlogovna pisava kanadskih staroselcev"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"čerokeški"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("kirt"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("koptski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("ciprski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("cirilica"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("starocerkvenoslovanska cirilica"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"devanagarščica"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("fonetska pisava deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"demotska egipčanska pisava"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"hieratska egipčanska pisava"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"egipčanska slikovna pisava"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopski"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("cerkvenogruzijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("gruzijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"glagoliški"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("gotski"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"grški"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"gudžaratski"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("han + bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("kanji"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanunski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("poenostavljena pisava"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicionalna pisava"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebrejski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahavhmonska zlogovna pisava"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("japonska zlogovnica"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("staroogrski"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"induški"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("staroitalski"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("javanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("japonski"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("karenski"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("gandarski"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("kmerski"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kanadski"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("korejski"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kajatski"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"laoški"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("fraktura"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"gelski latinični"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latinica"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"lepški"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"limbuški"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("linearna pisava A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("linearna pisava B"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("licijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("manihejski"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("majevska slikovna pisava"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroitski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("malajalamski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongolska"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("Moonova pisava za slepe"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("manipurski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("mjanmarski"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogamski"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("santalski"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkonski"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("orijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("staropermijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("pagpajski"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("vrezani napisi pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("psalmski pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"knjižno palavanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"feničanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollardova fonetska pisava"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runski"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("samaritanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("saratski"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("znakovna pisava"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"šojevski"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("sinhalski"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("sundanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("siletsko-nagarijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("sirijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("sirska abeceda estrangelo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("zahodnosirijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("vzhodnosirijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamilski"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tajsko-vietnamski"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"teluški"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("tengvarski"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("tifinajski"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"tagaloški"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("tanajski"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("tajski"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tibetanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("ugaritski"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("zlogovna pisava vai"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("vidni govor"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("staroperzijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("sumersko-akadski klinopis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("podedovan"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"matematična znamenja"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"čustvenček"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("simboli"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("nenapisano"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"splošno"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("neznan ali neveljaven zapis"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"avstrijska nemščina"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"visoka nemščina (Švica)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"avstralska angleščina"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"kanadska angleščina"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"britanska angleščina"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ameriška angleščina"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"evropska španščina"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"mehiška španščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"darijščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"kanadska francoščina"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"švicarska francoščina"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"flamščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"brazilska portugalščina"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"evropska portugalščina"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldavščina"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"kongoški svahili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"tradicionalni nemški pravopis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("standardizirani rezijanski pravopis (1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"novi nemški pravopis (1996)"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"sodobna standardna arabščina"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"latinskoameriška španščina"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("oblika zapisa valute"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"razvrščanje"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("urni prikaz (12 ali 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Slog preloma vrstic"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("merski sistem"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"številke"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"Časovni pas"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Različica območnih nastavitev"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"nizka saščina"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"rezijansko narečje Bila (San Giorgio)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("boonvilski jezik"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"rezijansko narečje iz Lipovca (Lipovaz)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"nadiško narečje"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"rezijansko narečje Njiva (Gniva)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"rezijansko narečje iz Osojan (Oseacco)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("standard prenosljivosti programske opreme"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"rezijanščina"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"rezijansko narečje iz Solbice (Stolvizza)"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"poenostavljena kitajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"tradicionalna kitajščina"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"mednarodna fonetična pisava IPA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("uralska fonetska pisava UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"romanizacija pindžin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"liverpoolsko angleško narečje scouse"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraškievičeva beloruska slovnica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"vzhodna armenščina"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"zahodna armenščina"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monotonalni pravopis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("politonalni pravopis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("revidiran pravopis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"pozna srednja francoščina (do 1606)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"zgodnja sodobna francoščina"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"modernizirana turška latinica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"standardna škotska angleščina"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("valencijski pravopis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("romanizacija Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("koledar Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"evropska pravila razvrščanja"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-urni sistem (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-urni sistem (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-urni sistem (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-urni sistem (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"števke ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"arabskoindijske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"armenske številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"balinezijske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"bengalske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"brahmi števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"čakma števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"Cham števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"cirilične številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"devangarske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"etiopijske številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"gruzijske številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(u"Masaram gondi števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"grške številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"gudžaratske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"gurmuške števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"poenostavljene kitajske številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"tradicionalne kitajske številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"hebrejske številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"Pahawh Hmong števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"javanske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"japonske številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"Kayah Li števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"kmerske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"kanaredske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"Tai Tham Hora števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"laoške števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"zahodne števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"Lepcha števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"Limbu števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"malajalamske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"Modi števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Mongolske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"Mro števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"Meetei Mayek števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"mjanmarske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"N’Ko števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"Ol Chiki števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"orijske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"osmanijske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"Saurashtra števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"Sharada števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"Khudawadi števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"Sinhala Lith števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"Sora Sompeng števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"sundijske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"Takri števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"Nove Tai Lue števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"tradicionalne tamilske številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"teluške števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"tajske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"tibetanske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"Tirhuta števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Številke vai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"Warang Citi števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("stari korejski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Privzeto razvrščanje Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"razvrščanje čustvenčkov"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Prosti slog preloma vrstic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"rimske številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Koptski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("hebrejski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("indijanski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"prej uporabljeno razvrščanje za združljivost"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"razvrščanje po sistemu pinjin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Splošno iskanje"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"razvrščanje po zaporedju pisanja pismenk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Razvrščanje koren-poteza"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"Razvrščanje po pismenkah Zhuyin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Polna širina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"Polovična širina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Običajni slog preloma vrstic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Strogi slog preloma vrstic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"metrični sistem"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Domače števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("kitajski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("koledar ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("perzijski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"oblika zapisa valute v računovodstvu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"razvrščanje po sistemu tradicionalne kitajščine - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Številsko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"razširjene arabskoindijske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"armenske majhne številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Finančne številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"grške male številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"kitajske decimalne številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"poenostavljene kitajske finančne številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"tradicionalne kitajske finančne številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"japonske finančne številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"dvojno prečrtane matematične števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"tamilske števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"budistični koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("etiopski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("japonski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("standardna oblika zapisa valute"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fonetično razvrščanje"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Reformirano razvrščanje"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Iskanje po začetnem soglasniku hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Standardno razvrščanje"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("imperialni merski sistem"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"merski sistem Združenih držav"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"števke polne širine"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"Tai Tham Tham števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"Krepke matematične števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(u"matematične števke z enim prostorom"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"matematične krepke Sans-Serif števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"matematične Sans-Serif števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"mjanmarske shan števke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"mjanmarske števke Tai Laing"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"rimske male številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("gregorijanski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"razvrščanje po sistemu poenostavljene kitajščine - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"razvrščanje po abecedi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Vrstni red razvrščanja v slovarju"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"razvrščanje po tradicionalnem sistemu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Tradicionalne številke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("islamski koledar ( Saudova Arabija, opazovalni)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("islamski koledar (tabelarni, astronomska epoha)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("islamski civilni koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("islamski koledar Umm al-Qura"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Etiopsko ametsko alemski koledar"_s)
		})
	}));
	return data;
}

LocaleNames_sl::LocaleNames_sl() {
}

$Class* LocaleNames_sl::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sl, name, initialize, &_LocaleNames_sl_ClassInfo_, allocate$LocaleNames_sl);
	return class$;
}

$Class* LocaleNames_sl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun