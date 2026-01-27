#include <sun/util/resources/cldr/ext/LocaleNames_bm.h>

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

$MethodInfo _LocaleNames_bm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_bm, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_bm, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_bm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bm",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bm_MethodInfo_
};

$Object* allocate$LocaleNames_bm($Class* clazz) {
	return $of($alloc(LocaleNames_bm));
}

void LocaleNames_bm::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bm::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Andɔr"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Arabu mara kafoli"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afiganistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antiga-ni-Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angiya"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Alibani"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Arimeni"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Arizantin"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samowa amerikani"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Otirisi"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Ositirali"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azɛrbayjaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bozni-Ɛrizigovini"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbadi"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bɛngiladɛsi"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bɛliziki"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burukina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Buligari"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bareyini"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Benɛn"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudi"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Burinɛyi"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivi"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Berezili"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamasi"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Butaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Bɔtisiwana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarusi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belizi"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongo ka republiki demɔkratiki"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Santarafiriki"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suwisi"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Kodiwari"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Kuki Gun"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Sili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kameruni"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Siniwajamana"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombi"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kɔsitarika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Capivɛrdi"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cipri"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Ceki republiki"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Alimaɲi"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danemarki"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Dɔminiki"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dɔmimiki republiki"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Alizeri"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekwatɔr"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Esetoni"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Eziputi"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritere"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Esipaɲi"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopi"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Maluwini Gun"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikironesi"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Faransi"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gabɔŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Angilɛtɛri"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Granadi"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Zeyɔrzi"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Faransi ka gwiyani"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Zibralitari"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gɔrɔhenelandi"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Ganbi"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gwadelup"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Gine ekwatɔri"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gɛrɛsi"_s)
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
			$of("Gine Bisawo"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gwiyana"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hɔndirasi"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroasi"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Ayiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Hɔngri"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Ɛndonezi"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Isirayeli"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Ɛndujamana"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Angilɛ ka ɛndu dugukolo"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Iraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Isilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Itali"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Zamayiki"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Zɔrdani"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Zapɔn"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Keniya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirigizisitaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kamboji"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Komɔri"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Kristɔfo-Senu-ni-Ɲevɛs"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Kɛɲɛka Kore"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Worodugu Kore"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Kowɛti"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Bama Gun"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazakistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Layosi"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Libaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Lusi-Senu"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lisɛnsitayini"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sirilanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberiya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituyani"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Likisanburu"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letoni"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libi"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Marɔku"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Molidavi"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagasikari"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marisali Gun"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanimari"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Moŋoli"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Kɛɲɛka Mariyani Gun"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Maritiniki"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mɔritani"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Moŋsera"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malti"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivi"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksiki"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Malɛzi"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozanbiki"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibi"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledoni Koura"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Nizɛri"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Nɔrofoliki Gun"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nizeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Peyiba"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Nɔriwɛzi"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nawuru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Nyuwe"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Zelandi Koura"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Omaŋ"_s)
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
			$of("Faransi ka polinezi"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papuwasi-Gine-Koura"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipini"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakisitaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Poloɲi"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Piyɛri-Senu-ni-Mikelɔŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitikarini"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Pɔrotoriko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palesitini"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Pɔritigali"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palawu"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguwayi"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katari"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reyuɲɔŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumani"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Irisi"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabiya Sawudiya"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomo Gun"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sesɛli"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sudaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Suwɛdi"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Sɛngapuri"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Ɛlɛni Senu"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Sloveni"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slowaki"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Siyera Lewɔni"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("Marini-Senu"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegali"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinami"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sawo Tome-ni-Prinicipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Salivadɔr"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siri"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swazilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turiki Gun ni Kayiki"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Cadi"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tayilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelo"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Kɔrɔn Timɔr"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turikimenisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunizi"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turiki"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinite-ni-Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tayiwani"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzani"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ukɛrɛni"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugwayi"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzebekisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatikaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Vinisɛn-Senu-ni-Grenadini"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuwela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Angilɛ ka Sungurunnin Gun"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Ameriki ka Sungurunnin Gun"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Wiyɛtinamu"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuwatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Walisi-ni-Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samowa"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Yemɛni"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayoti"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Worodugu Afriki"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zanbi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabuwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akankan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amarikikan"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("larabukan"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("biyelorisikan"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("buligarikan"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bamanakan"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"bɛngalikan"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"cɛkikan"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"alimaɲikan"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"gɛrɛsikan"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"angilɛkan"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"esipaɲolkan"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("perisanikan"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("tubabukan"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("awusakan"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("inidikan"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"oŋirikan"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Ɛndonezikan"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igibokan"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italikan"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"zapɔnekan"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javanekan"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("kambojikan"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("korekan"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malɛzikan"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birimanikan"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalekan"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("olandekan"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pɛnijabikan"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polonekan"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"pɔritigalikan"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumanikan"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("irisikan"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("ruwandakan"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somalikan"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"suwɛdikan"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamulikan"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("tayikan"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turikikan"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukɛrɛnikan"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urudukan"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"wiyɛtinamukan"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yorubakan"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("siniwakan"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulukan"_s)
		})
	}));
	return data;
}

LocaleNames_bm::LocaleNames_bm() {
}

$Class* LocaleNames_bm::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bm, name, initialize, &_LocaleNames_bm_ClassInfo_, allocate$LocaleNames_bm);
	return class$;
}

$Class* LocaleNames_bm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun