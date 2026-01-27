#include <sun/util/resources/cldr/ext/LocaleNames_br.h>

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

$MethodInfo _LocaleNames_br_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_br, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_br, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_br_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_br",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_br_MethodInfo_
};

$Object* allocate$LocaleNames_br($Class* clazz) {
	return $of($alloc(LocaleNames_br));
}

void LocaleNames_br::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_br::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_bn, "bengali"_s);
	$var($String, metaValue_gu, "gujarati"_s);
	$var($String, metaValue_km, "khmer"_s);
	$var($String, metaValue_la, "latin"_s);
	$var($String, metaValue_ml, "malayalam"_s);
	$var($String, metaValue_or, "oriya"_s);
	$var($String, metaValue_te, "telougou"_s);
	$var($String, metaValue_th, "thai"_s);
	$var($String, metaValue_tl, "tagalog"_s);
	$var($String, metaValue_chr, "cherokee"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($String, metaValue_Hans, "eeunaet"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("koluneg"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirandeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"arouezioù"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"sifroù Tai Tham Tham"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"fromlunioù"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("rannyezh Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("megreleg"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("chakmaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("henegipteg"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("tesoeg"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Enez Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of(u"rannyezhoù Barlavento kreoleg ar Cʼhab-Glas"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emirelezhioù Arab Unanet"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flandrezeg"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua ha Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("deiziadur etiopiat"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
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
			$of("Antarktika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Arcʼhantina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Amerikan"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Aostria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Aostralia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("saozneg Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Inizi Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaidjan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("armenianeg ar Reter"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia ha Herzegovina"_s)
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
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("koumikeg"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("krennalamaneg uhel"_s)
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
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erza"_s)
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
			$of("Karib Nederlandat"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("sogaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhoutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Enez Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("deiziadur persek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CREISS"_s),
			$of(u"rannyezhoù Creissent"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"niveroù hebraek"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Inizi Kokoz"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazanderaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Republik Kreizafrikan"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suis"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Aod an Olifant"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Inizi Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kameroun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Sina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Enez Clipperton"_s)
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
			$of("Kab-Glas"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Enez Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kiprenez"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"sifroù balinek"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Tchekia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"flandrezeg ar c’hornôg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"volapük klasel"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alamagn"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("henalamaneg uhel"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("achineg"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("chigaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"sifroù devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danmark"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"niveroù armenianek bihan"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Republik Dominikan"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("goteg"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigreaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta ha Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
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
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Sahara ar Cʼhornôg"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palau"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("marieg"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("choktaw"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spagn"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Unaniezh Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elameg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("deiziadur gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("takad an euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"sifroù gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adygeieg"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("arabeg Tunizia"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fidji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Inizi Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezia"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Inizi Faero"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamilek"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Frañs"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SIMPLE"_s),
			$of(metaValue_Hans)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("pikardeg"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of("lizherenneg Dajnko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("deiziadur indian"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("romagnoleg"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"hencʼhresianeg"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("votyakeg"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Rouantelezh-Unanet"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("pidjin Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Jorjia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Gwiana cʼhall"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Gwernenez"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Jibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Greunland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("krennsaozneg"_s)
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
			$of("Gwadeloup"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Ginea ar Cʼheheder"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Gres"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Inizi Georgia ar Su hag Inizi Sandwich ar Su"_s)
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
			$of("pdc"_s),
			$of("alamaneg Pennsylvania"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Ginea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tinglit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("kurdeg sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("diyezh"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VIVARAUP"_s),
			$of("vivaroalpeg"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("alamaneg Aostria"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong RMD Sina"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Inizi Heard ha McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("alamaneg Suis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("deiziadur islamek (Umm al-Qura)"_s)
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
			$of("tmh"_s),
			$of("tamacheg"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Inizi Kanariez"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("sinaeg Min Nan"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezia"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("henberseg"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of("adlam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"sifroù Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Iwerzhon"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napolitaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("rannyezh Ndyuka"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"sifroù Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zazakeg"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Enez Vanav"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"reolennoù urzhiañ europat"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Tiriad breizhveurat Meurvor Indez"_s)
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
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("notadur jedoniel"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"sifroù thai"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of("voroeg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("stlenneg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"sifroù bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"niveroù kirillek"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jerzenez"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("deiziadur islamek"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of("serbeg gant distagadur ekavian"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"krenncʼhalleg diwezhañ"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainoueg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KOCIEWIE"_s),
			$of("rannyezh polonek Kociewie"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusiieg"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("nyasa tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"sifroù kanarek"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("alamaneg uhel Suis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("deiziadur boudaat"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Amerika Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kyrgyzstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komorez"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts ha Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"hêrezh"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("galleg Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Korea an Norzh"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Korea ar Su"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("galleg Suis"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Koweit"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Inizi Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kirillek"_s)
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
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("fenikianeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("kirillek henslavonek"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwich’in"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of("reizhskrivadur rusianek goude 1917"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("alamaneg izel"_s)
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
			$of("akk"_s),
			$of("akadeg"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kopteg"_s)
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
			$of("Luksembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia"_s)
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
			$of("akz"_s),
			$of("alabamaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of("sanskriteg klasel"_s)
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
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
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
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Inizi Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleouteg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"sifroù vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Makedonia an Norzh"_s)
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
			$of("newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macau RMD Sina"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of("gegeg"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Inizi Mariana an Norzh"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Maouritania"_s)
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
			$of("Moris"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("altaieg ar Su"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivez"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Mecʼhiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("deiziadur japanat"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ARANES"_s),
			$of("araneg"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Afrika issaharat"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("deiziadur hebraek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"urzh rummañ ar geriadur"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledonia Nevez"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("romanekadur Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("turoyoeg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("kerneveureg unvan reizhet"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Enez Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Izelvroioù"_s)
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
			$of("Phnx"_s),
			$of("fenikianek"_s)
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
			$of("Zeland-Nevez"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of("emglev 1945 war reizhskrivadur portugaleg Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("romanieg"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("turkeg Krimea"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("hensaozneg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRMISTR"_s),
			$of("skritur okitanek mistralek"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of(u"reizhskrivadur rusianek 1708 Pêr I"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("kreoleg Sechelez"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("persek kozh"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panamá"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("deiziadur islamek keodedel"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("kachoubeg"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("saozneg Breizh-Veur"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Perou"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinezia Cʼhall"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papoua Ginea-Nevez"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinez"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NICARD"_s),
			$of("nisardeg"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Sant-Pêr-ha-Mikelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Enez Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Tiriadoù Palestina"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("balinek"_s)
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
			$of(u"niveroù gresianek bihan"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebraek"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("saozneg standart Skos"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of("kreoleg Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("piemonteg"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niue"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Oseania diabell"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezgi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("lizherenneg fonetek ouralek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"sifroù takri"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of(u"rannyezhoù Sotavento kreoleg ar Cʼhab-Glas"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Bed"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("aoeg"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Norzhamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Ar Reünion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Suamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of("lingua franca nova"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("ponteg"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oseania"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of(u"rannyezh romañchek sursilvan"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Roumania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("lizherenneg Metelko"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("manikeek"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("ougaritek"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabia Saoudat"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("pohnpei"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Inizi Salomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawakeg"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Afrika ar Cʼhornôg"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Sechelez"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Soudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Kreizamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Sveden"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Afrika ar Reter"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("arameeg"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Afrika an Norzh"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapour"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint-Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("stil torr linenn strizh"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Afrika ar Cʼhreiz"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Afrika ar Su"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amerikaoù"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("bamounek"_s)
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
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("araoukaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"niveroù tamilek hengounel"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of("araona"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Susoudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé ha Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("arabeg Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
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
			$of("yao"_s),
			$of("yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("arawakeg"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of("arabeg Egipt"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("arabeg Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("yapeg"_s)
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
			$of(u"reizhiad vuzuliañ SU"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Amerika an Norzh"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Inizi Turks ha Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tchad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Douaroù aostral Frañs"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"yezh sinoù Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailand"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tadjikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karib"_s)
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
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunizia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"volapük modern"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkia"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad ha Tobago"_s)
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
			$of("asturianeg"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("ngoumbeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("skritur dianav"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("ligurieg"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("aroumaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Azia ar Reter"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("touva"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("swahili Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Azia ar Su"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Azia ar Gevred"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Ouganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("sinaeg Hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"urzh rummañ pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa ar Su"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("singhalek"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Inizi diabell ar Stadoù-Unanet"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Broadoù unanet"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Stadoù-Unanet"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaieg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("belaruseg akademek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IVANCHOV"_s),
			$of("reizhskrivadur bulgarek Ivanchov"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"urzh rummañ sinaek eeunaet - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("henbruseg"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Ouzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazigteg Kreizatlas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"urzh rummañ an tresoù"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"henbrovañseg"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Sant Visant hag ar Grenadinez"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HSISTEMO"_s),
			$of("esperanteg sistem H"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Inizi Gwercʼh Breizh-Veur"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Inizi Gwercʼh ar Stadoù-Unanet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LEMOSIN"_s),
			$of("rannyezh Limousin"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Viêt Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogay"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("hennorseg"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Aostralazia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"armenianeg ar Cʼhornôg"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis ha Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"urzh rummañ hengounel"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Rannved Mikronezia"_s)
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
			$of("nov"_s),
			$of("novial"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of("romanekadur Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"sifroù meitei mayek"_s)
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
			$of("pouez-mouezh gaou"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("BiDi gaou"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinezia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of("kerneveureg standart"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"sifroù brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("anskrivet"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("batak"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("nkoeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"urzh rummañ standart"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of("rannyezh aniiek Balanka"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("resianeg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of(u"rannyezh romañchek sutsilvan"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"sifroù cham"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEWFOUND"_s),
			$of("saozneg an Douar-Nevez"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Suafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"sifroù sundanek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("stil torr linenn lezober"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"niveroù jorjianek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"urzh rummañ Zhuyin"_s)
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
			$of("%%PINYIN"_s),
			$of("romanekadur pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Rannved dianav"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("reizhiad vetrek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("deiziadur ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho an Norzh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"sifroù telougou"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("kreoleg Louiziana"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONKIRSH"_s),
			$of("lizherenneg fonetek Kirshenbaum"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ASANTE"_s),
			$of("achanti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AUVERN"_s),
			$of("arverneg"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"niveroù sinaek eeunaet an arcʼhant"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"sifroù arabek indian astennet"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nouereg"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"sifroù led plaen"_s)
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
			$of(u"hieroglifoù mayaek"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("loureg an Norzh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"urzh rummañ ar fromlunioù"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("koptek"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("newari klasel"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("oudmourteg"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("%%FONNAPA"_s),
			$of("lizherenneg fonetek Norzh Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("deiziadur islamek (Arabia Saoudat)"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"niveroù roman"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("yakouteg"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("arameeg ar Samaritaned"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("saozneg Liverpool (scouse)"_s)
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
			$of("santali"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("yuzev-perseg"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambayeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("rannyezh aloukou"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of("rannyezh euskarek Bizkaia"_s)
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
			$of("%%GRITAL"_s),
			$of("skritur okitanek Italia"_s)
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
			$of("filipineg"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("baloutchi"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("balineg"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("ougariteg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"sifroù warang"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"finneg traoñienn an Torne"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("bavarieg"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ABL1943"_s),
			$of(u"doare reizhskrivañ 1943"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("yuzev-arabeg"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("spagnoleg Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("skoteg"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sikilieg"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhazeg"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("avesteg"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"sifroù chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amhareg"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arabek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("rannyezh Stolvizza/Solbica"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("japanek"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"silabennaouegoù japanek"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("asameg"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("sasareseg"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbaidjaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CISAUP"_s),
			$of("kizalpeg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("rannyezh Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of("lizherenneg fonetek Unifon"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("bachkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"urzh rummañ UniHan"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("belaruseg"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgareg"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"sifroù javanek"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibetaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("brezhoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosneg"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"sifroù laosek"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("tchetcheneg"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorru"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("reizhskrivadur reizhet"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korseg"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("kri"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("tchekeg"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("slavoneg iliz"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("tchouvatch"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("kembraeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"niveroù etiopiat"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("daneg"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("portugaleg Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("alamaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("furmad moneiz standart"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("bedawieg"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("bougiek"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("heniwerzhoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"sifroù mongolek"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("spagnoleg Amerika latin"_s)
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
			$of("deiziadur sinaat"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of("sinaeg lennegel"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"niveroù gresianek"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("stil torr linenn boas"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldoveg"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("gresianeg"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("saozneg"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanteg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"urzh rummañ sinaek hengounel - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("spagnoleg"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("han gant bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("euskareg"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangeul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("samaritek"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tacheliteg"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("uhelsorabeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"sinalunioù (han)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of("rannyezh skotek Ulad"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shan"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("perseg"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(metaValue_Hans)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"sifroù arabek ar Cʼhornôg"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("hengounel"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of("arabeg Tchad"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("sinaeg Xian"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finneg"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fidjieg"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"baloutchi ar Cʼhornôg"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("faeroeg"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("galleg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AKUAPEM"_s),
			$of("akuapem"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"frizeg ar Cʼhornôg"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("iwerzhoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("skoseg"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galizeg"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("yezh dianav"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("deiziadur etiopiat Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("deiziadur islamek steredoniel"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manaveg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"sifroù osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("haousa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebraeg"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("bikol"_s)
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
			$of("kroateg"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitieg"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("hungareg"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armenianeg"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("galleg cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("lizherenneg fonetek etrebroadel"_s)
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
			$of("indonezeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"sifroù tibetan"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GASCON"_s),
			$of("gwaskoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("yieg Sichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"krenncʼhalleg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of(u"romañcheg Grischun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of("emglev 1990 war ar reizhskrivadur portugalek"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"hencʼhalleg"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("arpitaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("frizeg ar Reter"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("frizeg an Norzh"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandeg"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italianeg"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CORNU"_s),
			$of("saozneg Kerne-Veur"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of("uhelnorvegeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of("henarabek ar Su"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"sifroù lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"sámi ar Su"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("sanskriteg hiron boudaat"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madoureg"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"sámi Luleå"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"sámi Inari"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("jorjianeg"_s)
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
			$of("sinaeg Wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"sámi Skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("gotek"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kwanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazak"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("greunlandeg"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kanareg"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("koreaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanouri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("avestek"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdeg"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komieg"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kerneveureg"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luksembourgeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"sifroù malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limbourgeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tibetanek"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("frioulaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("laoseg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"reizhiad vuzuliañ RU"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"sifroù Tai Tham Hora"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("latvieg"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdieg"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgacheg"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"urzh rummañ Unicode dre ziouer"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongoleg"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malayseg"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("malteg"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birmaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armenianek"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("izelsorabeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("arameek impalaerel"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("naurueg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("enklask hollek"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norvegeg bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele an Norzh"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepaleg"_s)
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
			$of("nederlandeg"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("norvegeg nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norvegeg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PROVENC"_s),
			$of(u"provañseg"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele ar Su"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"navacʼho"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabileg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("gresianeg liestonel"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("okitaneg"_s)
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
			$of("%%EMODENG"_s),
			$of("saozneg rakvodern"_s)
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
			$of(u"niveroù armenianek"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromoeg"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("oseteg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of("romanekadur ALA-LC 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardeg"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("moriseg"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("douala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("serer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("rannyezh resianek Lipovaz"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("poloneg"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("nederlandeg krenn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("deiziadur dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of(u"rannyezh romañchek Vallader"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pachto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugaleg"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("krenniwerzhoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"doare rummañ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("portugaleg Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"lizherenneg Bohorič"_s)
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
			$of("furmad moneiz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"sifroù nʼko"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("deiziadur"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of(u"rannyezh romañchek Jauer"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("laosek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of(u"rannyezh romañchek surmiran"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"metaʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"reizhiad 24 eurvezh (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"reizhiad 24 eurvezh (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("sahoeg"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("brahweg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"sifroù myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("kechuaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapoteg"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of("sanskriteg vedek"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("romanekadur kantonek Jyutping"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"reizhiad 12 eurvezh (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"reizhiad 12 eurvezh (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"romañcheg"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("moneiz"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("roumaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"sifroù oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"niveroù sinaek dekvedennek"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rusianeg"_s)
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
			$of(u"arouezioù Bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmakeg"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("saozneg Aostralia"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"berrskriverezh Duployé"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskriteg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("kerneveureg unvan"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"sámi an Norzh"_s)
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
			$of("serb-kroateg"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("singhaleg"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumereg"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovakeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("sloveneg"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BASICENG"_s),
			$of("saozneg diazez"_s)
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
			$of("type.nu.arab"_s),
			$of(u"sifroù arabek indian"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbeg"_s)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of("{0} : {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"furmad unanenn jediñ"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sotho ar Su"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("javanek"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("rannyezh Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("svedeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of(u"sifroù wantcho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"niveroù sinaek hengounel an arcʼhant"_s)
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
			$of("tamileg"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Azia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("bouriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Azia ar Cʼhreiz"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Azia ar Cʼhornôg"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("%%SPANGLIS"_s),
			$of("spanglish"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrigna"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugi"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koroeg"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("saozneg Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmeneg"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
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
			$of("dyo"_s),
			$of("diola"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"niveroù japanek"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turkeg"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komoreg"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("chakmaek"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%XSISTEMO"_s),
			$of("esperanteg sistem X"_s)
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
			$of("tahitianeg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("rannyezh San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa ar Reter"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa an Norzh"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazagaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Europa ar Cʼhornôg"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("ouigoureg"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("henitalek"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("koreanek"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("boutin"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukraineg"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of("zelandeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("deiziadur kopt"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("ourdou"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("reizhskrivadur resianek skoueriekaet"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmouk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("ouzbekeg"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("reizhskrivadur alamanek 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("saksoneg izel"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("deiziadur Republik Sina"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnameg"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("khotaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"kelcʼhiad eurioù"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("belaruseg Taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("sirieg klasel"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"kʼicheʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of("kichuaeg Chimborazo"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("walloneg"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagaouzeg"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("sirieg"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("gresianek"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("sinaeg Gan"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidiek"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"gennheñvel"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("tamacheg Maroko standart"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("arabeg modern"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("silabennaoueg engenidik unvan Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("treuzskrivadur X-SAMPA"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongolek"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("manchou"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("silezieg"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"hieroglifoù Anatolia"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("latin gouezelek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"niveroù sinaek eeunaet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"niveroù sinaek hengounel"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"niveroù roman bihan"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("rannyezh Pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("likiek"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kakoeg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("galleg rakvodern"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("more"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("siriek"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yorouba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"spagnoleg Mecʼhiko"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"siriek ar C’hornôg"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("turkeg otoman"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"siriek Estrangelā"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalendjineg"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("sinaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("stil torr linenn"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zouloueg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"urzh rummañ al levr-pellgomz"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("gresianeg untonel"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("jorjianek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LENGADOC"_s),
			$of("lengadokeg"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"niveroù japanek an arcʼhant"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("gezeg"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"marieg ar Cʼhornôg"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("siriek ar Reter"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"sifroù shan Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("henarabek an Norzh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"sifroù ol chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"urzh rummañ adreizhet"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of(u"sanskriteg itihâsa"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"hieroglifoù egiptek"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("sinaeg eeunaet"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("henhungarek"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("reizhskrivadur alamanek hengounel"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosrae"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("venezieg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH2"_s),
			$of("reizhskrivadur pahawh hmong lankad 2"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH3"_s),
			$of("reizhskrivadur pahawh hmong lankad 3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH4"_s),
			$of(u"reizhskrivadur pahawh hmong doare diwezhañ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"sifroù limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("sinaeg hengounel"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("sundanek"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("vepseg"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRCLASS"_s),
			$of("skritur okitanek klasel"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"sifroù khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilokanoeg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("valensianeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("silabennaoueg kipriek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("lizherenneg latin turkek unvan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of("serbeg gant distagadur ijekavian"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("moundangeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"sifroù gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BORNHOLM"_s),
			$of("rannyezh Bornholm"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"yezhoù lies"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"rannyezh romañchek Puter"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"reizhiad vuzuliañ"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("muskogi"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagolitek"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilberteg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("kerneveureg kumun"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karibeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"sifroù tamilek"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karatchay-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingoucheg"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("krio"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dareg"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("karelieg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of("skritur Oxford English Dictionary"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("touloueg"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"niveroù"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafiaeg"_s)
		})
	}));
	return data;
}

LocaleNames_br::LocaleNames_br() {
}

$Class* LocaleNames_br::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_br, name, initialize, &_LocaleNames_br_ClassInfo_, allocate$LocaleNames_br);
	return class$;
}

$Class* LocaleNames_br::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun