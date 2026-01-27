#include <sun/util/resources/cldr/ext/LocaleNames_hr.h>

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

$MethodInfo _LocaleNames_hr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_hr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_hr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_hr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_hr",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_hr_MethodInfo_
};

$Object* allocate$LocaleNames_hr($Class* clazz) {
	return $of($alloc(LocaleNames_hr));
}

void LocaleNames_hr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_hr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ssy, "saho"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("kelnski"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirandski"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("simboli"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanwa pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emotikoni"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("Gniva/Njiva dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("staroegipatski"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phags-pa pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapa nui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Otok Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotonški"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Ujedinjeni Arapski Emirati"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamanski"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigva i Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("etiopski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angvila"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Vremenska zona"_s)
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
			$of("Teng"_s),
			$of("tengwar pismo"_s)
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
			$of("Prti"_s),
			$of("pisani parthian"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Američka Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austrija"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australija"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"američki engleski"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Ålandski otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbajdžan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"istočno-armenijski"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosna i Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangladeš"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgija"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"srednjogornjonjemački"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bugarska"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrein"_s)
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
			$of("kut"_s),
			$of("kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("mordvinski"_s)
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
			$of("Karipski otoci Nizozemske"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahami"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Otok Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Bocvana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bjelorusija"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("Visible Speech"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("perzijski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("hebrejski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokosovi (Keelingovi) otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazanderanski"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Srednjoafrička Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Švicarska"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Obala Bjelokosti"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookovi Otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Čile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaithi pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kina"_s)
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
			$of("Zelenortska Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Božićni otok"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cipar"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Češka"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Njemačka"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"starovisokonjemački"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ačinski"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("znamenke pisma devanagari"_s)
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
			$of("ach"_s),
			$of(u"ačoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("brajica"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("brahmi pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("mali armenski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikanska Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("gotski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei mayek pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigriški"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("takri pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alžir"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Uski"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta i Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"čibča"_s)
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
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonija"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipat"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Zapadna Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"čagatajski"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palauanski"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuukese"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"chinook žargon"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("marijski"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"čerokijski"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Španjolska"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopija"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Europska unija"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamitski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("gregorijanski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("eurozona"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"čejenski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"gudžaratske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigejski"_s)
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
			$of("Falklandski otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezija"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Varijanta zemlje/jezika"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Farski otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamilsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francuska"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of("kpelle pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelaunski"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("indijski nacionalni kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"starogrčki"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("votski"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Ujedinjeno Kraljevstvo"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nigerijski pidžin"_s)
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
			$of("Francuska Gijana"_s)
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
			$of("Tale"_s),
			$of("tai le pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grenland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("srednjoengleski"_s)
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
			$of("Guadalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekvatorska Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Grčka"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Južna Georgija i Južni Sendvički Otoci"_s)
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
			$of("Gvineja Bisau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingonski"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("novo tai lue pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gvajana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("soranski kurdski"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"bez jezičnog sadržaja"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("jurchen pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"austrijski njemački"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("PUP Hong Kong Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("vai pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Otoci Heard i McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Hrvatska"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"švicarski njemački"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("islamski kalendar (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Mađarska"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tamašečki"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanarski otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("min nan kineski"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezija"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("staroperzijski"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irska"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napolitanski"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zazaki"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("tangut pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("nabatejsko pismo"_s)
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
			$of("type.co.eor"_s),
			$of("Europska pravila razvrstavanja"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britanski Indijskooceanski teritorij"_s)
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
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italija"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"matematičko znakovlje"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("tajske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"Računalo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("znamenke bengalskog pisma"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamajka"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("kasni srednjofrancuski do 1606."_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainuski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("mende pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("nyasa tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("znamenke pisma kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"gornjonjemački (švicarski)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("Fonetski poredak"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"budistički kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenija"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latinska Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistan"_s)
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
			$of("Sveti Kristofor i Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kannada pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("nasljedno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("kanadski francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Sjeverna Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Južna Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("pollard fonetsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"švicarski francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuvajt"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kajmanski otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazahstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"ćirilica"_s)
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
			$of("Sveta Lucija"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"fenički"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"staroslavenska crkvena čirilica"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwich’in"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"donjonjemački"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lihtenštajn"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Šri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("akadski"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("koptski"_s)
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
			$of("Phlv"_s),
			$of("pahlavi pismo"_s)
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
			$of("Kana"_s),
			$of("katakana pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("sora sompeng pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libija"_s)
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
			$of("lah"_s),
			$of("lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana pismo"_s)
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
			$of("Nshu"_s),
			$of("nushu pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Crna Gora"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint Martin"_s)
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
			$of(u"Maršalovi Otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutski"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("tajsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Vai znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Sjeverna Makedonija"_s)
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
			$of("new"_s),
			$of("newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("PUP Makao Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Sjevernomarijanski otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauretanija"_s)
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
			$of("transliteracija prema UNGEGN-u"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauricijus"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"južni altai"_s)
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
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("japanski kalendar"_s)
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
			$of("Phli"_s),
			$of("pisani pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibija"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Subsaharska Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("hebrejski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"rječničko razvrstavanje"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nova Kaledonija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles romanizacija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"ujednačena revidirana ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Otok Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigerija"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("psalter pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragva"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahawh hmong pismo"_s)
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
			$of("Phnx"_s),
			$of(u"feničko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("tsimshian"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Novi Zeland"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("meroitski kurziv"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("romski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroitic pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("krimski turski"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("staroengleski"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"sejšelski kreolski"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("staro perzijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("islamski civilni kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"kašupski"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("britanski engleski"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Francuska Polinezija"_s)
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
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre-et-Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Otoci Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Portoriko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Palestinsko područje"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("balijsko pismo"_s)
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
			$of("nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"mali grčki brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragvaj"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebrejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"škotski standardni engleski"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niujski"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Vanjska područja Oceanije"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lezgiški"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvaluanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai viet pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Svijet"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Sjevernoamerički kontinent"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Južna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceanija"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumunjska"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Srbija"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("mro pismo"_s)
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
			$of("%%METELKO"_s),
			$of(u"metelčica"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("manihejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("ugaritsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharoshthi pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudijska Arabija"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("pohnpeian"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandai pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomonski Otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Zapadna Afrika"_s)
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
			$of("013"_s),
			$of("Centralna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Švedska"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Istočna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("aramejski"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("loma pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Sjeverna Afrika"_s)
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
			$of("type.lb.strict"_s),
			$of("strogi stil prijeloma retka"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Središnja Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenija"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Južna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard i Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerike"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slovačka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("bamum pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("woleai pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sijera Leone"_s)
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
			$of("arn"_s),
			$of("mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("tamilski brojevi"_s)
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
			$of("Sveti Toma i Princip"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("najdi arapski"_s)
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
			$of("yao"_s),
			$of("yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Esvatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"aravački"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("japski"_s)
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
			$of(u"američki sustav mjera"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Sjeverna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Otoci Turks i Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Čad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francuski južni i antarktički teritoriji"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tajland"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadžikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibi"_s)
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
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Pretraživanje po početnom suglasniku hangula"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunis"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of("moderni volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turska"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad i Tobago"_s)
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
			$of("asturijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkhon pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanija"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("nepoznato pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("khudawadi pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukrajina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("aromunski"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Istočna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvinski"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("kongoanski svahili"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Južna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haidi"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Jugoistočna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("hakka kineski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinyin razvrstavanje"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Južna Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"sinhaleško pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Mali udaljeni otoci SAD-a"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Ujedinjeni narodi"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Sjedinjene Američke Države"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("havajski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("akademski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("razvrstavanje prema pojednostavljenom kineskom - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugvaj"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("pruski"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"tamašek (Srednji Atlas)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("razvrstavanje po redoslijedu poteza za kineski"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikanski Grad"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("staroprovansalski"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Sveti Vincent i Grenadini"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britanski Djevičanski otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Američki Djevičanski otoci"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vijetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogajski"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"staronorveški"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australazija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("zapadno-armenijski"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezija"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis i Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("tradicionalno razvrstavanje"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikronezijsko područje"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("Financijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of("Prethodni redoslijed razvrstavanja, radi kompatibilnosti"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("walserski"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("bassa vah pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("walamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("pseudo naglasci"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("pseudo bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinezija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of("standardna ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"gudžaratsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("jezik bez pismenosti"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("ol chiki pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("batak pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of("blissymbols"_s)
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
			$of("Standardno razvrstavanje"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("resian"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("znakovno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Južnoafrička Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("slobodni stil prijeloma retka"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devangari pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("gruzijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("zhuyin razvrstavanje"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("Pinyin romanizacija"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"nepoznato područje"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"metrički sustav"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601 kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sjeverni sotski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"znamenke teluškog pisma"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("lujzijanski kreolski"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("naxi geba pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("pojednostavljeni kineski financijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynonski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"proširene arapsko-indijske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuerski"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakota jezik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"široke znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hetitski"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("majanski hijeroglifi"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("sjevernolurski"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("koptsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"klasični newari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurtski"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("kmersko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("rimski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("jakutski"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("samarijanski aramejski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("scouse"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("santalski"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("tifinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("judejsko-perzijski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Numerički"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Izvorne znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhi pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("aluku dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Široki"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("nyamwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipinski"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delavarski"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"belučki"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slave"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("balijski"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("ugaritski"_s)
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
			$of("bamunski"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("judejsko-arapski"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"europski španjolski"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"škotski"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sicilijski"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afarski"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abhaski"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avestički"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akanski"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amharski"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonski"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arapsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("stolvizza/solbica dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("japansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arapski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("japansko slogovno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("asamski"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("linear A pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avarski"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("linear B pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"južnokurdski"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("ajmarski"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbajdžanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("khojki pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("oseacco/osojane dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"baškirski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("razvrstavanje prema korijenu i potezu"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bjeloruski"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bugarski"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetski"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretonski"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosanski"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("mjanmarsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("laoske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"n’ko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkupski"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalonski"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"čečenski"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("izmijenjen pravopis"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korzički"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("orijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"češki"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("crkvenoslavenski"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"čuvaški"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"velški"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("etiopski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Yi pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danski"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("europski portugalski"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"njemački"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Standardni format valute"_s)
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
			$of("Bugi"_s),
			$of("buginsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("staroirski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Mongolske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"latinoamerički španjolski"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("kineski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("fraser pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"grčki brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("normalni stil prijeloma retka"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldavski"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"grčki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("engleski"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("razvrstavanje prema tradicionalnom kineskom - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"španjolski"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estonski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("buhid pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("samaritansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"gornjolužički"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("hansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanunoo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("perzijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("pojednostavljeno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("arapski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicionalno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"južnoazerbajdžanski"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"čadski arapski"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("xiang kineski"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finski"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fidžijski"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"zapadnobaludžijski"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantonski"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("ferojski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("transliteracija prema BGN-u"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("zapadnofrizijski"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irski"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"škotski gaelski"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galicijski"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("gvaranski"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("nepoznati jezik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Etiopski kalendar \"Amete Alem\""_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gudžaratski"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manski"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebrejski"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindski"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("bikolski"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("bini"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hiri motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("hrvatski"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haićanski kreolski"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"mađarski"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armenski"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("kajunski francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("IPA fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonezijski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tibetske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interligua"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("sichuan ji"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("srednjofrancuski"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("starofrancuski"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"istočnofrizijski"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("sjevernofrizijski"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandski"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("talijanski"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("malajalamsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"staro južnoarapsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("sarati pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"južni sami"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("shavian pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madurski"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("lule sami"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("inari sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("gruzijski"_s)
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
			$of("wuu"_s),
			$of("wu kineski"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("skolt sami"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"gotičko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masajski"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kazaški"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("kmerski"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"karnatački"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("korejski"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kašmirski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("cirth pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("lepcha pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("avestansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdski"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kornski"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiski"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latinski"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luksemburški"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malajalamske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburški"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tibetansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("furlanski"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laoski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("imperijalni sustav mjera"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litavski"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("latvijski"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malgaški"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"maršalski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Standardno Unicode razvrstavanje"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maorski"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedonski"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malajalamski"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongolski"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathski"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malajski"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"malteški"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("burmanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("saurashtra pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armensko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"donjolužički"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("aramejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Općenito pretraživanje"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norveški bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("sjeverni ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalski"_s)
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
			$of("nizozemski"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norveški nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norveški"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"južni ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("kara-kalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"njandža"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"kačinski"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabilski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("politono"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("okcitanski"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("kaje"_s)
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
			$of("%%EMODENG"_s),
			$of("rani moderni engleski"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("armenski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromski"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("orijski"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osetski"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardinski"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("mauricijski kreolski"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pandžapski"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("serer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"lipovački dijalekt resian jezika"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("poljski"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("srednjonizozemski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"paštunski"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugalski"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("srednjoirski"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Redoslijed razvrstavanja"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("brazilski portugalski"_s)
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
			$of("Format valute"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("laosko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-satni format (0 – 23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-satni format (1 – 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("mijanmarske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"kečuanski"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapotečki"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("lanna pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-satni format (0 – 12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-satni format (0 – 11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("retoromanski"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumunjski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("orijske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("kineski decimalni brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("ruski"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("Blissovi simboli"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("zelenortski"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("australski engleski"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrtski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"ujednačena ortografija"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardski"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindski"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("sjeverni sami"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("srpsko-hrvatski"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"sinhaleški"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumerski"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slovački"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("slovenski"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("grantha pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoanski"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somalski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("arapsko-indijske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanski"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("srpski"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("svati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Računovodstveni format valute"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sesotski"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("javansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundanski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("natisone dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"švedski"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("svahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("tradicionalni kineski financijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamilski"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("burjatski"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Srednja Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"teluški"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Zapadna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tadžički"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("tajlandski"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("buginski"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("kanadski engleski"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmenski"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("cvana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonganski"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("japanski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turski"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komorski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("chakma pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatarski"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahićanski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("san giorgio/bila dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Istočna Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Sjeverna Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Zapadna Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("ujgurski"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("staro talijansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("korejsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"zajedničko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrajinski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Koptski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("standardizirani resian pravopis"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbečki"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"njemačka ortografija iz 1996."_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("donjosaksonski"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("syloti nagri pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("varang kshiti pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("kalendar Republike Kine"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vijetnamski"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("khotanese"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("format vremena (12 ili 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("taraskievica pravopis"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"klasični sirski"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanya pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"kiče"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("valonski"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauski"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("sirijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"grčko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan kineski"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("sumersko-akadsko cuneiform pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"standardni marokanski tamašek"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("moderni standardni arapski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"unificirani kanadski aboriđinski slogovi"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongolsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"mandžurski"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("fraktur latinica"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("anatolijski hijeroglifi"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipurski"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latinica"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("keltska latinica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("pojednostavljeni kineski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("tradicionalni kineski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("mali rimski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("pamaka dijalekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("likijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("moon pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohok"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("rani moderni francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidiš"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("sirijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("deseret pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("jorupski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Tradicionalni brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"meksički španjolski"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("pismo zapadne Sirije"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("turski - otomanski"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("sirijsko estrangelo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("karijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("kineski"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("afaka pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("staro permic pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("stil prijeloma retka"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("razvrstavanje po abecedi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monotono"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("gruzijsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("sharada pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("japanski financijski brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"čamsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"pismo istočne Sirije"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("staro sjevernoarapsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("reformirano razvrstavanje"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("tagalog pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("egipatsko narodno pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("egipatsko hijeratsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("palmyrene pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("egipatski hijeroglifi"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("gruzijsko khutsuri pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("kineski (pojednostavljeni)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"staro mađarsko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"tradicionalan njemački pravopis"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("naurski"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("kineski (tradicionalni)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("sundansko pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("khmerske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("tirhuta pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("valencijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("cypriot pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("unificirana turska abeceda"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("znamenke pisma gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"više jezika"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("sustav mjernih jedinica"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagoljica"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilbertski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"Uobičajeni pravopis"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"čeroki pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karipski"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamilske znamenke"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karachay-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingušetski"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("karelijski"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("brojevi"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"kuruški"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"teluško pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		})
	}));
	return data;
}

LocaleNames_hr::LocaleNames_hr() {
}

$Class* LocaleNames_hr::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_hr, name, initialize, &_LocaleNames_hr_ClassInfo_, allocate$LocaleNames_hr);
	return class$;
}

$Class* LocaleNames_hr::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun