#include <sun/util/resources/cldr/ext/LocaleNames_eu.h>

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

$MethodInfo _LocaleNames_eu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_eu, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_eu, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_eu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_eu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_eu_MethodInfo_
};

$Object* allocate$LocaleNames_eu($Class* clazz) {
	return $of($alloc(LocaleNames_eu));
}

void LocaleNames_eu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_eu::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_si, "sinhala"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("koloniera"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirandera"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("ikurrak"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emotikonoa"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("chakmera"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temnea"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("tesoera"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapa nui"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension uhartea"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongera"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Arabiar Emirerri Batuak"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flandriera"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua eta Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Egutegi etiopiarra"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Aingira"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Ordu-zona"_s)
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
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antartika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Estatubatuarra"_s)
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
			$of("en_US"_s),
			$of("AEBko ingeles"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("cebuera"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumykera"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgika"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaria"_s)
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
			$of("myv"_s),
			$of("erziera"_s)
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
			$of("BQ"_s),
			$of("Karibeko Herbehereak"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamak"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("sogera"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvet uhartea"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bielorrusia"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("Egutegi persiarra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Zenbaki hebrearrak"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Cocos (Keeling) uharteak"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazandarandera"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongoko Errepublika Demokratikoa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Afrika Erdiko Errepublika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suitza"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Boli Kosta"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cook uharteak"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Txile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Txina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolonbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton uhartea"_s)
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
			$of("Cabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Christmas uhartea"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Zipre"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Txekia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("akajuka"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemania"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("acehnera"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("chigera"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Diego García"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Digitu devanagariak"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danimarka"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("acholiera"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("braillea"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("Zenbaki armeniarrak minuskulaz"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikar Errepublika"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontaloa"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"zuñia"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigrea"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinanera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Zabalera erdiko karaktere-bihurketa"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta eta Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampangera"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangmera"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipto"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Mendebaldeko Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauera"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuukera"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mariera"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("txerokiera"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Espainia"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Europar Batasuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Egutegi gregoriarra"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eurogunea"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyennera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Digitu gujaratarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigera"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandak"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Eskualdeko ezarpenen aldaera"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Faroe uharteak"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamilarra"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frantzia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Indiar egutegia"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Erresuma Batua"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Nigeriako pidgina"_s)
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
			$of("Guyana Frantsesa"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernesey"_s)
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
			$of("Groenlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Ginea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekuatore Ginea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grezia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Hegoaldeko Georgia eta Hegoaldeko Sandwich uharteak"_s)
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
			$of("Ginea Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingonera"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("erdialdeko kurduera"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("ez dago eduki linguistikorik"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("Austriako aleman"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong Txinako AEB"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard eta McDonald uharteak"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroazia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghemera"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Suitzako aleman"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungaria"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanariak"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napoliera"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("namera"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zazera"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Man uhartea"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Indiako Ozeanoko lurralde britainiarra"_s)
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
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("matematikako notazioa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Digitu thailandiarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Digitu bengalarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Islamiar egutegia"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalarra"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainuera"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusiiera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Digitu kannadarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("Suitzako aleman garai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("Ordenatzeko irizpide fonetikoa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Egutegi budista"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latinoamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kanbodia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoreak"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts eta Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kanadarra"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("Kanadako frantses"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Ipar Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Hego Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("Suitzako frantses"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kaiman uharteak"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("zirilikoa"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libano"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Santa Luzia"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("behe-aleman"_s)
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
			$of("Lituania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxenburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letonia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libia"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langiera"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
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
			$of("Moldavia"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("San Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshall Uharteak"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutera"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("thailandiarra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Vai digituak"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Ipar Mazedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Birmania)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("newarera"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macau Txinako AEB"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Ipar Mariana uharteak"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritania"_s)
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
			$of("type.m0.ungegn"_s),
			$of("UN GEGN transliterazioa"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Maurizio"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("hegoaldeko altaiera"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivak"_s)
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
			$of("type.ca.japanese"_s),
			$of("Japoniar egutegia"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambike"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Saharaz hegoaldeko Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Hebrear egutegia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Hurrenkera alfabetikoa"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledonia Berria"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk uhartea"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("tarokoa"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Herbehereak"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norvegia"_s)
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
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Zeelanda Berria"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angikera"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("Seychelleetako kreolera"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Islamiar egutegi zibila"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Britania Handiko ingeles"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polinesia Frantsesa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Ginea Berria"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinak"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondera"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre eta Mikelune"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn uharteak"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinar Lurralde Okupatuak"_s)
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
			$of("nia"_s),
			$of("niasera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("Zenbaki grekoak minuskulaz"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguai"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbukera"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebrearra"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("ESKOZIAR INGELESA"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niueera"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Mugaz kanpoko Ozeania"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezgiera"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvaluera"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Mundua"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Ipar Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Hego Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojbanera"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Ozeania"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Errumania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Errusia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomon Uharteak"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Afrika mendebaldea"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelleak"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Erdialdeko Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Suedia"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Afrika ekialdea"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Afrika iparraldea"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Lerro-jauziaren estilo zorrotza"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Erdialdeko Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Eslovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Afrika hegoaldea"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard eta Jan Mayen uharteak"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Eslovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leona"_s)
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
			$of("arn"_s),
			$of("maputxe"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("Zenbaki tamilar tradizionalak"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Hego Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome eta Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swazilandia"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("Neurketa-sistema anglosaxoia"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Amerikako iparraldea"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turk eta Caico uharteak"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangbenera"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Txad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Hegoaldeko lurralde frantsesak"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailandia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibea"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Ekialdeko Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Bilatu hangularen lehen kontsonantearen arabera"_s)
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
			$of("Turkia"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad eta Tobago"_s)
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
			$of("ast"_s),
			$of("asturiera"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasiera"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("idazkera ezezaguna"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("aromaniera"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asia ekialdea"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvera"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("Kongoko swahilia"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia hegoaldea"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Asiako hego-ekialdea"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinyin hurrenkera"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa hegoaldea"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Ameriketako Estatu Batuetako Kanpoaldeko Uharte Txikiak"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Nazio Batuak"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Ameriketako Estatu Batuak"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaiiera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Txinera sinplifikatuaren alfabetoa -GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguai"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("prusiera"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Erdialdeko Atlaseko amazigera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Tarteen araberako hurrenkera"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboonera"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikano Hiria"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent eta Grenadinak"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Birjina uharte britainiarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Birjina uharte amerikarrak"_s)
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
			$of("nog"_s),
			$of("nogaiera"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwera"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis eta Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Tradizionala"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesia eskualdea"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lakotera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("Finantza-zenbakiak"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("walserera"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("welayta"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Sasiazentuak"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("samerera"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudobidia"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhiera"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinesia"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("gujaratarra"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("idatzi gabea"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n’koera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Ordenatzeko irizpide estandarra"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Hegoafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Lerro-jauziaren estilo malgua"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagaria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Zenbaki georgiarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
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
			$of("Eskualde ezezaguna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Sistema metrikoa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601 egutegia"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("pediera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Digitu teluguarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("loziera"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("Finantzetarako zenbaki txinatar sinplifikatuak"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligainon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Digitu arabiar-hindiko hedatuak"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuerera"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakotera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("Zabalera osoko digituak"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargvera"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taitera"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("iparraldeko lurera"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurtera"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("khemerarra"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandaweera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Zenbaki erromatarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("sakhera"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburuera"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("santalera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Zenbakizko bihurketa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Zenbaki-sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambayera"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhia"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("txilubera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Zabalera osoko karaktere-bihurketa"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sanguera"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("ankolera"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lundera"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luoera"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipinera"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("mizoa"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("baliera"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhyera"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("espainiera (Europa)"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("eskoziera"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("siziliera"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afarera"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhaziera"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akanera"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amharera"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragoiera"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arabiarra"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("japoniarra"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabiera"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("silabario japoniarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assamera"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avarera"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbaijanera"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baxkirera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Radical trazuen hurrenkera"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bielorrusiera"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgariera"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambarera"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengalera"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetera"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogribera"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretoiera"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniera"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("birmaniarra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("Digitu laostarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("senera"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("txetxenera"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorrera"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("BERRIKUSIA"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korsikera"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("oriyarra"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("txekiera"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("elizako eslaviera"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("txuvaxera"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("gales"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Zenbaki etiopiarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("daniera"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("Europako portuges"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("aleman"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Moneta-formatu estandarra"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bembera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Digitu mongoliarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehiera"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Latinoamerikako espainiera"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("benera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("Txinatar egutegia"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Zenbaki grekoak"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("eweera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("Lerro-jauziaren estilo arrunta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldaviera"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("greziera"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("ingeles"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Txinera tradizionalaren alfabetoa-Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("espainiera"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estoniera"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"hänera"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("euskara"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangula"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("goi-sorabiera"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("idazkera txinatarra"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shanera"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persiera"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("sinplifikatua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Digitu mendebaldarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradizionala"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finlandiera"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fijiera"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fona"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantonera"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("faroera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("US BGN transliterazioa"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("frantses"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("frisiera"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irlandera"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Eskoziako gaeliko"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galiziera"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guaraniera"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpurera"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("hizkuntza ezezaguna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Amete Alem egutegi etiopiarra"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("gujaratera"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manxera"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebreera"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("hupera"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("edoera"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("kroaziera"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haitiko kreolera"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("hungariera"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armeniera"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("hereroera"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo-bihurketa"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonesiera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Digitu tibetarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igboera"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Sichuango yiera"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandiera"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italiera"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japoniera"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("malayalamarra"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("hegoaldeko samiera"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javera"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madurera"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Luleko samiera"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahiera"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithilera"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inariko samiera"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("georgiera"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksikera"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasarera"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("skolten samiera"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kikongoa"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyuera"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masaiera"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakhera"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("groenlandiera"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("khemerera"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("koreera"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuriera"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kaxmirera"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurduera"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komiera"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kornubiera"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgizera"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninkera"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latin"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luxenburgera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Digitu malayalamarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("gandera"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburgera"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tibetarra"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friuliera"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laosera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Neurketa-sistema inperiala"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituaniera"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Katangako lubera"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("letoniera"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshallera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Unicode hurrenkera lehenetsia"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maoriera"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("mazedoniera"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malabarera"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongoliera"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathera"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malaysiera"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltera"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birmaniera"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armeniarra"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("mokxera"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("behe-sorabiera"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Bilaketa orokorra"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"bokmål (norvegiera)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("iparraldeko ndebeleera"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalera"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndongera"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("nederlandera"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("nynorsk (norvegiera)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norvegiera"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("hegoaldeko ndebelera"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajoera"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("chewera"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("jingpoera"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabilera"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("POLITON"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("okzitaniera"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("kaiji"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kambera"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mendeera"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meruera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("Zenbaki armeniarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromoera"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osetiera"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardiera"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Mauritaniako kreolera"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("srananera"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("punjabera"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("dualera"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("poloniera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Dangi egutegia"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("paxtuera"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portuges"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Ordenatzeko irizpidea"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Brasilgo portuges"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("kataba"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-meettoera"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Moneta-formatua"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Egutegia"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("laosarra"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"metaʼera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 orduko sistema (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 orduko sistema (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("sahoa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Digitu birmaniarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("kitxua"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodoera"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makondeera"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopiarra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 orduko sistema (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 orduko sistema (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("erretorromaniera"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundiera"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Moneta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("errumaniera"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("SAHO"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Digitu oriyarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Zenbaki hamartar txinatarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("errusiera"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyaruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Cabo Verdeko kreolera"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmakera"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukumera"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("Australiako ingeles"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrito"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardiniera"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("iparraldeko samiera"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabauera"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("serbokroaziera"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("eslovakiera"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("esloveniera"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoera"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shonera"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somaliera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("Digitu arabiar-hindikoak"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albaniera"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbiera"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swatiera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Kontabilitateko moneta-formatua"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("hegoaldeko sothoera"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundanera"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("suediera"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahilia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("Finantzetarako zenbaki txinatar tradizionalak"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibioera"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("ibanera"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamilera"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Asia erdialdea"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia mendebaldea"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tajikera"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("thailandiera"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinyera"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("buginera"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koroa"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("Kanadako ingeles"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmenera"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswanera"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongera"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("fonyi jolera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("Zenbaki japoniarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turkiera"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsongera"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komoreera"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatarera"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twia"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitiera"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa ekialdea"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa iparraldea"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa mendebaldea"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uigurrera"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("korearra"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("ohikoa"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrainera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Egutegi coptiarra"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmykera"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbekera"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("kashia"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("behe-saxoiera"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("vendera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Minguo egutegia"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamera"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Ordu-zikloa (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of("quicheera"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("waloiera"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauzera"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("asiriera"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("grekoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolofera"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("amazigera estandarra"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("arabiera moderno estandarra"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongoliarra"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipurera"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latinoa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("Zenbaki txinatar sinplifikatuak"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Zenbaki txinatar tradizionalak"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("Zenbaki erromatarrak minuskulaz"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("bilena"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohawkera"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("moreera"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("jorubera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Zenbaki tradizionalak"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("Mexikoko espainiera"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vaiera"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjinera"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("txinera"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofoa"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Lerro-jauziaren estiloa"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zuluera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Telefonoen zerrenda"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("georgiarra"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("Finantzetarako zenbaki japoniarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ge’ez"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Erreformaren araberako hurrenkera"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embua"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("txinera sinplifikatu"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permyakera"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkanera"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("txinera tradizionala"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpellea"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Digitu khemerarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilokanera"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("VALENTZIERA"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mudangera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Digitu gurmukhiak"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("zenbait hizkuntza"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Neurketa-sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creera"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilbertera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Digitu tamilarrak"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karachayera-balkarera"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingushera"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("daria"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("kareliera"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efikera"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Zenbakiak"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kurukhera"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("shambalera"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("teluguarra"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafiera"_s)
		})
	}));
	return data;
}

LocaleNames_eu::LocaleNames_eu() {
}

$Class* LocaleNames_eu::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_eu, name, initialize, &_LocaleNames_eu_ClassInfo_, allocate$LocaleNames_eu);
	return class$;
}

$Class* LocaleNames_eu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun