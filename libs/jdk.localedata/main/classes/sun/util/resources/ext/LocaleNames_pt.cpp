#include <sun/util/resources/ext/LocaleNames_pt.h>

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

$MethodInfo _LocaleNames_pt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_pt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_pt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_pt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_pt",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_pt_MethodInfo_
};

$Object* allocate$LocaleNames_pt($Class* clazz) {
	return $of($alloc(LocaleNames_pt));
}

void LocaleNames_pt::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_pt::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emirados Árabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afeganistão"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antígua e Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albânia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armênia"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of("Antilhas Holandesas"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Antártida"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Americana"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Áustria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austrália"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaijão"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bósnia-Herzegóvina"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bélgica"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burquina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulgária"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bareine"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudas"_s)
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
			$of("BT"_s),
			$of(u"Butão"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Ilha Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsuana"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Canadá"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Ilhas Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Congo, República Democrática do"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"República Centro-Africana"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Suíça"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Costa do Marfim"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Ilhas Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"República dos Camarões"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Colômbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of(u"Sérvia e Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Ilhas Natal"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Chipre"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"República Tcheca"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemanha"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Dinamarca"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"República Dominicana"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Argélia"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Equador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Estônia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egito"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Saara Ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Eritréia"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Espanha"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Etiópia"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finlândia"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Ilhas Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Micronésia, Estados Federados da"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Ilhas Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"França"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gabão"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Reino Unido"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Granada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Geórgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guiana Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Groênlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Gâmbia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Guiné"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Guiné Equatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Grécia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Geórgia do Sul e Ilhas Sandwich do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Guiné Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guiana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Hong Kong, Região Admin. Especial da China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Ilha Heard e Ilhas McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Croácia"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungria"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indonésia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Índia"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Território Britânico do Oceano Índico"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraque"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Irã"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Islândia"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Itália"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jordânia"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Japão"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Quênia"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Quirguistão"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Camboja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Quiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comores"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"São Cristovão e Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Coréia, Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Coréia, Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Ilhas Caiman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Casaquistão"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"República Democrática Popular de Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Líbano"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Santa Lúcia"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Libéria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Lituânia"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Letônia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Líbia"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marrocos"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Mônaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Moldova, República de"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Ilhas Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Macedônia, República da"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mianmá"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mongólia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Macau, Região Admin. Especial da China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Ilhas Marianas do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinica"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mauritânia"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maurício"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivas"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"México"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Malásia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Moçambique"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namíbia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nova Caledônia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Níger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Ilha Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nigéria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Nicarágua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Países Baixos"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noruega"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nova Zelândia"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Omã"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panamá"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinésia Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua-Nova Guiné"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinas"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Paquistão"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Polônia"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre e Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Território da Palestina"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguai"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Catar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reunião"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Romênia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Rússia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Arábia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Ilhas Salomão"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sudão"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Suécia"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Cingapura"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Eslovênia"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard e Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Eslováquia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Serra Leoa"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Somália"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé e Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Síria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Suazilândia"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Ilhas Turks e Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chade"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Territórios Franceses do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tailândia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadjiquistão"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turcomenistão"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunísia"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turquia"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanzânia"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ucrânia"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Ilhas Menores Distantes dos Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguai"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbequistão"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vaticano"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"São Vicente e Granadinas"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Ilhas Virgens Britânicas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Ilhas Virgens dos EUA"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vietnã"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis e Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Iêmen"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"África do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Zâmbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimbábwe"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhazian"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avéstico"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"africâner"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amárico"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonês"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"árabe"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"assamês"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avaric"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbaijano"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bielo-russo"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"búlgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of("biari"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bislamá"_s)
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
			$of("bo"_s),
			$of("tibetano"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretão"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bósnio"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"catalão"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("chechene"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"córsico"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("tcheco"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"eslavo eclesiástico"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"galês"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dinamarquês"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"alemão"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzonga"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("eve"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("grego"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"inglês"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("espanhol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estoniano"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basco"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finlandês"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fijiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"feroês"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"francês"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"frisão"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irlandês"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"gaélico escocês"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galego"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("guzerate"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manx"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"hauçá"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebraico"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hiri motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("croata"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"húngaro"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"armênio"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"interlíngua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indonésio"_s)
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
			$of("sichuan yi"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"indonésio"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandês"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italiano"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("hebraico"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japonês"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"iídiche"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"congolês"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("quicuio"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("cazaque"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"groenlandês"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("cmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"canarês"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"canúri"_s)
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
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"córnico"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("quirguiz"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latim"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburguês"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("luganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburgish"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-catanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"letão"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshallês"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"macedônio"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malaiala"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"moldávio"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marata"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malaio"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltês"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"birmanês"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruano"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"bokmål norueguês"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele, north"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("dongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"holandês"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"nynorsk norueguês"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norueguês"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele, south"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nianja; chicheua; cheua"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"occitânico (após 1500); provençal"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"páli"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"polonês"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashto (pushto)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"português"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"quíchua"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("rhaeto-romance"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("romeno"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("russo"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"sânscrito"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardo"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("northern sami"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"cingalês"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("eslovaco"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"eslovênio"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somali"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albanês"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"sérvio"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("soto, do sul"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundanês"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("sueco"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"suaíli"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tâmil"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadjique"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"tailandês"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigrínia"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turcomano"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonga (ilhas tonga)"_s)
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
			$of("tt"_s),
			$of("tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("taitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uighur"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("usbeque"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuque"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("uolofe"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xosa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"iídiche"_s)
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
			$of(u"chinês"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		})
	});
}

LocaleNames_pt::LocaleNames_pt() {
}

$Class* LocaleNames_pt::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pt, name, initialize, &_LocaleNames_pt_ClassInfo_, allocate$LocaleNames_pt);
	return class$;
}

$Class* LocaleNames_pt::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun