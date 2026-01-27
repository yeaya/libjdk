#include <sun/util/resources/cldr/ext/LocaleNames_eo.h>

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

$MethodInfo _LocaleNames_eo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_eo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_eo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_eo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_eo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_eo_MethodInfo_
};

$Object* allocate$LocaleNames_eo($Class* clazz) {
	return $of($alloc(LocaleNames_eo));
}

void LocaleNames_eo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_eo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Mondo"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andoro"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Unuiĝintaj Arabaj Emirlandoj"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganujo"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigvo-Barbudo"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angvilo"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanujo"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenujo"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angolo"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarkto"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Aŭstrujo"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Aŭstralio"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Arubo"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbajĝano"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnio-Hercegovino"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbado"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangladeŝo"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgujo"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkino"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarujo"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Barejno"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundo"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benino"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudoj"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunejo"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivio"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazilo"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamoj"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butano"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Bocvano"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belorusujo"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belizo"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanado"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Centr-Afrika Respubliko"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongolo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Svisujo"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Ebur-Bordo"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Kukinsuloj"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Ĉilio"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kameruno"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Ĉinujo"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombio"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kostariko"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kubo"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kabo-Verdo"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kipro"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Ĉeĥujo"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Germanujo"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Ĝibutio"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danujo"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominiko"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Domingo"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alĝerio"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvadoro"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonujo"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipto"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Okcidenta Saharo"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreo"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Hispanujo"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopujo"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finnlando"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fiĝoj"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezio"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Ferooj"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francujo"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabono"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Unuiĝinta Reĝlando"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenado"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Kartvelujo"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Franca Gviano"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ganao"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Ĝibraltaro"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Gronlando"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambio"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gvineo"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gvadelupo"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekvatora Gvineo"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grekujo"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Sud-Georgio kaj Sud-Sandviĉinsuloj"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gvatemalo"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Gvamo"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Gvineo-Bisaŭo"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gujano"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Herda kaj Makdonaldaj Insuloj"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduro"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatujo"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haitio"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungarujo"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezio"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlando"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israelo"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Hindujo"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Brita Hindoceana Teritorio"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irako"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Irano"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islando"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italujo"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamajko"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordanio"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japanujo"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenjo"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizistano"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kamboĝo"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribato"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoroj"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sent-Kristofo kaj Neviso"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Nord-Koreo"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Sud-Koreo"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuvajto"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kejmanoj"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazaĥstano"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laoso"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libano"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Sent-Lucio"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Liĥtenŝtejno"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri-Lanko"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberio"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litovujo"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvujo"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libio"_s)
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
			$of("Moldavujo"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskaro"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Marŝaloj"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Malio"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mjanmao"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolujo"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Nord-Marianoj"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martiniko"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Maŭritanujo"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malto"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maŭricio"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivoj"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malavio"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malajzio"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambiko"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibio"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nov-Kaledonio"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Niĝero"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkinsulo"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Niĝerio"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragvo"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Nederlando"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norvegujo"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepalo"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauro"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niuo"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nov-Zelando"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Omano"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panamo"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peruo"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Franca Polinezio"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papuo-Nov-Gvineo"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinoj"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistano"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Pollando"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sent-Piero kaj Mikelono"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkarna Insulo"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto-Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalujo"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Belaŭo"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragvajo"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Kataro"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunio"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumanujo"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusujo"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruando"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saŭda Arabujo"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomonoj"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sejŝeloj"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudano"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Svedujo"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapuro"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Sent-Heleno"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenujo"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbardo kaj Jan-Majen-insulo"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakujo"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siera-Leono"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San-Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegalo"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalujo"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinamo"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao-Tomeo kaj Principeo"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvadoro"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Sirio"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Svazilando"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Ĉado"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togolo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tajlando"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Taĝikujo"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenujo"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunizio"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkujo"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidado kaj Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalo"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tajvano"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanio"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukrajno"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Ugando"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Usonaj malgrandaj insuloj"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Usono"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugvajo"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekujo"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikano"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Sent-Vincento kaj la Grenadinoj"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuelo"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Britaj Virgulininsuloj"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Usonaj Virgulininsuloj"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vjetnamo"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatuo"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Valiso kaj Futuno"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoo"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemeno"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Majoto"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Sud-Afriko"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambio"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabvo"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afara"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abĥaza"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikansa"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amhara"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("araba"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("asama"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("ajmara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbajĝana"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"baŝkira"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("belorusa"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgara"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislamo"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengala"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibeta"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretona"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("kataluna"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korsika"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ĉeĥa"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("kimra"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("dana"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("germana"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("mahla"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzonko"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("greka"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("angla"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("hispana"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estona"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"eŭska"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finna"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fiĝia"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("feroa"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("franca"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("frisa"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("gaela"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galega"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("gvarania"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"guĝarata"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"haŭsa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebrea"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hinda"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("kroata"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitia kreola"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("hungara"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armena"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingvao"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonezia"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("okcidentalo"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("eskima"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islanda"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("itala"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuita"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japana"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("java"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("kartvela"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kazaĥa"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("gronlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("kmera"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kanara"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("korea"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kaŝmira"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurda"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiza"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latino"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luksemburga"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laŭa"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litova"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("latva"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malagasa"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maoria"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedona"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malajalama"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongola"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marata"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malaja"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("malta"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birma"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("naura"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of("dannorvega"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepala"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("nederlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("novnorvega"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norvega"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("okcitana"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oroma"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("orijo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"panĝaba"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("pola"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"paŝtoa"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugala"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"keĉua"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"romanĉa"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("burunda"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumana"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rusa"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrito"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sinda"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sangoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("serbo-Kroata"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovaka"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("slovena"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"ŝona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somala"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albana"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serba"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("svazia"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sota"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sunda"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("sveda"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("svahila"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamila"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugua"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"taĝika"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("taja"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigraja"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmena"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagaloga"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("cvana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongaa"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turka"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("conga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatara"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("ujgura"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urduo"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbeka"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vjetnama"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuko"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volofa"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("ksosa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("jida"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("joruba"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"ĝuanga"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ĉina"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulua"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("ibibioefika"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipina"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("havaja"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingona"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("nekonata lingvo"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"nelingvaĵo"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("brazilportugala"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"eŭropportugala"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ĉina simpligita"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"ĉina tradicia"_s)
		})
	}));
	return data;
}

LocaleNames_eo::LocaleNames_eo() {
}

$Class* LocaleNames_eo::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_eo, name, initialize, &_LocaleNames_eo_ClassInfo_, allocate$LocaleNames_eo);
	return class$;
}

$Class* LocaleNames_eo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun