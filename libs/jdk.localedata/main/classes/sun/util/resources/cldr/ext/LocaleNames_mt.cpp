#include <sun/util/resources/cldr/ext/LocaleNames_mt.h>

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

$MethodInfo _LocaleNames_mt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_mt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mt_MethodInfo_
};

$Object* allocate$LocaleNames_mt($Class* clazz) {
	return $of($alloc(LocaleNames_mt));
}

void LocaleNames_mt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mt::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_TV, "Tuvalu"_s);
	$var($String, metaValue_ar, u"Għarbi"_s);
	$var($String, metaValue_el, "Grieg"_s);
	$var($String, metaValue_la, "Latin"_s);
	$var($String, metaValue_peo, "Persjan Antik"_s);
	$var($String, metaValue_Hant, "Tradizzjonali"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("Kolonjan"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"Mirandiż"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("Atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"Eġizzjan (Antik)"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"Raġastani"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("Timne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("Teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("Rapanwi"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("Tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension Island"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotongani"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"l-Emirati Għarab Magħquda"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("Fjamming"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("l-Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua u Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Kalendarju Etjopiku"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("l-Albanija"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("l-Armenja"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("l-Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("l-Antartika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"l-Arġentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("is-Samoa Amerikana"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("l-Awstrija"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("l-Awstralja"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Ingliż Amerikan"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"il-Gżejjer Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"l-Ażerbajġan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"il-Bożnija-Ħerzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("il-Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"il-Belġju"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Ġermaniż Medjevali Pulit"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("il-Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("il-Bulgarija"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("il-Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("il-Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("il-Benin"_s)
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
			$of("Kutenaj"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("il-Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("il-Bolivja"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("in-Netherlands tal-Karibew"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Il-Brażil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("il-Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("il-Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Gżira Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("il-Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("il-Belarussja"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("il-Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("il-Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Gżejjer Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("ir-Repubblika Demokratika tal-Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"ir-Repubblika Ċentru-Afrikana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("il-Kongo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"l-Iżvizzera"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("il-Kosta tal-Avorju"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Gżejjer Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"iċ-Ċili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("il-Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"iċ-Ċina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("il-Kolombja"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"il-Gżira Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("il-Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"il-Gżira Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Ċipru"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"ir-Repubblika Ċeka"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"il-Ġermanja"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"Ġermaniż Antik, Pulit"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"Aċiniż"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("il-Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("id-Danimarka"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Akoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("ir-Repubblika Dominicana"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("Gotiku"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"l-Alġerija"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinjan"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta u Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("Chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("l-Ekwador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("Papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("l-Estonja"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"l-Eġittu"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"is-Saħara tal-Punent"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("Palawjan"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"Ċukiż"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("Chinook Jargon"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"Ċipewjan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("Choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("l-Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanja"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("l-Etjopja"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Unjoni Ewropea"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Kalendarju Gregorjan"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("il-Finlandja"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fiġi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"il-Gżejjer Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikroneżja"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"il-Gżejjer Faeroe"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Franza"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Grieg, Antik"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("il-Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Votik"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("ir-Renju Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Pidgin Niġerjan"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("il-Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"il-Guyana Franċiża"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("il-Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Ġibiltà"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"Afriħili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"Ingliż Medjevali"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("il-Gambja"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("il-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("il-Guinea Ekwatorjali"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"il-Greċja"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"il-Georgia tan-Nofsinhar u l-Gżejjer Sandwich tan-Nofsinhar"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("il-Gwatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("il-Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("Tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("il-Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"Kurd Ċentrali"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Bla kontenut lingwistiku"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Ġermaniż Awstrijak"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ir-Reġjun Amministrattiv Speċjali ta’ Hong Kong tar-Repubblika tal-Poplu taċ-Ċina"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"il-Gżejjer Heard u l-Gżejjer McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("il-Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("il-Kroazja"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Ġermaniż tal-Iżvizzera"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("il-Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("l-Ungerija"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("Tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"il-Gżejjer Canary"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"l-Indoneżja"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("l-Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Naplitan"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Iżrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("l-Indja"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territorju Brittaniku tal-Oċean Indjan"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("l-Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("l-Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"l-iżlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("l-Italja"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Kalendarju Iżlamiku"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"il-Ġamajka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"il-Ġordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"il-Ġappun"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Ajnu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("Nyasa Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Ġermaniż Żvizzeru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Kalendarju Buddist"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("il-Kenja"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Amerika Latina"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"il-Kirgiżistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("il-Kambodja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comoros"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts u Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Franċiż Kanadiż"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"il-Korea ta’ Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"il-Korea t’Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Franċiż Żvizzeru"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("il-Kuwajt"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"il-Gżejjer Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"il-Każakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Ċirilliku"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("il-Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("il-Libanu"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"Feniċju"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Gwiċin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Ġermaniż Komuni"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("il-Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("is-Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("Akkadjen"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Koptiku"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("il-Liberja"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("il-Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("il-Litwanja"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("il-Lussemburgu"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("il-Latvja"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("il-Libja"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("Ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("Lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("Langi"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("il-Marokk"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("il-Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("il-Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("Lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Gżejjer Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"il-Maċedonja ta’ Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("il-Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("il-Myanmar/Burma"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("il-Mongolja"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ir-Reġjun Amministrattiv Speċjali tal-Macao tar-Repubblika tal-Poplu taċ-Ċina"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Ġżejjer Mariana tat-Tramuntana"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("il-Mauritania"_s)
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
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("Altai tan-Nofsinhar"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("il-Maldivi"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("il-Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("il-Messiku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Kalendarju Ġappuniż"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("il-Malasja"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("il-Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("in-Namibja"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Kalendarju Ebrajk"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("New Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"in-Niġer"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Gżira Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"in-Niġerja"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("Taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("in-Nikaragwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("in-Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"in-Norveġja"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("in-Nepal"_s)
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
			$of("Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("Tsimshian"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romanesk"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Tork tal-Krimea"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Ingliż Antik"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("l-Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"Franċiż tas-Seselwa Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("il-Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Kalendarju Islamiku-Ċivili"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kashubian"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Ingliż Brittaniku"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"il-Perù"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polineżja Franċiża"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua New Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("il-Filippini"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("il-Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("il-Polonja"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre u Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Gżejjer Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("it-Territorji Palestinjani"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("il-Portugall"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Nijas"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("il-Paragwaj"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("il-Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niuean"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"Leżgjan"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Dinja"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Affrika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Amerika t’Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Oċejanja"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("ir-Rumanija"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("is-Serbja"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("ir-Russja"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("ir-Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("l-Arabia Sawdija"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Ponpejan"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"il-Gżejjer Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Affrika tal-Punent"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("is-Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("is-Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Amerika Ċentrali"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"l-Iżvezja"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Affrika tal-Lvant"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Aramajk"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Affrika ta’ Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Affrika Nofsani"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("is-Slovenja"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Affrika t’Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard u Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("is-Slovakkja"_s)
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
			$of("is-Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("is-Somalja"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("Mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("is-Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"is-Sudan t’Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé u Príncipe"_s)
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
			$of("is-Sirja"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("Yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("is-Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("Yapese"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"il-Gżejjer Turks u Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"iċ-Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"It-Territorji Franċiżi tan-Nofsinhar"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("it-Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("it-Tajlandja"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"it-Taġikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibew"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("it-Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("it-Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"it-Tuneżija"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("it-Turkija"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad u Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("it-Tajwan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Asturian"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("it-Tanzanija"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Kitba Mhux Magħrufa"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("l-Ukrajna"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromanjan"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asja tal-Lvant"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuvinjan"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("Swahili tar-Repubblika Demokratika tal-Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Asja t’Isfel Ċentrali"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Asja tax-Xlokk"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("l-Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Ordni tal-Pinjin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Ewropa t’Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Il-Gżejjer Minuri Mbiegħda tal-Istati Uniti"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("l-Istati Uniti"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Ħawajjan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Ordni Ċiniż Sempliċi (GB2312)"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("l-Urugwaj"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Prussu"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"l-Użbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Tamazight tal-Atlas Ċentrali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Ordni Maħżuża"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("l-Istat tal-Belt tal-Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("Provenzal Antik"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent u l-Grenadini"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("il-Venezwela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"il-Gżejjer Verġni Brittaniċi"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"il-Gżejjer Verġni tal-Istati Uniti"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("il-Vjetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("Nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("Nors Antik"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Awstralja u New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesja"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis u Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Reġjun ta’ Mikroneżja"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("Ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("Lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Walamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("Washo"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinesja"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("il-Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Mhux Miktub"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("il-Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Ordni Standard"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"l-Afrika t’Isfel"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"iż-Żambja"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"iż-Żimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Reġjun Mhux Magħruf"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("Kalendarju ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Soto tat-Tramuntana"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"Lożi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hittite"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Taita"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Luri tat-Tramuntana"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Newari Klassiku"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Samaritan Aramajk"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("Sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("Lhudi-Persjan"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("Ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Luba-Luluwa"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("Luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"Njamweżi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("Nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filippin"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delawerjan"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"Baluċi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slav"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Baliniż"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("Ugaritiku"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basa"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"Lhudi-Għarbi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Spanjol Ewropew"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"Skoċċiż"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sqalli"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"Abkażjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("Avestan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amhariku"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"Aragoniż"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"Assamiż"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avarik"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Ażerbajġani"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarussu"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgaru"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibetjan"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Bożnijaku"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("Ortografija Irriveda"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsiku"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Ċek"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Slaviku tal-Knisja"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Welsh"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Daniż"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Portugiż Ewropew"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Ġermaniż"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Beja"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"Irlandiż Antik"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Spanjol Latin Amerikan"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Kalendarju Ċiniż"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldovan"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Ingliż"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Ordni Ċiniż Tradizzjonali (Big5)"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanjol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estonjan"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Bask"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"Sorbjan ta’ Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persjan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Simplifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Numri tal-Punent"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Finlandiż"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"Fiġjan"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"Kantoniż"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Faroese"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Franċiż"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Frisian tal-Punent"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Irlandiż"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Galliku Skoċċiż"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Galiċjan"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Lingwa Mhix Magħrufa"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Ebrajk"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("Bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("Hiri Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kroat"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Creole ta’ Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Ungeriż"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Armen"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Indoneżjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Sichuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Franċiż Medjevali"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupjak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"Franċiż Antik"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Iżlandiż"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Taljan"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Ġappuniż"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("Dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Sami tan-Nofsinhar"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Ġavaniż"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Maduriż"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lule Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inari Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Ġorġjan"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Skolt Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuju"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Masai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Każak"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Korean"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Korniku"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Kirgiż"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Lussemburgiż"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgish"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingaljan"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Frijuljan"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Laosjan"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Litwan"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Latvjan"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"Marshalljaniż"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Maċedonjan"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Mongoljan"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malay"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Malti"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Burmiż"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Sorbjan Komuni"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Naurujan"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Bokmal Norveġiż"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Ndebeli tat-Tramuntana"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Nepaliż"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Olandiż"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"Ninorsk Norveġiż"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"Norveġiż"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("Ndebele tan-Nofsinhar"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Kara-Kalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("Kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabuljan"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"Oċċitan"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("Jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"Oġibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("Kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossettiku"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardian"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Sranan Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Dwala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("Serer"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Pollakk"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Olandiż Medjevali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Kalendarju Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Portugiż"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Irlandiż Medjevali"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Kollazjoni"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Portugiż tal-Brażil"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("Tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Makhuwa-Meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Kalendarju"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Metà"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotec"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("Bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("Makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Romanz"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Munita"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Rumen"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russu"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinjarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Cape Verdjan"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Ingliż Awstraljan"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardinjan"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Sami tat-Tramuntana"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("Serbo-Kroat"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("Sumerjan"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slovakk"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Sloven"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Albaniż"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serb"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Soto tan-Nofsinhar"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Sundaniż"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Żvediż"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("Ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("Iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asja"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Burjat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Asja Ċentrali"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asja tal-Punent"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tajik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Tajlandiż"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Buginese"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Ingliż Kanadiż"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tongan"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Tork"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("Komorjan"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"Taħitjan"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Ewropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Ewropa tal-Lvant"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Ewropa ta’ Fuq"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Ewropa tal-Punent"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uyghur"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Komuni"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukren"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("Kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("Sassonu Komuni"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Vjetnamiż"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"Kotaniż"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("Volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"K’iche’"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Sirjan"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Tamazight Standard tal-Marokk"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"Għarbi Standard Modern"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("Gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("Manchu"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"Osaġjan"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("Spanjol tal-Messiku"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("Tork Ottoman"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Ċiniż"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Ordni Telefonika"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Ċiniż Simplifikat"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosrejan"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Ċiniż Tradizzjonali"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Lingwi Diversi"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Kaddo"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Kriek"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertjan"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Karib"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karachay-Balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Ingush"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Kareljan"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Kurux"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("Bafia"_s)
		})
	}));
	return data;
}

LocaleNames_mt::LocaleNames_mt() {
}

$Class* LocaleNames_mt::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mt, name, initialize, &_LocaleNames_mt_ClassInfo_, allocate$LocaleNames_mt);
	return class$;
}

$Class* LocaleNames_mt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun