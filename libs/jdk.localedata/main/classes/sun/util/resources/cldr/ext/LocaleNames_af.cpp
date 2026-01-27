#include <sun/util/resources/cldr/ext/LocaleNames_af.h>

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

$MethodInfo _LocaleNames_af_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_af, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_af, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_af_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_af",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_af_MethodInfo_
};

$Object* allocate$LocaleNames_af($Class* clazz) {
	return $of($alloc(LocaleNames_af));
}

void LocaleNames_af::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_af::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, "Nauru"_s);
	$var($String, metaValue_TV, "Tuvalu"_s);
	$var($String, metaValue_ar, "Arabies"_s);
	$var($String, metaValue_bn, "Bengaals"_s);
	$var($String, metaValue_bo, "Tibettaans"_s);
	$var($String, metaValue_el, "Grieks"_s);
	$var($String, metaValue_he, "Hebreeus"_s);
	$var($String, metaValue_hy, "Armeens"_s);
	$var($String, metaValue_ja, "Japannees"_s);
	$var($String, metaValue_ka, "Georgies"_s);
	$var($String, metaValue_km, "Khmer"_s);
	$var($String, metaValue_kn, "Kannada"_s);
	$var($String, metaValue_ko, "Koreaans"_s);
	$var($String, metaValue_la, "Latyn"_s);
	$var($String, metaValue_lo, "Lao"_s);
	$var($String, metaValue_ml, "Malabaars"_s);
	$var($String, metaValue_mn, "Mongools"_s);
	$var($String, metaValue_or, "Oriya"_s);
	$var($String, metaValue_si, "Sinhala"_s);
	$var($String, metaValue_ta, "Tamil"_s);
	$var($String, metaValue_te, "Teloegoe"_s);
	$var($String, metaValue_th, "Thai"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("Keuls"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandees"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Simbole"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("Tsjaakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("Antieke Egipties"_s)
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
			$of("Rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascensioneiland"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotongaans"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetoem"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Verenigde Arabiese Emirate"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("Vlaams"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua en Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Etiopiese kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Tydsone"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albanië"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armenië"_s)
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
			$of(u"Argentinië"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikaanse Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Oostenryk"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Australië"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("Engels (VSA)"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Ålandeilande"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbeidjan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnië en Herzegowina"_s)
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
			$of("Bangladesj"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"België"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarye"_s)
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
			$of(u"Sint Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Broenei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bolivië"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Karibiese Nederland"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brasilië"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhoetan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvet-eiland"_s)
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
			$of("Persiese kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Hebreeuse syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokoseilande"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Masanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Demokratiese Republiek van die Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Sentraal-Afrikaanse Republiek"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Switserland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Ivoorkus"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookeilande"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kameroen"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Colombië"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clippertoneiland"_s)
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
			$of("Kaap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Kerseiland"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Siprus"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tsjeggië"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Duitsland"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Atsjenees"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Kiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Devanagari-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djiboeti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denemarke"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Akoli"_s)
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
			$of("Armeense kleinletter-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikaanse Republiek"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("Goties"_s)
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
			$of(u"Algerië"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Halfwydte"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta en Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
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
			$of("Estland"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Wes-Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("Palauaans"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Chuukees"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("Choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Cherokees"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanje"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Ethiopië"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Europese Unie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Gregoriaanse kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eurosone"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyennees"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Goedjarati-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adyghe"_s)
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
			$of("Falklandeilande"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikronesië"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Lokaalvariant"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Faroëreilande"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankryk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Indiese nasionale kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Antieke Grieks"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gaboen"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Verenigde Koninkryk"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Nigeriese Pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Georgië"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Frans-Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
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
			$of("Groenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Gambië"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinee"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekwatoriaal-Guinee"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Griekeland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Suid-Georgië en die Suidelike Sandwicheilande"_s)
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
			$of("Guinee-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("Sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Geen taalinhoud nie"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkong SAS China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heardeiland en McDonaldeilande"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kroasië"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Switserse Duits"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Haïti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hongarye"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanariese Eilande"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("Min Nan-Sjinees"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indonesië"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ierland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Neapolitaans"_s)
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
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Eiland Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Indië"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Brits-Indiese Oseaangebied"_s)
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
			$of("Ysland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Italië"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Wiskundige notasie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Thaise syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Bengaalse syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Islamitiese kalender"_s)
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
			$of("JO"_s),
			$of(u"Jordanië"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Kannada-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("Fonetiese sorteerorde"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Boeddhistiese kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latyns-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistan"_s)
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
			$of("Comore"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sint Kitts en Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Noord-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Suid-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Koeweit"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kaaimanseilande"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Sirillies"_s)
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
			$of("Sint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("Fenisies"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Nederduits"_s)
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
			$of("cop"_s),
			$of("Kopties"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Liberië"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litaue"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letland"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Libië"_s)
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
			$of("lag"_s),
			$of("Langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marokko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldowa"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Sint Martin"_s)
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
			$of("Marshalleilande"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Vai-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Noord-Macedonië"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mianmar (Birma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mongolië"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macau SAS China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Noord-Mariane-eilande"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mauritanië"_s)
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
			$of("UNGEGN-transliterasie"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("Suid-Altai"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maledive"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Japannese kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Maleisië"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambiek"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namibië"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Afrika suid van die Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Hebreeuse kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Woordeboek-sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nieu-Kaledonië"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkeiland"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nigerië"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("Taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Nederland"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Noorweë"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
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
			$of("NZ"_s),
			$of("Nieu-Seeland"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("Seselwa Franskreools"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Islamitiese siviele kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Engels (VK)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Frans-Polinesië"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papoea-Nieu-Guinee"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippyne"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Pole"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sint Pierre en Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairneilande"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestynse Grondgebiede"_s)
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
			$of("Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("Griekse kleinletter-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Toemboeka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niueaans"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Afgeleë Oseanië"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lezghies"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Wêreld"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Noord-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Suid-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Oseanië"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Roemenië"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Serwië"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saoedi-Arabië"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomonseilande"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Wes-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelle"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Soedan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Sentraal-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Swede"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Oos-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Aramees"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Noord-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapoer"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Sint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Streng reëlafbreek-styl"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Midde-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Slowenië"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Suider-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Spitsbergen en Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerikas"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slowakye"_s)
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
			$of(u"Somalië"_s)
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
			$of("type.nu.taml"_s),
			$of("Tradisionele Tamil-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Suid-Soedan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé en Príncipe"_s)
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
			$of(u"Sirië"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
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
			$of("type.ms.ussystem"_s),
			$of("VSA-maatstelsel"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Noordelike Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks- en Caicoseilande"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tsjad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Franse Suidelike Gebiede"_s)
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
			$of("Karibiese streek"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Oos-Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Soek volgens Hangul-beginkonsonant"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunisië"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkye"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad en Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Asturies"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanzanië"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Onbekende skryfstelsel"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Oekraïne"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromanies"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Oos-Asië"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuvinees"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Suid-Asië"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Suidoos-Asië"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("Hakka-Sjinees"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinyin-sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Suid-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Klein afgeleë eilande van die VSA"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Verenigde Nasies"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Verenigde State van Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Vereenvoudigde Chinese sorteervolgorde - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Pruisies"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Oesbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Sentraal-Atlas-Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Slag-sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikaanstad"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Sint Vincent en die Grenadine"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Britse Maagde-eilande"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("VSA se Maagde-eilande"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Viëtnam"_s)
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
			$of("053"_s),
			$of(u"Australasië"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melanesië"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis en Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Tradisionele sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesiese streek"_s)
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
			$of("type.nu.finance"_s),
			$of(u"Finansiële syfers"_s)
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
			$of("Wolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudoaksente"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudotweerigting"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polinesië"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("Gudjarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Ongeskrewe"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("Warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Standaard rangskikvolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Suid-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Losse reëlafbreek-styl"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Georgiese syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Zambië"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Onbekende gebied"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Metrieke stelsel"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Noord-Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Teloegoe-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Vereenvoudigde Sjinese finansiële syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Uitgebreide Arabies-Indiese syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakotaans"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("Vollewydte-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hetities"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Taita"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Noord-Luri"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandawees"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Romeinse syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Sakhaans"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santalies"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Numeries"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Inheemse syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("Ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Vollewydte"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filippyns"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("Balinees"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Skots"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sisiliaans"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abkasies"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharies"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonees"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("Japannese lettergreepskrif"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assamees"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avaries"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("Suid-Koerdies"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Azerbeidjans"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Baskir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Radikale-slag-sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarussies"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgaars"_s)
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
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Bretons"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnies"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Mianmar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("Lao-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Tsjetsjeens"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Tsjeggies"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Kerkslawies"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Wallies"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Etiopiese syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Deens"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Duits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Standaard geldeenheidformaat"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Mongoliese syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi"_s)
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
			$of("Sjinese kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Griekse syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Normale reëlafbreek-styl"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Engels"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Tradisionele Chinese sorteervolgorde - Groot5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spaans"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estnies"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han met Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Baskies"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Oppersorbies"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persies"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Vereenvoudig"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Westerse syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Tradisioneel"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("Xiang-Sjinees"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Fins"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fidjiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Wes-Balochi"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Kantonees"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Faroëes"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("BGN-transliterasie"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Frans"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Fries"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Iers"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Skotse Gallies"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galisies"_s)
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
			$of("Onbekende taal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Etiopiese Amete Alem-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("Goedjarati"_s)
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
			$of(metaValue_he)
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
			$of("bin"_s),
			$of("Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kroaties"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Haïtiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Hongaars"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
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
			$of("Jamo"_s),
			$of("Jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonesies"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Tibettaanse syfers"_s)
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
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("Yslands"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inoektitoet"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Suid-Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Javaans"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Madurees"_s)
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
			$of(metaValue_ka)
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
			$of("wuu"_s),
			$of("Wu-Sjinees"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Skolt Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongolees"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu"_s)
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
			$of("Kazaks"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalaallisut"_s)
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
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kasjmirs"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Koerdies"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Kornies"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirgisies"_s)
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
			$of("Luxemburgs"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Malabaarse syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgs"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingaals"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friuliaans"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Imperiale maatstelsel"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Litaus"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Letties"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malgassies"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marshallees"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Verstek Unicode-rangskikvolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Masedonies"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Maleis"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltees"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Birmaans"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Benedesorbies"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Algemenedoel-soektog"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of("Boeknoors"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Noord-Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepalees"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Nederlands"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Nuwe Noors"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Noors"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("Suid-Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navajo"_s)
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
			$of("Kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Oksitaans"_s)
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
			$of("mer"_s),
			$of("Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("Armeense syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Osseties"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisjen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Sranan Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Pandjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Pools"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Dangi-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pasjto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portugees"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Rangskikvolgorde"_s)
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
			$of("key.cf"_s),
			$of("Geldeenheidformaat"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of("24-uur-stelsel (0-23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of("24-uur-stelsel (1-24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Mianmar-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
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
			$of("Ethi"_s),
			$of("Etiopies"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of("12-uur-stelsel (1-12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of("12-uur-stelsel (0-11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Reto-Romaans"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Geldeenheid"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Roemeens"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Odia-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Sjinese desimale syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russies"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Rwandees"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Kabuverdianu"_s)
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
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardinies"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Noord-Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Minangkabaus"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("Serwo-Kroaties"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slowaaks"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Sloweens"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoaans"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somalies"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("Arabies-Indiese syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albanees"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serwies"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Rekeningkundige geldeenheidformaat"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Suid-Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Sundanees"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Sweeds"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Tradisionele Sjinese finansiële syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("Ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("Ibanees"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Asië"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Sentraal-Asië"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Wes-Asië"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tadjiks"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Buginees"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmeens"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tongaans"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("Japannese syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Turks"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("Comoraans"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tataars"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Tahities"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Oos-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Noord-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Wes-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uighur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Gemeenskaplik"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Oekraïens"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Koptiese kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Oerdoe"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("Kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Oezbeeks"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("Nedersaksies"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Minguo-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Viëtnamees"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Uursiklus (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"K’iche’"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Gaa"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("Gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Siries"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("Gan-Sjinees"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Standaard Marokkaanse Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("Moderne Standaardarabies"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
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
			$of("type.nu.hans"_s),
			$of("Vereenvoudigde Sjinese syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Tradisionele Sjinese syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("Romeinse kleinletter-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
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
			$of("Jiddisj"_s)
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
			$of("type.nu.traditional"_s),
			$of("Tradisionele syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Chinees"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Reëlafbreek-styl"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zoeloe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Foonboek-sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Japannese finansiële syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Gereformeerde sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("Komi-Permyaks"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kpellees"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Khmer-syfers"_s)
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
			$of("type.nu.guru"_s),
			$of("Gurmukhi-syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Verskeie tale"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Maatstelsel"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Kreek"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertees"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Tamil-syfers"_s)
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
			$of("fa_AF"_s),
			$of("Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Karelies"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Syfers"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("Bafia"_s)
		})
	}));
	return data;
}

LocaleNames_af::LocaleNames_af() {
}

$Class* LocaleNames_af::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_af, name, initialize, &_LocaleNames_af_ClassInfo_, allocate$LocaleNames_af);
	return class$;
}

$Class* LocaleNames_af::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun