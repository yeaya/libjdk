#include <sun/util/resources/cldr/ext/LocaleNames_sq.h>

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

$MethodInfo _LocaleNames_sq_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sq, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sq, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sq_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sq",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sq_MethodInfo_
};

$Object* allocate$LocaleNames_sq($Class* clazz) {
	return $of($alloc(LocaleNames_sq));
}

void LocaleNames_sq::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sq::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_bo, "tibetisht"_s);
	$var($String, metaValue_lo, "laosisht"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"këlnisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirandisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("me simbole"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"çakmaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("timneisht"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("tesoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapanuisht"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ishulli Asenshion"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarontonganisht"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetumisht"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Andorrë"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Emiratet e Bashkuara Arabe"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamandisht"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua e Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("kalendar etiopian"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Anguilë"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Shqipëri"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armeni"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Angolë"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Antarktikë"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Argjentinë"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Amerikane"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austri"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australi"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Arubë"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("anglishte amerikane"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Ishujt Alandë"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbajxhan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnjë-Hercegovinë"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("sebuanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumikisht"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Belgjikë"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina-Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bullgari"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrejn"_s)
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
			$of("Sen-Bartelemi"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermude"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erzjaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivi"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Karaibet holandeze"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahama"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("sogisht"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Ishulli Bove"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Botsvanë"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bjellorusi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Belizë"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("kalendar persian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"numra hebraikë"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Ishujt Kokos"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazanderanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Republika e Afrikës Qendrore"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kongo-Brazavilë"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Zvicër"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Ishujt Kuk"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Kili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Kinë"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbi"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Ishulli Klipërton"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kosta-Rikë"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Kubë"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Kepi i Gjelbër"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kurasao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Ishulli i Krishtlindjes"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Qipro"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Çeki"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajukisht"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Gjermani"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("akinezisht"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"çigisht"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego-Garsia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("shifra devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Xhibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Danimarkë"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("brailisht"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Dominikë"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"numra armenë të vegjël"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Republika Dominikane"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontaloisht"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zunisht"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigreisht"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algjeri"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Theuta e Melila"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampangaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamentisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("andangmeisht"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estoni"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egjipt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Saharaja Perëndimore"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("paluanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"çukezisht"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("marisht"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"çoktauisht"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"çerokisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritre"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Spanjë"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopi"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Bashkimi Evropian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("kalendar gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Zona euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"çejenisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("shifra guxharati"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigisht"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finlandë"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fixhi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Ishujt Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezi"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Ishujt Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Francë"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Kalendari Kombëtar Indian"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Mbretëria e Bashkuar"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("pixhinishte nigeriane"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Granadë"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gjeorgji"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guajana Franceze"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Gernsej"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Ganë"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gjibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Grënlandë"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambi"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Guadelupë"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Guineja Ekuatoriale"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Greqi"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Xhorxha Jugore dhe Ishujt Senduiçë të Jugut"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Guatemalë"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guine-Bisau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingonisht"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Guajanë"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("kurdishte qendrore"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"nuk ka përmbajtje gjuhësore"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("gjermanishte austriake"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("RPA i Hong-Kongut"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Ishujt Hërd e Mekdonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroaci"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("agemisht"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("gjermanishte zvicerane"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("Kalendari Islamik (Um al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungari"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Ishujt Kanarie"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezi"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Irlandë"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napoletanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("namaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zazaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Ishulli i Manit"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indi"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Territori Britanik i Oqeanit Indian"_s)
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
			$of(u"Islandë"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Itali"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("simbole matematikore"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("shifra tajlandeze"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("shifra bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Xhersej"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("kalendar islamik"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Xhamajkë"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengal"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordani"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japoni"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ajnuisht"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("shifra kanade"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("gjermanishte zvicerane (dialekti i Alpeve)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("kalendar budist"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Amerika Latine"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizi"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kamboxhia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komore"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Shën-Kits dhe Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kanad"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"frëngjishte kanadeze"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Kore e Veriut"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Kore e Jugut"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"frëngjishte zvicerane"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuvajt"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("pisinishte toku"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Ishujt Kajman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("cirilik"_s)
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
			$of("LC"_s),
			$of(u"Shën-Luçia"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"guiçinisht"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"gjermanishte e vendeve të ulëta"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Lihtenshtajn"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Sri-Lankë"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberi"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituani"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letoni"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakan"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libi"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladinoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunxhoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("tanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marok"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavi"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Mal i Zi"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Sen-Marten"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Ishujt Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("tajlandez"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Maqedonia e Veriut"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mianmar (Burmë)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongoli"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("neuarisht"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("RPA i Makaos"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Ishujt e Marianës Veriore"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Martinikë"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritani"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Maltë"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("altaishte jugore"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldive"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malavi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Meksikë"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("kalendar japonez"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malajzi"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibi"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Afrika Subsahariane"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("kalendar hebraik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Radhitje fjalori"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledoni e Re"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Ishulli Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeri"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("torokoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Holandë"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norvegji"_s)
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
			$of("romboisht"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Zelandë e Re"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angikisht"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"frëngjishte kreole seselve"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Kalendari Islamik (tabelor, periudha civile)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("anglishte britanike"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polinezia Franceze"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Guineja e Re-Papua"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipine"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poloni"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("euondoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Shën-Pier dhe Mikelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Ishujt Pitkern"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto-Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Territoret Palestineze"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugali"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("niasisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"numra grekë të vegjël"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguai"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbukaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebraik"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niueanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Oqeania e Largët (Lindja e Largët)"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezgianisht"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvaluisht"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Bota"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Afrikë"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Amerika e Veriut"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Amerika e Jugut"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojbanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oqeani"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumani"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbi"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusi"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Ruandë"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabi Saudite"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Ishujt Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasavakisht"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Afrika Perëndimore"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Sejshelle"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Amerika Qendrore"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Suedi"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Afrika Lindore"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Afrika Veriore"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapor"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Shën-Elenë"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"stil i gjerësisë së rreshtave - i ngushtuar"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Afrika e Mesme"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slloveni"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Afrika Jugore"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard e Jan-Majen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amerikë"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Sllovaki"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra-Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San-Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"mapuçisht"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapahoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"numra tamilë tradicionalë"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinami"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Sudani i Jugut"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao-Tome e Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint-Marten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siri"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Esvatini"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan-da-Kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asuisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"sistem amerikan i njësive matëse"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Amerika Veriore"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Ishujt Turks dhe Kaikos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("jangbenisht"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Çad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Territoret Jugore Franceze"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tajlandë"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Taxhikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karaibe"_s)
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
			$of("ybb"_s),
			$of("jembaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
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
			$of("Turqi"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad e Tobago"_s)
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
			$of("ast"_s),
			$of("asturisht"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzani"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kuasisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("i panjohur"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ukrainë"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("vllahisht"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Azia Lindore"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvinianisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("suahilishte kongoleze"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Azia Jugore"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Azia Juglindore"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Ugandë"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Radhitje pinini"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Evropa Jugore"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("sinhal"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Ishujt Periferikë të SHBA-së"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Organizata e Kombeve të Bashkuara"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("SHBA"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("havaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Radhitje e kinezishtes së thjeshtësuar - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguai"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("prusisht"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazajtisht e Atlasit Qendror"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiembunisht"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Shën-Vincent dhe Grenadine"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Venezuelë"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Ishujt e Virgjër Britanikë"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Ishujt e Virgjër të SHBA-së"_s)
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
			$of("nogajisht"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("ruaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australazia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Uollis e Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Rajoni Mikronezian"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngombisht"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lakotisht"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("ualserisht"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("ulajtaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo-thekse"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("uarajisht"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("auadhisht"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinezia"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Kosovë"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("guxharat"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("i pashkruar"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("uarlpirisht"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("nkoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("radhitje standarde"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Majotë"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afrika e Jugut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"stil i gjerësisë së rreshtave - i larguar"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"numra gjeorgjianë"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragan"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("I panjohur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("sistem metrik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("kalendar ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotoishte veriore"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("shifra teluguje"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozisht"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"maçamisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"numra financiarë të kinezishtes së thjeshtuar"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligajnonisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"shifra indo-arabe të zgjatura"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuerisht"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakotisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"shifra me largësi të brendshme"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("darguaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("tajtaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("lurishte veriore"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurtisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("kmer"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandauisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"numra romakë"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("sakaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("santalisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambajisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmuk"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-luluaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sanguisht"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("niankolisht"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lundaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipinisht"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmongisht"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("mizoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("balinezisht"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("lujaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("spanjishte evropiane"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("skotisht"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"siçilianisht"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afarisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkazisht"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amarisht"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonezisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arabik"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("japonez"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("alfabet rrokjesor japonez"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("asamezisht"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avarikisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("kurdishte jugore"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("ajmarisht"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbajxhanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bashkirisht"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bjellorusisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bullgarisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislamisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambarisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengalisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogribisht"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretonisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("boshnjakisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("birman"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("shifra lao"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("senaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalonisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("senishte kojrabore"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"çeçenisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("kamoroisht"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korsikisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("orija"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"çekisht"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("sllavishte kishtare"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"çuvashisht"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("uellsisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"numra etiopianë"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danisht"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("portugalishte evropiane"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("gjermanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("format valutor standard"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bembaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehisht"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("spanjishte amerikano-latine"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("xhongaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("benaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("kalendar kinez"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarmaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"numra grekë"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("eveisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"stil i gjerësisë së rreshtave - normal"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldavisht"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("greqisht"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("anglisht"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Radhitje e kinezishtes tradicionale - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("spanjisht"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estonisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanbik"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"taçelitisht"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"sorbishte e sipërme"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("i thjeshtuar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"shifra latino-perëndimore"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finlandisht"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fixhianisht"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fonisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"balokishte perëndimore"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantonezisht"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("faroisht"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbunduisht"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"frëngjisht"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"frizianishte perëndimore"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irlandisht"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("galishte skoceze"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galicisht"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guaranisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("boxhpurisht"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("E panjohur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Kalendari Etiopas Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("guxharatisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("Kalendari Islamik (tabelor, epoka austromikale)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manksisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausisht"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebraisht"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("indisht"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("hupaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("binisht"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("kroatisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitisht"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("hungarisht"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armenisht"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("hereroisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamosisht"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonezisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("shifra tibetiane"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("gjuha oksidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igboisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("sishuanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("idoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandisht"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italisht"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitutisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japonisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("malajalam"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("samishte jugore"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madurezisht"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("samishte lule"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maitilisht"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("samishte inari"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("gjeorgjisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksikaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasarisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("samishte skolti"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikujuisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanjamaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalalisutisht"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("kmerisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kanadisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("koreanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanurisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kashmirisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kornisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgizisht"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninkisht"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latinisht"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luksemburgisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("shifra malajalame"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("gandaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburgisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingalisht"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friulianisht"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"sistem imperial (britanik) i njësive matëse"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katangaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("letonisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("madagaskarisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshallisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("radhitje unikode e parazgjedhur"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maorisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("maqedonisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malajalamisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongolisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("maratisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malajisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltisht"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birmanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armen"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("mokshaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("sorbishte e poshtme"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"kërkim i përgjithshëm"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of("norvegjishte letrare"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebelishte veriore"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndongaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("holandisht"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("norvegjishte nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norvegjisht"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebelishte jugore"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navahoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nianjisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"kaçinisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabilisht"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("oksitanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("kajeisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kambaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mendisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meruisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"numra armenë"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("odisht"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osetisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardianisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("morisjenisht"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("srananisht (sranantongoisht)"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("punxhabisht"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("dualaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polonisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("kalendar dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashtoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugalisht"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Radhitja"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("portugalishte braziliane"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tjapisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makua-mitoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Formati valutor"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Kalendari"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("metaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"sistem 24-orësh (0 - 23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"sistem 24-orësh (1 - 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("sahoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("shifra mianmari"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"keçuaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makondisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"sistem 12-orësh (1 - 12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"sistem 12-orësh (0 - 11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("retoromanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundisht"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("shifra orije"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"numra dhjetorë kinezë"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rusisht"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kiniaruandisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"kreolishte e Kepit të Gjelbër"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmakisht"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukumaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("anglishte australiane"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskritisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardenjisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindisht"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("samishte veriore"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabauisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sangoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("serbo-kroatisht"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("sinhalisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("sllovakisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("sllovenisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shonisht"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somalisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("shifra indo-arabe"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("shqip"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("suatisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"format valutor llogaritës"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sotoishte jugore"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("suedisht"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suahilisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"numra financiarë të kinezishtes tradicionale"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibioisht"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("ibanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamilisht"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Azi"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Azia Qendrore"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("teluguisht"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Azia Perëndimore"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("taxhikisht"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("tajlandisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinjaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("buginezisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koroisht"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("anglishte kanadeze"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmenisht"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("cuanaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonganisht"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("xhulafonjisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"numra japonezë"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turqisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("congaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("kamorianisht"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatarisht"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("tuisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitisht"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Evropë"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Evropa Lindore"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Evropa Veriore"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazagauisht"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Evropa Perëndimore"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("ujgurisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("korean"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"i zakonshëm"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrainisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Kalendari Koptik"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urduisht"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmikisht"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbekisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("kasisht"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"gjermanishte saksone e vendeve të ulëta"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("vendaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("kalendar minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamisht"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"kojraçinisht"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Cikli orar (12 - 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapykisht"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"kiçeisht"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("gaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("ualunisht"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauzisht"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("siriakisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("grek"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("uolofisht"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("tamaziatishte standarde marokene"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("arabishte standarde moderne"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipurisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"numra të kinezishtes së thjeshtuar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"numra të kinezishtes tradicionale"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"numra romakë të vegjël"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blinisht"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohokisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kakoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("jidisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mosisht"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("jorubaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("spanjishte meksikane"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vaisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenxhinisht"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("kinezisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomof"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Stili i gjerësisë së rreshtave"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zuluisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Radhitje libri telefonik"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("gjeorgjian"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbunduisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"numra financiarë japonezë"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("gizisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Radhitje e reformuar"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embuisht"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("kinezishte e thjeshtuar"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-parmjakisht"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkanisht"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("kinezishte tradicionale"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpeleisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("shifra kmere"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilokoisht"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundangisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("shifra gurmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"gjuhë të shumëfishta"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Sistemi i njësive matëse"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("krikisht"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilbertazisht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("shifra tamile"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karaçaj-balkarisht"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingushisht"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("darisht"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("karelianisht"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efikisht"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Numrat/shifrat"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kurukisht"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("shambalisht"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("telug"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafianisht"_s)
		})
	}));
	return data;
}

LocaleNames_sq::LocaleNames_sq() {
}

$Class* LocaleNames_sq::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sq, name, initialize, &_LocaleNames_sq_ClassInfo_, allocate$LocaleNames_sq);
	return class$;
}

$Class* LocaleNames_sq::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun