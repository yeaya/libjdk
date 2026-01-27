#include <sun/util/resources/ext/LocaleNames_ca.h>

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

$MethodInfo _LocaleNames_ca_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ca, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ca, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ca_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_ca",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_ca_MethodInfo_
};

$Object* allocate$LocaleNames_ca($Class* clazz) {
	return $of($alloc(LocaleNames_ca));
}

void LocaleNames_ca::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_ca::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Unió dels Emirats Àrabs"_s)
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
			$of(u"Albània"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armènia"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of("Antilles Holandeses"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Âustria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austràlia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaidjan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bòsnia i Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangla Desh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bèlgica"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulgària"_s)
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
			$of("Bermudes"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bolívia"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahames"_s)
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
			$of(u"Bielorússia"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Canadà"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"República Centrafricana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Costa d\'Ivori"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Xile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Camerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Xina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Colòmbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cap Verd"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Xipre"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"República Txeca"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemanya"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
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
			$of(u"Algèria"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Equador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Estònia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Sàhara Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Espanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Etiòpia"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finlàndia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Micronèsia"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"França"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Regne Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Geòrgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guaiana Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Gàmbia"_s)
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
			$of("Guinea Equatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Grècia"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
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
			$of("HK"_s),
			$of("Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hondures"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Croàcia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Haití"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hongria"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indonèsia"_s)
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
			$of(u"Índia"_s)
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
			$of(u"Islàndia"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Itàlia"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jordània"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Japó"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizistan"_s)
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
			$of("Comores"_s)
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
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Líban"_s)
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
			$of(u"Libèria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Lituània"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Letònia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Líbia"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marroc"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Mònaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Moldàvia"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Macedònia"_s)
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
			$of(u"Mongòlia"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinica"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mauritània"_s)
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
			$of("Maurici"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Mèxic"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Malàisia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Moçambic"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namíbia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nova Caledònia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Níger"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nigèria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Països Baixos"_s)
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
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nova Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panamà"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Perú"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinèsia Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nova Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipines"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Polònia"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguai"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Rússia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Aràbia Saudí"_s)
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
			$of(u"Suècia"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Eslovènia"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Eslovàquia"_s)
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
			$of(u"Somàlia"_s)
		}),
		$$new($ObjectArray, {
			$of("SP"_s),
			$of(u"Sèrbia"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Síria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Swazilàndia"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Txad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Territoris Meridionals Francesos ??"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tailàndia"_s)
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
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunísia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TP"_s),
			$of("Timor Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turquia"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinitat i Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanzània"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ucraïna"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Estats Units"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguai"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vaticà"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Veneçuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Illes Verges Britàniques"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Illes Verges dels USA"_s)
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
			$of("YE"_s),
			$of("Iemen"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Sud-àfrica"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Zàmbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZR"_s),
			$of("Zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"àfar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhaz"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amhàric"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"ârab"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"assamès"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"àzeri"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baixkir"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"bielorús"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"búlgar"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of("bihari"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"bengalí"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"tibetà"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretó"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"català"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("cors"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("txec"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"gal·lès"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"danès"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("alemany"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"bhutanès"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("grec"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"anglès"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("espanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"estonià"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basc"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finès"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fijià"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"feroès"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"francès"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"frisó"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irlandès"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"escocès"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("gallec"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guaraní"_s)
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
			$of("hebreu"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("croat"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"hongarès"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armeni"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonesi"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of("indonesi"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandès"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"italià"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("hebreu"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japonès"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of("jiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("jw"_s),
			$of(u"javanès"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"georgià"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"greenlandès"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"cambodjà"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"coreà"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("caixmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirguís"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"llatí"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laosià"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"lituà"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"letó)"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaix"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("macedoni"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malaialam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of("moldau"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malai"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltès"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"birmà"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"nauruà"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepalès"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"neerlandès"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("noruec"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"occità"_s)
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
			$of("pa"_s),
			$of("panjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"polonès"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("paixto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portuguès"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"quètxua"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retoromànic"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"romanès"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rus"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"sànscrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"sinhalès"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("eslovac"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"eslovè"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoà"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somali"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albanès"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbi"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("siswati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundanès"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("suec"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tàmil"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("thai"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turcman"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"tagàlog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonga"_s)
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
			$of("tt"_s),
			$of(u"tàtar"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uigur"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ucraïnès"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urdú"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"wòlof"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xosa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("jiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("ioruba"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"xinés"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		})
	});
}

LocaleNames_ca::LocaleNames_ca() {
}

$Class* LocaleNames_ca::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ca, name, initialize, &_LocaleNames_ca_ClassInfo_, allocate$LocaleNames_ca);
	return class$;
}

$Class* LocaleNames_ca::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun