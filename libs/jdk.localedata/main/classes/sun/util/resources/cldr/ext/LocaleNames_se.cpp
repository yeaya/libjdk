#include <sun/util/resources/cldr/ext/LocaleNames_se.h>

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

$MethodInfo _LocaleNames_se_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_se, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_se, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_se_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_se",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_se_MethodInfo_
};

$Object* allocate$LocaleNames_se($Class* clazz) {
	return $of($alloc(LocaleNames_se));
}

void LocaleNames_se::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_se::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"máilbmi"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Afrihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"dávvi-Amerihkká ja gaska-Amerihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"mátta-Amerihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oseania"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"oarji-Afrihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"gaska-Amerihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"nuorta-Afrihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"davvi-Afrihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"gaska-Afrihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"mátta-Afrihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amerihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"dávvi-Amerihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibia"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"nuorta-Ásia"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"mátta-Ásia"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"mátta-nuorta-Ásia"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"mátta-Eurohpá"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Austrália ja Ođđa-Selánda"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesia guovllus"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Ásia"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"gaska-Ásia"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"oarji-Ásia"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Eurohpá"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"nuorta-Eurohpá"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"davvi-Eurohpá"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"oarji-Eurohpá"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"lulli-Amerihkká"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Ovttastuvvan Arábaemiráhtat"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua ja Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albánia"_s)
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
			$of(u"Antárktis"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Amerihká Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Nuortariika"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austrália"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Ålánda"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Aserbaižan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia-Hercegovina"_s)
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
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulgária"_s)
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
			$of("BL"_s),
			$of(u"Saint Barthélemy"_s)
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
			$of("Brasil"_s)
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
			$of("Bouvet-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Vilges-Ruošša"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Kanáda"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Cocos-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Gaska-Afrihká dásseváldi"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Šveica"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Elfenbenariddu"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cook-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Čiile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Kiinná"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
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
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Juovllat-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kypros"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Čeahkka"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Duiska"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Dánmárku"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominikána dásseváldi"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta ja Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Estlánda"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypta"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Oarje-Sahára"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Spánia"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Eurohpa Uniovdna"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Suopma"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fijisullot"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandsullot"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Fearsullot"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankriika"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Stuorra-Británnia"_s)
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
			$of("Frankriikka Guayana"_s)
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
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Kalaallit Nunaat"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Gámbia"_s)
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
			$of(u"Ekvatoriála Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Greika"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Lulli Georgia ja Lulli Sandwich-sullot"_s)
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
			$of("HK"_s),
			$of("Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard- ja McDonald-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kroátia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ungár"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanáriasullot"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Irlánda"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Mann-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
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
			$of(u"Islánda"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Itália"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jordánia"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Japána"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgisistan"_s)
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
			$of("Komoros"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts ja Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Davvi-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Mátta-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Cayman-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasakstan"_s)
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
			$of("Lietuva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Látvia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
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
			$of(u"Moldávia"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Frankriikka Saint Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallsullot"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Burma"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Makáo"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Davvi-Mariánat"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mauretánia"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Málta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malediivvat"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malesia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Ođđa-Kaledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolksullot"_s)
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
			$of("Vuolleeatnamat"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norga"_s)
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
			$of(u"Ođđa-Selánda"_s)
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
			$of("Frankriikka Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua-Ođđa-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippiinnat"_s)
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
			$of("Saint Pierre ja Miquelon"_s)
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
			$of(u"Portugála"_s)
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
			$of(u"Románia"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Ruošša"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saudi-Arábia"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomon-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellsullot"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Davvisudan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Ruoŧŧa"_s)
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
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalbárda ja Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slovákia"_s)
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
			$of(u"Somália"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Máttasudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé ja Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Vuolleeatnamat Saint Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Svazieana"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks ja Caicos-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Tčad"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thaieana"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tažikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Nuorta-Timor"_s)
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
			$of("Durka"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad ja Tobago"_s)
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
			$of(u"Tanzánia"_s)
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
			$of(u"Amerihká ovttastuvvan stáhtat"_s)
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
			$of("VA"_s),
			$of(u"Vatikána"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent ja Grenadine"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Brittania Virgin-sullot"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("AOS Virgin-sullot"_s)
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
			$of("Wallis ja Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
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
			$of(u"Mátta-Afrihká"_s)
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
			$of("dovdameahttun guovlu"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afrikánsagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragoniagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"arábagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"vilges-ruoššagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulgáriagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengalgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretonagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katalánagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("corsicagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"čeahkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("kymragiella"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dánskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("duiskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongkhagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("greikkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"eaŋgalsgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"spánskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("esttegiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persijagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("suomagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fidjigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("fearagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"fránskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("oarjifriisagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("iirragiella"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("gujaratagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manksgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("haussagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"kroátiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ungárgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armeenagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonesiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islánddagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"itáliagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japánagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("georgiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("kambodiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("koreagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kornagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"láhtengiella"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luxemburggagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laogiella"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("liettuvagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"látviagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maorigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedoniagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongoliagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("burmagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"girjedárogiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepaligiella"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"hollánddagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"ođđadárogiella"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"dárogiella"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"oksitánagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjabigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polskkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugálagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"romanšgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"romániagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ruoššagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"davvisámegiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("serbokroatiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slovákiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("slovenagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albánagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"ruoŧagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"ŧaigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("durkagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrainagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdugiella"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("vallonagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"kiinnágiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("acehgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"boares eaŋgalasgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturiagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("marigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filippiinnagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaiigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"gárjilgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mokšagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("ersagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sisiliagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkupagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"lullisámegiella"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"julevsámegiella"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"anárašgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"nuortalašgiella"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("shimaorigiella"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurtagiella"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("dovdameahttun giella"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantongiella"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"arába"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"kyrillalaš"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"greikkalaš"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"kiinnaš"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"álki"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"árbevirolaš"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"láhtenaš"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"orrut chállojuvvot"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"dovdameahttun chállin"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kaleandar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("ortnet"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("valuhtta"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"numerála"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"álki kiinágiella"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"árbevirolaš kiinnágiella"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("IPA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of("Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("X-SAMPA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"oarjelohkosátni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("pinyin ortnet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("kiinna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("buddhista kaleander"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"viddis oarjelohkosátni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("gregoria kaleander"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"árbevirolaš ortnet"_s)
		})
	}));
	return data;
}

LocaleNames_se::LocaleNames_se() {
}

$Class* LocaleNames_se::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_se, name, initialize, &_LocaleNames_se_ClassInfo_, allocate$LocaleNames_se);
	return class$;
}

$Class* LocaleNames_se::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun