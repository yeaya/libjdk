#include <sun/util/resources/cldr/ext/LocaleNames_is.h>

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

$MethodInfo _LocaleNames_is_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_is, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_is, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_is_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_is",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_is_MethodInfo_
};

$Object* allocate$LocaleNames_is($Class* clazz) {
	return $of($alloc(LocaleNames_is));
}

void LocaleNames_is::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_is::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, u"gújaratí"_s);
	$var($String, metaValue_km, "kmer"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_te, u"telúgú"_s);
	$var($String, metaValue_cop, u"koptíska"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kölníska"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandesíska"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"tákn"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"marvarí"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"emoji-tákn"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("tsjakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("fornegypska"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"rajastaní"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"tímne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"tesó"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"rapanúí"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"terenó"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension-eyja"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarótongska"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tetúm"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Sameinuðu arabísku furstadæmin"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"flæmska"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antígva og Barbúda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Eþíópískt tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angvilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"Tímabelti"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albanía"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armenía"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Angóla"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Suðurskautslandið"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Argentína"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Bandaríska Samóa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Austurríki"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Ástralía"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Arúba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"bandarísk enska"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Álandseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Aserbaídsjan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnía og Hersegóvína"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"kebúanó"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladess"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kúmík"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Belgía"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"miðháþýska"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Búrkína Fasó"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Búlgaría"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Barein"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Búrúndí"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Benín"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Sankti Bartólómeusareyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Bermúdaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"kútenaí"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("ersja"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brúnei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bólivía"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Karíbahafshluti Hollands"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brasilía"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"sóga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Bútan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouveteyja"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsvana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Hvíta-Rússland"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Belís"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Persneskt tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Hebreskir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kókoseyjar (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"masanderaní"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongó-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Mið-Afríkulýðveldið"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kongó-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Sviss"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Fílabeinsströndin"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cooks-eyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Síle"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamerún"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Kína"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Kólumbía"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton-eyja"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kostaríka"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Kúba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Grænhöfðaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Curacao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Jólaey"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Kýpur"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tékkland"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ekajúk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Þýskaland"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"fornháþýska"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"akkíska"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"kíga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Devanagari tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Djíbútí"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Danmörk"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"gondí"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("blindraletur"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"brahmíska"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Dóminíka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Armenskar lágstafatölur"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dóminíska lýðveldið"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"gorontaló"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("gotneska"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"súní"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tígre"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alsír"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"pangasínmál"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"Hálfbreidd"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"palaví"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta og Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"síbsja"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"papíamentó"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Eistland"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"tív"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egyptaland"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Vestur-Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"sjagataí"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"paláska"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"sjúkíska"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"sínúk"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"marí"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"sípevíska"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"sjoktá"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"Cherokee-mál"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Erítrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Spánn"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Eþíópía"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Evrópusambandið"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"elamít"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gregorískt tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Evrusvæðið"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("sjeyen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Gujarati-tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adýge"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finnland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fídjíeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Míkrónesía"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Landsstaðalsafbrigði"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Færeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"tamílskt"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frakkland"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"tókeláska"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"gerbó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("indverskt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"forngríska"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"votíska"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Bretland"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nígerískt pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Georgía"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Franska Gvæjana"_s)
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
			$of(u"Gíbraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"afríhílí"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Grænland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"miðenska"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Gambía"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Gínea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Gvadelúpeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Miðbaugs-Gínea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grikkland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Suður-Georgía og Suður-Sandvíkureyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Gvam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Gínea-Bissá"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingonska"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Gvæjana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"sorani-kúrdíska"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ekkert tungumálaefni"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"austurrísk þýska"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"sérstjórnarsvæðið Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard og McDonaldseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hondúras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Króatía"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"svissnesk þýska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Íslamskt dagatal (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Haítí"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungverjaland"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamasjek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanaríeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indónesía"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("fornpersneska"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Írland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"napólíska"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"zázáíska"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Ísrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Mön"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indland"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Evrópskar reglur um röðun"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Bresku Indlandshafseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Írak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Íran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Ísland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Ítalía"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"stærðfræðitákn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Tælenskar tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Bengalskar tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Íslamskt tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Jamaíka"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalskt"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jórdanía"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"aínu (Japan)"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("tongverska (nyasa)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Kannada-tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"svissnesk háþýska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Hljóðfræðileg röð"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Búddískt tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Kenía"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Rómanska Ameríka"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambódía"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Kíribatí"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Kómoreyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sankti Kitts og Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"kanadísk franska"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Norður-Kórea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Suður-Kórea"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("svissnesk franska"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Kúveit"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tokpisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Caymaneyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"kyrillískt"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Líbanon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Sankti Lúsía"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"fönikíska"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gvísín"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"lágþýska; lágsaxneska"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Srí Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akkadíska"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Líbería"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Lesótó"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Litháen"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Lúxemborg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettland"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Líbía"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ladínska"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"vunjó"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("landa"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"langí"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Marokkó"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Mónakó"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Moldóva"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Svartfjallaland"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint-Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshalleyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"aleúska"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"taílenskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Vai-tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Norður-Makedónía"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Malí"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Mjanmar (Búrma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mongólía"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"nevarí"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"sérstjórnarsvæðið Makaó"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Norður-Maríanaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Martiník"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Máritanía"_s)
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
			$of("UN GEGN umritun"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Máritíus"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"suðuraltaíska"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Maldíveyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Malaví"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Mexíkó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Japanskt tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Malasía"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mósambík"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namibía"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Afríka sunnan Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Hebreskt tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Orðabókarröð"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nýja-Kaledónía"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Níger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkeyja"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nígería"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"tarókó"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Níkaragva"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holland"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noregur"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"Nárú"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"rombó"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"tsimsíska"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nýja-Sjáland"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"romaní"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"krímtyrkneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("fornenska"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Óman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"angíka"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"seychelles-kreólska"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Íslamskt borgaradagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"kasúbíska"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("bresk enska"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Perú"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Franska Pólýnesía"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papúa Nýja-Gínea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Pólland"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"evondó"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sankti Pierre og Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn-eyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Púertó Ríkó"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Heimastjórnarsvæði Palestínumanna"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"balinesíska"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Portúgal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Palá"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"nías"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Grískar lágstafatölur"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Paragvæ"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"túmbúka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebreskt"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"níveska"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Ytri Eyjaálfa"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lesgíska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"ahom-tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"túvalúska"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Heimurinn"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Afríka"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Norður-Ameríka"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Suður-Ameríka"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Eyjaálfa"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rúmenía"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Serbía"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Rússland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Rúanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Sádi-Arabía"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("ponpeiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"mandaíska"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Salómonseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Vestur-Afríka"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles-eyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Súdan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Mið-Ameríka"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Svíþjóð"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Austur-Afríka"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"arameíska"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Norður-Afríka"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singapúr"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Sankti Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Ströng línuskipting"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Mið-Afríka"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Slóvenía"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Suðurhluti Afríku"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalbarði og Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Ameríka"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slóvakía"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Síerra Leóne"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"San Marínó"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Sómalía"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"arapahó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Hefðbundnir tamílskir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Súrínam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Suður-Súdan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Saó Tóme og Prinsípe"_s)
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
			$of(u"Sýrland"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"jaó"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Svasíland"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("aravakska"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"japíska"_s)
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
			$of(u"Bandarískt mælingakerfi"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Ameríka norðan Mexikó"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks- og Caicoseyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tsjad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Frönsku suðlægu landsvæðin"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Tógó"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Taíland"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadsíkistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Karíbahafið"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Tókelá"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Tímor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Leita eftir upphafssamhljóða í Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Túrkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Túnis"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Tyrkland"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trínidad og Tóbagó"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Túvalú"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taívan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"astúríska"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tansanía"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"óþekkt letur"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Úkraína"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"arúmenska"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Austur-Asía"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"túvínska"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"kongósvahílí"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Suður-Asía"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"haída"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Suðaustur-Asía"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Úganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Pinyin-röðun"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Suður-Evrópa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Smáeyjar Bandaríkjanna"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Sameinuðu þjóðirnar"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Bandaríkin"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"havaíska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"einfölduð kínversk röðun - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Úrúgvæ"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"prússneska"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Úsbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Strikaröðun"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatíkanið"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"fornpróvensalska"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Sankti Vinsent og Grenadíneyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Venesúela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Bresku Jómfrúaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Bandarísku Jómfrúaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Víetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Vanúatú"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"nógaí"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"rúa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"norræna"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Ástralasía"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melanesía"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wallis- og Fútúnaeyjar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Hefðbundin"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Míkrónesíusvæðið"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"lakóta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Viðskiptafræðileg töluorð"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"Fyrri röðun, til samræmis"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("valser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Samóa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("volayatta"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"vasjó"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("gervihreimur"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"varaí"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"gervistaður"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"avadí"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Pólýnesía"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Kósóvó"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"óskrifað"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("varlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"batakíska"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n’ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Stöðluð röðun"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"fantí"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Suður-Afríka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Laus línuskipting"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Georgískir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Sambía"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Óþekkt svæði"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Metrakerfi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"mongó"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"norðursótó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Telúgú-tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"kreólska (Louisiana)"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"masjáme"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Einfaldaðar kínverskar fjármálatölur"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"híligaínon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Auknar arabískar-indverskar tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"núer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"dakóta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Tölur í fullri breidd"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"hettitíska"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargva"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"taíta"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"norðurlúrí"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"klassísk nevaríska"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"údmúrt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandave"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Rómverskir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"jakút"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"samversk arameíska"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"sambúrú"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"santalí"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"gyðingapersneska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Tölulegur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Upprunalegir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Full breidd"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"sangú"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"lúisenó"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"njamvesí"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"lúnda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"njóró"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"lúó"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filippseyska"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delaver"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"lúsaí"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"balúkí"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slavneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balíska"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"úgarítíska"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"gyðingaarabíska"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"evrópsk spænska"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"nsíma"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("skoska"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sikileyska"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afár"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abkasíska"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avestíska"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afríkanska"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amharíska"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonska"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"arabískt"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("japanskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"arabíska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"japönsk samstöfuletur"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assamska"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avaríska"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"suðurkúrdíska"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aímara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("aserska"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"baskír"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Röðun eftir grunnstrikum"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"hvítrússneska"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"búlgarska"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bíslama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengalska"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"tíbeska"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"dogríb"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretónska"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosníska"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("mjanmarskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Lao-tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"n-kó"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"selkúp"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katalónska"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"koíraboró-senní"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("tsjetsjenska"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"kamorró"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsíska"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"krí"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"tékkneska"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("kirkjuslavneska"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"sjúvas"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("velska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Eþíópískir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danska"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"evrópsk portúgalska"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"þýska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Staðlað gjaldmiðilssnið"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("beja"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"fornírska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Mongólskar tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"dívehí"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"rómönsk-amerísk spænska"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dsongka"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Kínversk tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Grískir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Venjuleg línuskipting"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldóvska"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"gríska"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("enska"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"esperantó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"hefðbundin kínversk röðun - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"spænska"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("eistneska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskneska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"hásorbneska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"kínverskt"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("sjan"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persneska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"einfaldað"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Vestrænar tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"hefðbundið"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"fúla"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finnska"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fídjeyska"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"fón"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"vesturbalotsí"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kantónska"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"færeyska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("US BGN umritun"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"úmbúndú"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("franska"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"sídamó"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"vesturfrísneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"írska"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"skosk gelíska"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galisíska"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"gvaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bojpúrí"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"óþekkt tungumál"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Eþíópískt ‘amete alem’ tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manska"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"hása"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebreska"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"hindí"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"húpa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"bíkol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"bíní"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"hírímótú"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"króatíska"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haítíska"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("ungverska"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armenska"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"hereró"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("cajun-franska"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indónesíska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Tíbeskir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingve"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ígbó"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"sísúanjí"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"miðfranska"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"ínúpíak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("fornfranska"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ídó"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"austurfrísneska"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"norðurfrísneska"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"íslenska"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ítalska"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"inúktitút"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japanska"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("malalajam"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"dogrí"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"suðursamíska"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javanska"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madúrska"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"lúlesamíska"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"magahí"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"maítílí"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"enaresamíska"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"georgíska"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"skoltesamíska"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"mandingó"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"kongóska"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"kíkújú"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masaí"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"kúanjama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kasakska"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grænlenska"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"kóreska"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"kanúrí"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kasmírska"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kúrdíska"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"komíska"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kornbreska"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"sóninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"latína"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"lúxemborgíska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Malayalam-tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limbúrgíska"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"tíbeskt"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"fríúlska"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Breskt mælingakerfi"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"litháíska"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"lúbakatanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("lettneska"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"sogdíen"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malagasíska"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshallska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Sjálfgefin Unicode-röðun"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maorí"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"makedónska"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malajalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"mongólska"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"maratí"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malaíska"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltneska"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"búrmneska"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armenskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksa"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"lágsorbneska"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"nárúska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Almenn leit"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norskt bókmál"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"norður-ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalska"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("hollenska"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"nýnorska"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norska"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"suðurndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"navahó"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"nýanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"kasín"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kabíle"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"oksítaníska"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mende"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("ojibva"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"merú"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Armenskir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"kaví"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"óría"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ossetíska"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabardíska"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"máritíska"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"púnjabí"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"dúala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("serer"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"palí"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"pólska"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"miðhollenska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Dangi tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"pastú"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portúgalska"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"miðírska"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Röðun"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"brasílísk portúgalska"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Gjaldmiðilssnið"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"braí"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 tíma kerfi (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 tíma kerfi (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Mjanmarskar tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"kvesjúa"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"sapótek"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"bódó"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"eþíópískt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 tíma kerfi (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 tíma kerfi (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"rómanska"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"rúndí"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Gjaldmiðill"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rúmenska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Odia-tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Kínverskir tugatölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"rússneska"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("bakossi"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"kínjarvanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"blisstákn"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"grænhöfðeyska"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmak"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"súkúma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"áströlsk enska"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"sanskrít"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardínska"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"súsú"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sindí"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"norðursamíska"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"mínangkabá"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"sangó"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"serbókróatíska"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"singalíska"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"súmerska"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slóvakíska"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slóvenska"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samóska"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"sómalska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Arabískar-indverskar tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanska"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"svatí"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Bókhaldsgjaldmiðill"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"suðursótó"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"javanesíska"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"súndanska"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"sænska"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"svahílí"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Hefðbundnar kínverskar fjármálatölur"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"íban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tamílska"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Asía"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"búríat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Mið-Asía"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Vestur-Asía"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadsjikska"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"taílenska"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tígrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"búgíska"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"kanadísk enska"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"túrkmenska"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"tsúana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongverska"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Japanskir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("tyrkneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"shimaoríska"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatarska"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"djúla"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"tví"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahítíska"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Evrópa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Austur-Evrópa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Norður-Evrópa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Vestur-Evrópa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"úígúr"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"kóreskt"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("almennt"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"úkraínska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Koptískt tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"úrdú"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalmúkska"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("senaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"úsbekska"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"kasí"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"lágsaxneska"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Minguo tímatal"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"víetnamska"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("kotaska"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Tímakerfi (12 eða 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapyk"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"klassísk sýrlenska"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of("kiche"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"vallónska"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gagás"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"sýrlenska"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"grískt"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"staðlað marokkóskt tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"stöðluð nútímaarabíska"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"gajó"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"mongólskt"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"mansjú"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaja"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"manípúrí"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latneskt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Einfaldaðir kínverskir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Hefðbundnir kínverskir tölustafir"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"sósa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Rómverskar lágstafatölur"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"blín"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ósage"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"móhíska"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jiddíska"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"mossí"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"jórúba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Hefðbundin tölutákn"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"mexíkósk spænska"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"tyrkneska, ottóman"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"vaí"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"súang"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"kínverska"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Línuskipting"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"súlú"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Símaskráarröðun"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"georgískt"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"kimbúndú"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Japanskar fjármálatölur"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"gís"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Endurbætt röð"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"kínverska (einfölduð)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"kómí-permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"konkaní"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosraska"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"kínverska (hefðbundin)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"sundanesíska"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Kmerískar tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ílokó"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Gurmukhi-tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"margvísleg mál"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"kaddó"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Mælingakerfi"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"krík"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilberska"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"karíbamál"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"kajúga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Tamílskar tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karasaíbalkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingús"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"darí"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"karélska"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"efík"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"Tölur"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"kúrúk"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("sjambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"bafía"_s)
		})
	}));
	return data;
}

LocaleNames_is::LocaleNames_is() {
}

$Class* LocaleNames_is::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_is, name, initialize, &_LocaleNames_is_ClassInfo_, allocate$LocaleNames_is);
	return class$;
}

$Class* LocaleNames_is::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun