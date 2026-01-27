#include <sun/util/resources/cldr/ext/LocaleNames_to.h>

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

$MethodInfo _LocaleNames_to_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_to, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_to, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_to_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_to",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_to_MethodInfo_
};

$Object* allocate$LocaleNames_to($Class* clazz) {
	return $of($alloc(LocaleNames_to));
}

void LocaleNames_to::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_to::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Māmani"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"ʻAfilika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"ʻAmelika tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"ʻAmelika tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ʻOsēnia"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"ʻAfilika fakahihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"ʻAmelika lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"ʻAfilika fakahahake"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"ʻAfilika fakatokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"ʻAfilika lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"ʻAfilika fakatonga"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Ongo ʻAmelika"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"ʻAmelika fakatokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Kalipiane"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"ʻĒsia fakahahake"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"ʻĒsia fakatonga"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"ʻĒsia fakatongahahake"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"ʻEulope fakatonga"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ʻAositelēlēsia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melanīsia"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Potu fonua Mikolonīsia"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polinīsia"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"ʻĒsia"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"ʻĒsia lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"ʻĒsia fakahihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ʻEulope"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"ʻEulope fakahahake"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"ʻEulope fakatokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"ʻEulope fakahihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"ʻAfilika fakasahala-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ʻAmelika fakalatina"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Motu ʻAsenisini"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ʻAnitola"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"ʻAlepea Fakatahataha"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ʻAfikānisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Anitikua mo Palaputa"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anikuila"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"ʻAlipania"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ʻĀmenia"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"ʻAngikola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"ʻAnitātika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ʻAsenitina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Haʻamoa ʻAmelika"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ʻAositulia"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ʻAositelēlia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"ʻAlupa"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ʻOtumotu ʻAlani"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"ʻAsapaisani"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Posinia mo Hesikōvina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Pāpeitosi"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Pengilātesi"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Pelesiume"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Pekano Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Pulukalia"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Paleini"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Puluniti"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Penini"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Sā Patēlemi"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Pēmuta"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Pulunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Polīvia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Kalipiane fakahōlani"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Palāsili"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Pahama"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Pūtani"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Motu Puveti"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Potisiuana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Pelalusi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Pelise"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Kānata"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"ʻOtumotu Koko"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo - Kinisasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Lepupelika ʻAfilika Lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Palasavila"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Matafonua ʻAivolī"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"ʻOtumotu Kuki"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Sili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kameluni"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Siaina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolomipia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Motu Kilipatoni"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosita Lika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kiupa"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Muiʻi Vēte"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kulasao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Motu Kilisimasi"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Saipalesi"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Sēkia"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Siamane"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Tieko Kāsia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Siputi"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Tenimaʻake"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Tominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Lepupelika Tominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"ʻAlisilia"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Siuta mo Melila"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ʻEkuetoa"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ʻEsitōnia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ʻIsipite"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahala fakahihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ʻElitulia"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Sipeini"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ʻĪtiōpia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"ʻEulope fakatahataha"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"ʻEulope fekauʻaki-paʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finilani"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fisi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ʻOtumotu Fokulani"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikolonīsia"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ʻOtumotu Faloe"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Falanisē"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Kaponi"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Pilitānia"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Kelenatā"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Seōsia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Kuiana fakafalanisē"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Kuenisī"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Kana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Sipalālitā"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Kulinilani"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Kamipia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Kini"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Kuatalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ʻEkueta Kini"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Kalisi"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"ʻOtumotu Seōsia-tonga mo Saniuisi-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Kuatamala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Kuamu"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Kini-Pisau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Kuiana"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongi Kongi SAR Siaina"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ʻOtumotu Heati mo Makitonali"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honitulasi"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kuloisia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungakalia"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"ʻOtumotu Kaneli"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ʻInitonēsia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ʻAealani"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ʻIsileli"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Motu Mani"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ʻInitia"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Potu fonua moana ʻInitia fakapilitānia"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ʻIlaaki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ʻIlaani"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ʻAisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ʻĪtali"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Selusī"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Samaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Soatane"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Siapani"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Keniā"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kīkisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kamipōtia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kilipasi"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komolosi"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Sā Kitisi mo Nevisi"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Kōlea tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Kōlea tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kueiti"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"ʻOtumotu Keimeni"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasakitani"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Lau"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lepanoni"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Sā Lūsia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Likitenisiteini"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Sīlangikā"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Laipelia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lakisimipeki"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lativia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Līpia"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Moloko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Molotova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Monitenikalo"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Sā Mātini (fakafalanisē)"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Matakasika"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"ʻOtumotu Māsolo"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Masetōnia fakatokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Māli"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mianimā (Pema)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mongokōlia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Makau SAR Siaina"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"ʻOtumotu Maliana tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Mātiniki"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Maulitenia"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Moʻungaselati"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malita"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Maulitiusi"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malativisi"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malaui"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mekisikou"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Malēsia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mosēmipiki"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namipia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Niu Kaletōnia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nisia"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Motu Nōfoliki"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Naisilia"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikalakua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Hōlani"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Noauē"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Naulu"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Niuē"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nuʻusila"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ʻOmani"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panamā"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Pelū"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinisia fakafalanisē"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papuaniukini"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipaini"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pākisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polani"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Sā Piea mo Mikeloni"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"ʻOtumotu Pitikeni"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Puēto Liko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Potu Palesitaine"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Potukali"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Palakuai"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Katā"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"ʻOsēnia mamaʻo"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Lēunioni"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Lomēnia"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Sēpia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Lūsia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Luanitā"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saute ʻAlepea"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"ʻOtumotu Solomone"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"ʻOtumotu Seiseli"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sūteni"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Suēteni"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapoa"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Sā Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Silōvenia"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Sivolopāti mo Sani Maieni"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Silōvakia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siela Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Sā Malino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senekalo"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Sōmalia"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suliname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Sūtani fakatonga"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tomē mo Pilinisipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ʻEle Salavatoa"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Sā Mātini (fakahōlani)"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Sīlia"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"ʻEsuatini"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tulisitani ta Kunuha"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"ʻOtumotu Tuki mo Kaikosi"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Sāti"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Potu fonua tonga fakafalanisē"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Toko"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailani"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tasikitani"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timoa fakahahake"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Tūkimenisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunīsia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Toake"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Tilinitati mo Topako"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Tūvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiuani"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tenisānia"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ʻŪkalaʻine"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ʻIukanitā"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ʻOtumotu siʻi ʻo ʻAmelika"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"ʻŪ fonua fakatahataha"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Puleʻanga fakatahataha ʻAmelika"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ʻUlukuai"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ʻUsipekitani"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Kolo Vatikani"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Sā Viniseni mo Kulenatini"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venesuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ʻOtumotu Vilikini fakapilitānia"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ʻOtumotu Vilikini fakaʻamelika"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietinami"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ʻUvea mo Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Haʻamoa"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"fasiʻalea loi"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("fua-ua loi"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Kōsovo"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Iemeni"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Maiote"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"ʻAfilika tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Semipia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simipapuei"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Potu fonua taʻeʻiloa pe hala"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"lea fakaʻafāla"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"lea fakaʻapakasia"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"lea fakaʻavesitani"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"lea fakaʻafilikana"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"lea fakaʻakani"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"lea fakaʻameliki"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"lea fakaʻalakoni"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"lea fakaʻalepea"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"lea fakaʻasamia"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"lea fakaʻavaliki"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"lea fakaʻaimala"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"lea fakaʻasapaisani"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("lea fakapasikili"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("lea fakapelalusi"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("lea fakapulukalia"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("lea fakapisilama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("lea fakapamipala"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"lea fakapāngilā"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("lea fakatipeti"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("lea fakapeletoni"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("lea fakaposinia"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("lea fakakatalani"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("lea fakasese"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("lea fakakamolo"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"lea fakakōsika"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"lea fakakelī"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("lea fakaseki"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("lea fakasilavia-fakasiasi"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("lea fakasuvasa"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"lea fakauēlesi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"lea fakatenimaʻake"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("lea fakasiamane"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("lea fakativehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"lea fakatisōngika"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"lea fakaʻeue"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("lea fakakalisi"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"lea fakapālangi"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"lea fakaʻesipulanito"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"lea fakasipēnisi"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"lea fakaʻesitōnia"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"lea fakapāsiki"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"lea fakapēsia"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"lea fakafulā"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("lea fakafinilani"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("lea fakafisi"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("lea fakafaloe"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"lea fakafalanisē"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("lea fakafilisia-hihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"lea fakaʻaelani"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("lea fakakaeliki"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("lea fakakalisia"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("lea fakakualani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("lea fakakutalati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"lea fakamangikī"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("lea fakahausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"lea fakahepelū"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"lea fakahinitī"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("lea fakahili-motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("lea fakakuloisia"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("lea fakahaiti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("lea fakahungakalia"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"lea fakaʻāmenia"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("lea fakahelelo"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"lea fakavahaʻalea"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"lea fakaʻinitōnesia"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"lea fakavahaʻalingikē"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"lea fakaʻikipō"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"lea fakasisiuani-ī"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"lea fakaʻinupiaki"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"lea fakaʻito"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"lea fakaʻaisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"lea fakaʻītali"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"lea fakaʻinuketituti"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("lea fakasiapani"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("lea fakasava"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"lea fakaseōsia"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"lea fakakongikō"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("lea fakakikuiu"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("lea fakakuaniama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("lea fakakasaki"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"lea fakakalaʻalisuti"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"lea fakakamipōtia"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("lea fakakanata"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"lea fakakōlea"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("lea fakakanuli"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"lea fakakāsimila"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"lea fakakulitī"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("lea fakakomi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("lea fakakoniuali"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"lea fakakīsisi"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("lea fakalatina"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("lea fakalakisimipeki"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("lea fakakanita"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"lea fakalimipūliki"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lea lingikala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("lea fakalau"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lea fakalituania"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("lea fakalupa-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("lea fakalativia"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("lea fakamalakasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"lea fakamāsolo"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("lea fakamauli"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"lea fakamasitōnia"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"lea fakaʻinitia-malāialami"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"lea fakamongokōlia"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("lea fakamalati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("lea fakamalei"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("lea fakamalita"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("lea fakapema"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("lea fakanaulu"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"lea fakanouaē-pokimali"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("lea fakanetepele-tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("lea fakanepali"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"lea fakanetongikā"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"lea fakahōlani"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"lea fakanoauē-ninosiki"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"lea fakanouaē"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("lea fakanetepele-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("lea fakanavaho"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("lea fakanianisa"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"lea fakaʻokitane"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"lea fakaʻosipiuā"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"lea fakaʻolomo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"lea faka-ʻotia"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"lea fakaʻosetiki"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"lea fakapūnusapi"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"lea fakapāli"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("lea fakapolani"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"lea fakapasitō"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("lea fakapotukali"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("lea fakakuetisa"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"lea fakalaito-lomēnia"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("lea fakaluaniti"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"lea fakalōmenia"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"lea fakalūsia"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"lea fakakiniāuanita"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("lea fakasanisukuliti"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"lea fakasaletīnia"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"lea fakasīniti"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("lea fakasami-tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"lea fakasangikō"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"lea fakakuloisia-sēpia"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("lea fakasingihala"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"lea fakasolāvaki"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("lea fakasolovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"lea fakahaʻamoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("lea fakasiona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("lea fakasomali"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"lea fakaʻalapēnia"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"lea fakasēpia"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("lea fakasuati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("lea fakasoto-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"lea fakasunitā"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"lea fakasuēteni"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("lea fakasuahili"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("lea fakatamili"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"lea fakaʻinitia-teluku"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"lea fakatāsiki"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("lea fakatailani"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("lea fakatikilinia"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"lea fakatēkimeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"lea fakatakāloka"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("lea fakatisuana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("lea fakatonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("lea fakatoake"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("lea fakatisonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("lea fakatatale"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"lea fakatusuī"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("lea fakatahiti"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"lea fakaʻuikūli"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"lea fakaʻūkalaʻine"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"lea fakaʻūtū"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"lea fakaʻusipeki"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"lea fakavenitā"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("lea fakavietinami"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("lea fakavolapiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"lea fakaʻualonia"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"lea fakaʻuolofo"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"lea fakatōsa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"lea fakaītisi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"lea fakaʻiōlupa"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("lea fakasuangi"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("lea fakasiaina"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("lea fakasulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"lea fakaʻatisē"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"lea fakaʻakoli"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"lea fakaʻatangimē"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"lea fakaʻatikē"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"lea fakaʻalepea-tunīsia"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"lea fakaʻafilihili"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"lea fakaʻakihemi"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"lea fakaʻainu"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"lea fakaʻakatia"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"lea fakaʻalapama"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"lea fakaʻaleuti"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"lea fakaʻalapēnia-keki"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"lea fakaʻalitai-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"lea fakapālangi-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"lea fakaʻangika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"lea fakaʻalāmiti"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("lea fakamapuse"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"lea fakaʻalaona"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"lea fakaʻalapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"lea fakaʻalepea-ʻaisilia"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"lea fakaʻalauaki"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"lea fakaʻalepea-moloko"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"lea fakaʻalepea-ʻisipite"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"lea fakaʻasu"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"lea fakaʻilonga-ʻamelika"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"lea fakaʻasitūlia"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("lea fakakotava"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"lea fakaʻauati"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("lea fakapalusi"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("lea fakapali"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"lea fakapavālia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"lea fakapasaʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("lea fakapamuni"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"lea fakatōpe-pēteki"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("lea fakakomala"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("lea fakapesa"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"lea fakapēmipa"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("lea fakapetavi"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("lea fakapena"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("lea fakapafuti"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of("lea fakapataka"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("lea fakapalusi-hihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("lea fakaposipuli"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("lea fakapikoli"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("lea fakapini"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("lea fakapanisali"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("lea fakakome"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"lea fakasikesikā"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("lea fakapisinupilia"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"lea fakapakitiāli"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("lea fakapalai"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("lea fakapalahui"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"lea fakapōto"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"lea fakaʻakōse"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("lea fakapuliati"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("lea fakapukisi"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("lea fakapulu"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("lea fakapilini"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"lea fakametūmipa"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("lea fakakato"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("lea fakakalipa"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("lea fakakaiuka"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"lea fakaʻatisami"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"lea fakasākima"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("lea fakasepuano"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("lea fakakika"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"lea fakasīpisa"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"lea fakasakatāi"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"lea fakatūke"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"lea fakamalī"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("lea fakasinuki-takote"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("lea fakasokitau"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("lea fakasipeuiani"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"lea fakaselokī"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("lea fakaseiene"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"lea fakakūtisi-loloto"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("lea fakakopitika"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("lea fakakapiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("lea fakatoake-kilimea"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"lea fakaseselua-falanisē"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("lea fakakasiupia"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("lea fakatakota"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"lea fakatalakuā"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("lea fakataita"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("lea fakatelauale"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("lea fakasilave"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"lea fakatōkelipi"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"lea fakatingikā"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"lea fakatisāma"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("lea fakatokili"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"lea fakasōpia-hifo"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of("lea fakatusuni-loloto"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("lea fakatuala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"lea fakahōlani-lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"lea fakaiola-fonī"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("lea fakatiula"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("lea fakatasaka"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"lea fakaʻemipū"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"lea fakaʻefiki"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"lea fakaʻemilia"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"lea fakaʻisipitemuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"lea fakaʻekaiuki"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"lea fakaʻelamite"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"lea fakapālangi-lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"lea fakaiūpiki-loloto"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"lea fakaʻeuōnito"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"lea fakaʻekisitematula"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("lea fakafangi"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"lea fakafanitē"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("lea fakafilipaini"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"lea fakafinilani-tōnetale"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"lea fakafōngi"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"lea fakafalanisē-kasuni"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"lea fakafalanisē-lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"lea fakafalanisē-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"lea fakaʻāpitano"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("lea fakafilisia-tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("lea fakafilisia-hahake"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"lea fakafulilāni"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"lea fakakā"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("lea fakakakausi"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("lea fakasiaina-kani"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("lea fakakaio"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("lea fakakapaia"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of("lea fakateli-soloasitelia"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"lea fakasiʻisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("lea fakakilipasi"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("lea fakakilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("lea fakasiamane-hake-lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"lea fakasiamane-hake-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"lea fakakonikanī-koani"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"lea fakakonitī"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("lea fakakolonitalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("lea fakakotika"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"lea fakakēpo"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"lea fakakalisimuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("lea fakasiamane-suisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"lea fakaʻuaiū"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("lea fakafalefale"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"lea fakakusī"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"lea fakaʻuīsini"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("lea fakahaita"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("lea fakasiaina-haka"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"lea fakahauaiʻi"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"lea fakahinitī-fisi"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("lea fakahilikainoni"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("lea fakahitite"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"lea fakamōngi"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"lea fakasōpia-hake"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("lea fakasiaina-siangi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("lea fakahupa"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"lea fakaʻipani"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"lea fakaʻipipio"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"lea fakaʻiloko"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"lea fakaʻingusi"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"lea fakaʻingiliani"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"lea fakapālangi-samaika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lea fakalosipani"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"lea fakanikōmipa"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("lea fakamasame"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"lea fakaʻiuteo-pēsia"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"lea fakaʻiuteo-ʻalepea"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"lea fakaʻiutilani"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("lea fakakala-kalipaki"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("lea fakakapile"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("lea fakakasini"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"lea fakasisū"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("lea fakakamipa"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("lea fakakavi"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"lea fakakapālitia"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"lea fakakanēmipu"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("lea fakatiapi"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"lea fakamakōnite"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("lea fakakapuvelitianu"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("lea fakakeniangi"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("lea fakakolo"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("lea fakakaingangi"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"lea fakakāsi"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"lea fakakōtani"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"lea fakakoila-sīni"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of("lea fakakouali"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"lea fakakilimanisikī"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("lea fakakako"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("lea fakakalenisini"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"lea fakakimipūnitu"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("lea fakakomi-pelemiaki"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"lea fakakonikanī"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("lea fakakosilae"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("lea fakakepele"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("lea fakakalate-palakili"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("lea fakakilio"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of(u"lea fakakinaraiā"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("lea fakakalelia"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("lea fakakuluki"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("lea fakasiamipala"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("lea fakapafia"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("lea fakakolongia"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("lea fakakumiki"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("lea fakakutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("lea fakalatino"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("lea fakalangi"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"lea fakalānita"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"lea fakalamipā"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lea fakalesikia"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"lea fakakavakava-foʻou"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("lea fakalikulia"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("lea fakalivonia"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lea fakalakota"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"lea fakalomipāti"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"lea fakamongikō"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lea fakalosi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("lea fakaluli-tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("lea fakalatakale"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("lea fakalupa-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("lea fakaluiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"lea fakalunitā"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("lea fakaluo"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("lea fakamiso"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"lea fakaluīa"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"lea fakasiaina-faʻutohi"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of("lea fakalasu"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("lea fakamatula"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("lea fakamafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("lea fakamakahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("lea fakamaitili"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("lea fakamakasali"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"lea fakamanitīngiko"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("lea fakamasai"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("lea fakamapa"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"lea fakamokisiā"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("lea fakamanetali"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"lea fakamenetī"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("lea fakamelu"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("lea fakamolisieni"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"lea fakaʻaelani-lotoloto"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"lea fakamakūa-meʻeto"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"lea fakametā"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("lea fakamikemaki"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("lea fakaminangikapau"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"lea fakamanisū"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("lea fakamanipuli"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("lea fakamohauki"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("lea fakamosi"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("lea fakamali-hihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("lea fakamunitangi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("lea tuifio"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("lea fakakileki"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"lea fakamilanitēsi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("lea fakamaliwali"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("lea fakamenitauai"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("lea fakamiene"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"lea fakaʻelisia"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("lea fakamasanitelani"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("lea fakasiaina-mininani"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("lea fakanapoletano"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("lea fakanama"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("lea fakasiamane-hifo"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("lea fakaneuali"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("lea fakaniasi"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"lea fakaniuē"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"lea fakaʻaonasa"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("lea fakakuasio"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"lea fakangiemipōni"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("lea fakanokai"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"lea fakanoauē-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of("lea fakanoviale"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"lea fakanikō"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("lea fakasoto-tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("lea fakanueli"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"lea fakaneuali-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("lea fakaniamiuesi"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("lea fakanianikole"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("lea fakaniolo"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("lea fakanesima"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"lea fakaʻosēse"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"lea fakatoake-ʻotomani"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("lea fakapangasinani"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"lea fakapālavi"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("lea fakapamipanga"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"lea fakapapiamēnito"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("lea fakapalau"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"lea fakapikāti"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("lea fakanaisilia"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of("lea fakasiamane-penisilivania"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("lea fakasiamane-lafalafa"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"lea fakapēsia-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("lea fakasiamane-palatine"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("lea fakafoinikia"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("lea fakapiemonite"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("lea fakaponitiki"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"lea fakaponapē"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"lea fakapulūsia"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"lea fakapolovenisi-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"lea fakakīsē"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of("lea fakakuitisa-simipolaso"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("lea fakalasasitani"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("lea fakalapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("lea fakalalotonga"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("lea fakalomaniolo"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("lea fakalifi"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"lea fakalomipō"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("lea fakalomani"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("lea fakalotuma"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("lea fakalusini"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("lea fakaloviana"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"lea fakaʻalomania"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"lea fakaluā"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("lea fakasanitaue"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("lea fakasaka"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"lea fakasamalitani-ʻalāmiti"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("lea fakasamipulu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("lea fakasasaki"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("lea fakasanitali"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(u"lea fakasaulasitilā"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"lea fakangāmipai"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("lea fakasangu"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"lea fakasisīlia"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("lea fakasikotilani"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"lea fakasaletīnia-sasalesu"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"lea faka-tonga ‘o Ketesi"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("lea fakaseneka"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("lea fakasena"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("lea fakaseli"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("lea fakaselikupi"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("lea fakakoilapolo-seni"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"lea fakaʻaelani-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of("lea fakasamositia"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("lea fakataselihiti"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("lea fakasiani"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"lea fakaʻalepea-sāti"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("lea fakasitamo"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("lea fakasilesia-hifo"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of(u"lea fakaselaiā"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("lea fakasami-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("lea fakasami-lule"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"lea fakasami-ʻinali"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("lea fakasami-sikolita"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"lea fakasoninekē"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("lea fakasokitiana"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"lea fakasulanane-tongikō"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"lea fakasēlēle"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("lea fakasaho"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"lea fakafilisia-satēlani"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("lea fakasukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"lea fakasusū"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("lea fakasumelia"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("lea fakakomolo"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"lea fakasuliāiā-muʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"lea fakasuliāiā"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lea fakasilesia"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("lea fakatulu"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"lea fakatimenē"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("lea fakateso"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("lea fakateleno"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("lea fakatetumu"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"lea fakatikilē"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("lea fakativi"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("lea fakatokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"lea fakasākuli"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("lea fakakilingoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"lea fakatilingikīte"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("lea fakatalisi"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("lea fakatamasieki"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("lea fakaniasa-tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("lea fakatoki-pisini"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("lea fakatuloio"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("lea fakataloko"_s)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of(u"lea fakasakōnia"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"lea fakatisīmisiani"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("lea fakatati-moselemi"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("lea fakatumepuka"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"lea fakatūvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("lea fakatasauaki"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"lea fakatuvīnia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"lea fakatamasaiti-ʻatilasi-loloto"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"lea fakaʻutimuliti"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"lea fakaʻūkaliti"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"lea fakaʻumipūnitu"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"lea taʻeʻiloa"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("lea fakavai"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"lea fakavenēsia"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("lea fakavepisi"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of("lea fakavelamingi-hihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of("lea fakafalanikoni-loloto"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("lea fakavotiki"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"lea fakavōlo"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"lea fakavūniso"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"lea fakaʻualiseli"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"lea fakaʻuolaita"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"lea fakaʻualai"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"lea fakaʻuasiō"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"lea fakaʻuālipili"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"lea fakasiaina-uū"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("lea fakakalimiki"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("lea fakamingilelia"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("lea fakasoka"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"lea fakaʻiao"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"lea fakaʻiapi"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"lea fakaʻiangipeni"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"lea fakaʻiēmipa"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of(u"lea fakaneʻēngatū"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("lea fakakuangitongi"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("lea fakasapoteki"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"lea fakaʻilonga-pilisi"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"lea fakasēlani"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("lea fakasenaka"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("lea fakatamasaiti-moloko"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("lea fakasuni"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ʻikai ha lea"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"lea fakasāsā"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"tohinima fakaʻafaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"tohinima fakaʻalapēnia-kaukasia"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"tohinima fakaʻalepea"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"tohinima fakaʻalāmiti-ʻemipaea"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"tohinima fakaʻāmenia"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"tohinima fakaʻavesitani"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("tohinima fakapali"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("tohinima fakapamumi"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"tohinima fakapasa-vā"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"tohinima fakapātaki"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"tohinima fakapāngilā"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"tohinima fakaʻilonga-pilisi"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("tohinima fakapopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"tohinima fakapalāmī"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("tohinima laukonga ki he kui"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("tohinima fakapukisi"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("tohinima fakapuhiti"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"tohinima fakasakimā"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"tohinima fakatupuʻi-kānata-fakatahataha"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("tohinima fakakali"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("tohinima fakasami"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"tohinima fakaselokī"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"tohinima fakakīliti"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("tohinima fakakopitika"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("tohinima fakasaipalesi"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"tohinima fakalūsia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"tohinima fakalūsia-lotu-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"tohinima fakaʻinitia-tevanākalī"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("tohinima fakateseleti"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"tohinimanounou fakatupoloiē"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"tohinima temotika-fakaʻisipite"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"tohinima hielatika-fakaʻisipite"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"tohinima tongitapu-fakaʻisipite"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"tohinima fakaʻelepasani"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"tohinima fakaʻītiōpia"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"tohinima fakakutusuli-seōsia"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"tohinima fakaseōsia"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("tohinima fakakalakoliti"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("tohinima fakakotika"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"tohinima fakasilanitā"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("tohinima fakakalisi"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"tohinima fakaʻinitia-kutalati"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"tohinima fakakūmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"tohinima fakahānipi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"tohinima fakakōlea-hāngūlu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("tohinima fakasiaina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"tohinima fakahanunōʻo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("tohinima fakasiaina-fakafaingofua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tohinima fakasiaina-tukufakaholo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"tohinima fakahepelū"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("tohinima fakasiapani-hilakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"tohinima tongitapu-fakaʻanatolia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("tohinima fakapahaumongi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("tohinima fakasilapa-siapani"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"tohinima fakahungakalia-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"tohinima fakaʻinitusi"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"tohinima fakaʻītali-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("tohinima fakasamo"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("tohinima fakasava"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("tohinima fakasiapani"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"tohinima fakaiūkeni"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"tohinima fakakaialī"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("tohinima fakasiapani-katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"tohinima fakakalositī"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"tohinima fakakamipōtia"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"tohinima fakakosikī"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"tohinima fakaʻinitia-kanata"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"tohinima fakakōlea"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of("tohinima fakakepele"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"tohinima fakakaiatī"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("tohinima fakalana"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("tohinima fakalau"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("tohinima fakalatina-falakituli"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("tohinima fakalatina-kaeliki"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("tohinima fakalatina"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"tohinima fakalepasā"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"tohinima fakalimipū"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("tohinima fakalinea-A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("tohinima fakalinea-P"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"tohinima fakafalāse"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("tohinima fakaloma"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"tohinima fakalīsia"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"tohinima fakalītia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("tohinima fakamahasani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("tohinima fakamanitaea"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("tohinima fakamanikaea"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("tohinima tongitapu fakamaia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"tohinima fakamēniti"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("tohinima fakameloue-heihei"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("tohinima fakameloue"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"tohinima fakaʻinitia-malāialami"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of(u"tohinima fakamotī"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"tohinima fakamongokōlia"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"tohinima laukonga ki he kui-māhina"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"tohinima fakamolō"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("tohinima fakametei-maieki"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("tohinima fakapema"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"tohinima fakaʻalepea-tokelau-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("tohinima fakanapatea"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("tohinima fakanati-sepa"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"tohinima fakanikō"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"tohinima fakanasiū"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"tohinima fakaʻokami"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"tohinima fakaʻolisiki"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"tohinima fakaʻolikoni"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"tohinima fakaʻotia"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"tohinima fakaʻosimānia"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("tohinima fakapalamilene"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("tohinima fakapausinihau"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"tohinima fakapēmi-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"tohinima fakapākisipā"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"tohinima fakapālavi-tongi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"tohinima fakapālavi-saame"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"tohinima fakapālavi-tohi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of("tohinima fakafoinikia"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"tohinima fakafonētiki-polāti"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"tohinima fakapātia-tongi"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("tohinima fakalesiangi"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("tohinima fakalongolongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("tohinima fakaluniki"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("tohinima fakasamalitane"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("tohinima fakasalati"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"tohinima fakaʻalepea-tonga-motuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"tohinima fakasaulasitā"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"tohinima fakaʻilonga-tohi"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("tohinima fakasiavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"tohinima fakasiālatā"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("tohinima fakasititami"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"tohinima fakakutauāti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("tohinima fakasingihala"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("tohinima fakasolasomipengi"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"tohinima fakasunitā"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("tohinima fakasailoti-nakili"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"tohinima fakasuliāiā"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"tohinima fakasuliāiā-ʻesitelangelo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"tohinima fakasuliāiā-hihifo"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"tohinima fakasuliāiā-hahake"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"tohinima fakatakipaneuā"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("tohinima fakatakili"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("tohinima fakatai-lue"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"tohinima fakatai-lue-foʻou"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tohinima fakatamili"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("tohinima fakatanguti"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tohinima fakatai-vieti"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"tohinima fakaʻinitia-teluku"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("tohinima fakatengiuali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"tohinima fakatifināki"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("tohinima fakatakaloka"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"tohinima fakatāna"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("tohinima fakatailani"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tohinima fakataipeti"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"tohinima fakatīhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"tohinima fakaʻūkaliti"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("tohinima fakavai"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"tohinima fakafonētiki-hāmai"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"tohinima fakavalangi-kisitī"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("tohinima fakauoleai"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"tohinima fakapēsiamuʻa"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"tohinima fakamataʻingahau-sumelo-akatia"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"tohinima fakaīī"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("tohinima hokosi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("tohinima fakamatematika"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"tohinima fakatātā"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"tohinima fakaʻilonga"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"tohinima taʻetohitohiʻi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("tohinima fakatatau"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"tohinima taʻeʻiloa"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"lea fakasiamane-ʻaositulia"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("lea fakasiamane-hake-suisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"lea fakapālangi-ʻaositelēlia"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"lea fakapālangi-kānata"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"lea fakapilitānia"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"lea fakapālangi-ʻamelika"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"lea fakasipeini-ʻeulope"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("lea fakasipeini-mekisikou"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"lea fakafalanisē-kānata"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"lea fakafalanisē-suisilani"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"lea fakahōlani-pelesiume"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"lea fakapotukali-palāsili"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"lea fakapotukali-ʻiulope"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"lea fakamolitāvia"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"lea fakasuahili-kongikō"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"lea fakaʻalepea (māmani)"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"lea fakasipeini-lātini-ʻamelika"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"tohi māhina"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"anga paʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("tohi hokohoko"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"paʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("takai houa"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"fesiʻilaine"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("founga fakafuofua"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("fika"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("lea fakasakisoni-hifo"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("lea fakasiaina-fakafaingofua"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("lea fakasiaina-tukufakaholo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("fakalepupelika siaina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"takai houa 0–11"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"takai houa 1–12"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"takai houa 0–23"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"takai houa 1–24"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"fika fakaʻalepea"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"fika fakaʻāmenia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"faka fakapāngilā"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"fika fakatevanākalī"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"fika fakaʻītiōpia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"fika fakaseōsia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("fika fakakalisi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("fika fakakutalati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"fika fakakūmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("fika fakasiaina fakafaingofua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("fika fakasiaina tukufakaholo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"fika fakahepelū"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("fika fakasiapani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"fika fakakamipōtia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("fika fakakanata"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("fika fakalau"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("fika fakalatina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"fika fakamalāialami"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("fika fakapema"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"fika fakanikō"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"fika fakaʻotia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("fika fakatamili tukufakaholo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("fika fakateluku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("fika fakatailani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("fika fakatipeti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("fakataniki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ʻunikōti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"fesiʻilaine ngaloku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("fika fakaloma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"fakahepelū"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"fakaʻinitia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"fakakumi ʻi hono anga lahi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"fesiʻilaine faʻafai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"fesiʻilaine mafao"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("founga fakamita"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("fakasiaina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("fakamohameti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("faka-iso8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"fakapēsia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"anga paʻanga-kalake"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"fika fakaʻalepea fakalahi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"fika fakaʻāmenia fakalalo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("fika fakakalisi fakalalo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("fika fakasiaina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"fika fakasiaina fakafaingofua fakapaʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"fika fakasiaina tukufakaholo fakapaʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"fika fakasiapani fakapaʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("fika fakatamili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("fakaputa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"fakaʻītiōpia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("fakasiapani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"anga paʻanga-sīpinga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"fakasīpinga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"founga fakapilitānia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"founga fakaʻamelika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("fika laulahi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("fika fakaloma fakalalo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("fakakelekolia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("fika telefoni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("tukufakaholo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("fakamohameti-sivile"_s)
		})
	}));
	return data;
}

LocaleNames_to::LocaleNames_to() {
}

$Class* LocaleNames_to::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_to, name, initialize, &_LocaleNames_to_ClassInfo_, allocate$LocaleNames_to);
	return class$;
}

$Class* LocaleNames_to::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun