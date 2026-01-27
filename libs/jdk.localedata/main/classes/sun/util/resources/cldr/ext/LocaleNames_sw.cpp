#include <sun/util/resources/cldr/ext/LocaleNames_sw.h>

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

$MethodInfo _LocaleNames_sw_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sw, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sw, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sw_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sw",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sw_MethodInfo_
};

$Object* allocate$LocaleNames_sw($Class* clazz) {
	return $of($alloc(LocaleNames_sw));
}

void LocaleNames_sw::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sw::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, "Kiarabu"_s);
	$var($String, metaValue_bn, "Kibengali"_s);
	$var($String, metaValue_bo, "Kitibeti"_s);
	$var($String, metaValue_el, "Kigiriki"_s);
	$var($String, metaValue_gu, "Kigujarati"_s);
	$var($String, metaValue_he, "Kiebrania"_s);
	$var($String, metaValue_hy, "Kiarmenia"_s);
	$var($String, metaValue_ja, "Kijapani"_s);
	$var($String, metaValue_ka, "Kijojia"_s);
	$var($String, metaValue_km, "Kikambodia"_s);
	$var($String, metaValue_kn, "Kikannada"_s);
	$var($String, metaValue_ko, "Kikorea"_s);
	$var($String, metaValue_la, "Kilatini"_s);
	$var($String, metaValue_lo, "Kilaosi"_s);
	$var($String, metaValue_mn, "Kimongolia"_s);
	$var($String, metaValue_or, "Kioriya"_s);
	$var($String, metaValue_si, "Kisinhala"_s);
	$var($String, metaValue_te, "Kitelugu"_s);
	$var($String, metaValue_th, "Kithai"_s);
	$var($String, metaValue_type_co_standard, "Mpangilio wa Kawaida"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("Kicologne"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Kimirandi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Alama"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("Kichakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("Kimisri"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("Kitemne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("Kiteso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("Kirapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Kisiwa cha Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Kirarotonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Kitetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Falme za Kiarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("Kiflemi"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua na Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Kalenda ya Kiethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Saa za Eneo"_s)
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
			$of("Antaktiki"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Ajentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa ya Marekani"_s)
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
			$of("AX"_s),
			$of("Visiwa vya Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia na Hezegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Babadosi"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Kichebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Ubelgiji"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Bukinafaso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahareni"_s)
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
			$of("St. Barthelemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Kierzya"_s)
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
			$of("Uholanzi ya Karibiani"_s)
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
			$of("Kisoga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Kisiwa cha Bouvet"_s)
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
			$of("Kalenda ya Kiajemi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Nambari za Kiebrania"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Visiwa vya Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Kimazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Jamhuri ya Kidemokrasia ya Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Jamhuri ya Afrika ya Kati"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Uswisi"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Cote d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Visiwa vya Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kameruni"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Uchina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Kisiwa cha Clipperton"_s)
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
			$of("Cape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Curacao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Kisiwa cha Krismasi"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Saiprasi"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Chechia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Kiekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Ujerumani"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Kiacheni"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Kichiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Nambari za Kidevanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denmaki"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Kiakoli"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Nukta nundu"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("Nambari Ndogo za Kiarmenia"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Jamhuri ya Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Kigorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Kizuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Kitigre"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Kipangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Nusu upana"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta na Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Kipampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("Kipapiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Kiadangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Misri"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Magharibi"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("Kipalau"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Kichukisi"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Kimari"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("Kichoktao"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Kicherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Uhispania"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Umoja wa Ulaya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Kalenda ya Kigregori"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Jumuiya ya Ulaya"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Kicheyeni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Nambari za Kigujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Kiadyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Ufini"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Visiwa vya Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Lahaja za Lugha"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Visiwa vya Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Kitamil"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Ufaransa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Kalenda ya Taifa ya India"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Kiyunani"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Ufalme wa Muungano"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Pijini ya Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Jojia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guiana ya Ufaransa"_s)
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
			$of("Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Guinea ya Ikweta"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Ugiriki"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Visiwa vya Georgia Kusini na Sandwich Kusini"_s)
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
			$of("Ginebisau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Kiklingoni"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("Kikurdi cha Sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Hakuna maudhui ya lugha"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Kisiwa cha Heard na Visiwa vya McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Kiaghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Kijerumani cha Uswisi"_s)
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
			$of("Visiwa vya Kanari"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("Kiajemi cha Kale"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ayalandi"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Kinapoli"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Kinama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Kizaza"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israeli"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Kisiwa cha Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Eneo la Uingereza katika Bahari Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Aisilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Hati za kihisabati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Nambari za Kithai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Nambari za Kibengali"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Kalenda ya Kiislamu"_s)
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
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Kiainu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Kikisii"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Nambari za Kikannada"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("Utaratibu wa Kupanga Fonetiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Kalenda ya Kibuddha"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Amerika ya Kilatini"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirigizistani"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("St. Kitts na Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("Kifaransa (Canada)"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Korea Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Korea Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Kitokpisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Visiwa vya Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakistani"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Kisiriliki"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lebanon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("St. Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Kisaksoni"_s)
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
			$of("Kikhufti"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lithuania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Kikatakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("Kiladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Kivunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("Kirangi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Kithaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Morocco"_s)
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
			$of("St. Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("Lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaska"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Visiwa vya Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Kialeut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Dijiti za Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Masedonia ya Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Burma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Kinewari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Makau SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Visiwa vya Mariana vya Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Moritania"_s)
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
			$of("Mtindo wa kunukuu wa UN GEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("Kialtai"_s)
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
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Kalenda ya Kijapani"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malesia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Msumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Afrika ya Kusini mwa Jangwa la Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Kalenda ya Kiebrania"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Mpangilio wa Kamusi"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("New Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Kisiwa cha Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("Kitaroko"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Uholanzi"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norway"_s)
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
			$of("Kirombo"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nyuzilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Kiingereza cha Kale"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Kiangika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("Krioli ya Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Kalenda ya Kiislamu/Rasmi"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Kiingereza (Uingereza)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polynesia ya Ufaransa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua New Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Ufilipino"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistani"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poland"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Kiewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Santapierre na Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Visiwa vya Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Maeneo ya Palestina"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Ureno"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Kiniasi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("Nambari Ndogo za Kigiriki"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Kitumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Kiniuea"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Oceania ya Nje"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Kilezighian"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("Kituvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Dunia"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Amerika Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Amerika Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Urusi"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudia"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Visiwa vya Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Kitasawak"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Afrika ya Magharibi"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Ushelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Amerika ya Kati"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Uswidi"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Afrika ya Mashariki"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Kiaramu"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Afrika ya Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Mtindo Finyu wa Kukata Mstari"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Afrika ya Kati"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Afrika ya Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard na Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siera Leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegali"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("Kimapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Kiarapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("Nambari za Kitamil cha Jadi"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Sudan Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome na Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("Kiarabu cha Algeria"_s)
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
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("Kiyao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of("Kiarabu cha Misri"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Kiasu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("Mfumo wa Vipimo wa Marekani"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Amerika ya Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Visiwa vya Turks na Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Kiyangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Himaya za Kusini za Kifaranza"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailandi"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistani"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibiani"_s)
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
			$of("Kiyemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Tafuta kwa Konsonanti Halisi ya Hangul"_s)
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
			$of("Uturuki"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad na Tobago"_s)
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
			$of("Kiasturia"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kikwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Hati isiyojulikana"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Kiaromania"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asia ya Mashariki"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Kituva"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia ya Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Asia ya Kusini Mashariki"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Mpangilio wa Kipinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Ulaya ya Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Visiwa Vidogo vya Nje vya Marekani"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Umoja wa Mataifa"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Marekani"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Kihawai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Mpangilio wa Kichina Rahisi - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Kiprussia"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzibekistani"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Kitamazighati cha Atlasi ya Kati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Mpangilio wa Mikwaju"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Lugha ya Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Mji wa Vatican"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St. Vincent na Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Visiwa vya Virgin, Uingereza"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Visiwa vya Virgin, Marekani"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnamu"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("Kinogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Lugha ya Rwa"_s)
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
			$of("Wallis na Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(metaValue_type_co_standard)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Eneo la Mikronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("Kingomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("Kilakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("Tarakimu za Kifedha"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Kiwalser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Kiwolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Lafudhi Bandia"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Kiwaray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Lafudhi Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Kiawadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Haijaandikwa"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("Kiwarlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemeni"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(metaValue_type_co_standard)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afrika Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Mtindo Pana wa Kukata Mstari"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Kidevanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Nambari za Kigeorgia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
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
			$of("Eneo lisilojulikana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Mfumo wa Metriki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("Kalenda ya ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Kimongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Kisotho cha Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Nambari za Kitelugu"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Kilozi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Kimachame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("Nambari za Kifedha za Kichina Rahisi"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Kihiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Nambari za Kiarabu/Kihindi Zilizopanuliwa"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Kinuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Kidakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("Nambari za Upana Kamili"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Kihiti"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Kidaragwa"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Kitaita"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Kiluri cha Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Kinewari cha kale"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Kiudmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Kisandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Nambari za Kirumi"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Kisakha"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Kiaramu cha Wasamaria"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Kisamburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Kisantali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Ya Nambari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Digiti Asili"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("Kingambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Kigurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Kiluba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Upana kamili"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Kisangu"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Kinyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("Kinyamwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Kilunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("Kinyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Kijaluo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Kifilipino"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Kihmong"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Kimizo"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("Kibali"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Kiluhya"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Kibasaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("Kibamun"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Kihispania (Ulaya)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Kinzema"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Kiskoti"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Kisicilia"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Kiafar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Kiabkhazi"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Kiafrikana"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Kiakani"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("Kighomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Kiamhari"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Kiaragoni"_s)
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
			$of("Hati za Kijapani"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Kiassam"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Kiavari"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("Kikurdi cha Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Kiaymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Kiazerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Kibashkiri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Mpangilio wa Mikwaju ya Shina"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Kibelarusi"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Kibulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Kibislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Kibambara"_s)
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
			$of("Kidogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Kibretoni"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Kibosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Myama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("Nambari za Kilao"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Kisena"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Kikatalani"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Kikoyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Kichechenia"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Kichamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Kikosikani"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Kicheki"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Kislovakia cha Kanisa"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Kichuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Kiwelisi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Nambari za Kiethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Kidenmaki"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("Kireno (Ulaya)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Kijerumani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Mpangilio wa Kawaida wa Sarafu"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Kibeja"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Kibemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Nambari za Kimongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Kidivehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Kihispania (Amerika ya Latini)"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Kizongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("Kibena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("Kalenda ya Kichina"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Kizarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Nambari za Kigiriki"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Kiewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("Kibafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("Mtindo wa Kawaida wa Kukata Mstari"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Kimoldova cha Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Kiingereza"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Kiesperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Mpangilio wa Kichina cha Jadi - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Kihispania"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Kiestonia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Kihan chenye Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Kibaski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Kihangul"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Kitachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Kisobia cha Ukanda wa Juu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Kihan"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Kishan"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Kiajemi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Rahisi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Nambari za Nchi za Magharibi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Cha jadi"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Kifulani"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of("Kiarabu cha Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Kifini"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Kifiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Kifon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Kibalochi cha Magharibi"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Kikantoni"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Kifaroe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("Mtindo wa kunukuu wa US BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Kifaransa"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Kifrisia cha Magharibi"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Kiayalandi"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Kigaeli cha Uskoti"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Kigalisi"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Kiguarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Kibhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Lugha isiyojulikana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Kalenda ya Kiethiopia ya Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Kimanx"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Kihausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Kihindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Kibini"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kikorasia"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Kihaiti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Kihungaria"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Kiherero"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Kiintalingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("Jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Kiindonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Nambari za Kitibeti"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("lugha ya kisayansi"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Kiigbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Kiyi cha Sichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("Kifaransa cha Kale"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Kiido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Kifrisia cha Mashariki"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Kifrisia cha Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("Kiisilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Kiitaliano"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Kiinuktituti"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Kimalayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("Kikom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Kisami cha Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Kijava"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Kimadura"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Kisami cha Lule"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Kimagahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Kimafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Kimaithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Kisami cha Inari"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Kisiksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Kimakasar"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Kisami cha Skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kikongo"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Kimaasai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kikwanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kikazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kikalaallisut"_s)
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
			$of("Kikanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kikashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kikurdi"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Kikomi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Kikorni"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kikyrgyz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Kisoninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Kilasembagi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Nambari za Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Kiganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgish"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Kilingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Kifriulian"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Mfumo wa Vipimo wa Uingereza"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Kilithuania"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Kiluba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Kilatvia"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Kimalagasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Kimashale"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Mpangilio Chaguo-Msingi wa Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Kimaori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Kimacedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Kimalayalamu"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Kimarathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Kimalei"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Kimalta"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Kiburma"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Lugha ya Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("Kimaba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Kisobia cha Chini"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Kinauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Utafutaji wa Kijumla"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of("Kinorwe cha Bokmal"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Kindebele cha Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Kinepali"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Kindonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Kiholanzi"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Kinorwe cha Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Kinorwe"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("Kindebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Kinavajo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Kinyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("Kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kikabylia"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Kiokitani"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("Kijju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kikamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("Kimende"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Kimeru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("Nambari za Kiarmenia"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Kioromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Kiosetia"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kikabardian"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Kimoriseni"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Lugha ya Sranan Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Kipunjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Kiduala"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("Kikanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Kipolandi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Kalenda ya Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Kipashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Kireno"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Mpangilio"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Kireno (Brazili)"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("Kityap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Kimakhuwa-Meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Mpangilio wa Sarafu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Kalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("Kimeta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"Kipindi cha saa 24 (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"Kipindi cha saa 24 (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("Kisaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Nambari za Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Kikechua"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("Kibodo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("Kimakonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("Kiethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"Kipindi cha saa 12 (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"Kipindi cha saa 12 (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Kiromanshi"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Sarafu"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Kiromania"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Nambari za Kioriya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Nambari za Desimali za Kichina"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Kirusi"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Kikabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"Mi’kmaq"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Kisukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Kisanskriti"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Kisardinia"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Kisusu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Kisindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Kisami cha Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Kiminangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Kisango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("Kiserbia-kroeshia"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Kislovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Kislovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Kisamoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Kishona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Kisomali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("Nambari za Kiarabu/Kihindi"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Kialbania"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Kiserbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Kiswati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Mpangilio wa Kihasibu wa Sarafu"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Kisotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Kisunda"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Kiswidi"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Kiswahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("Nambari za Kifedha za Kichina cha Jadi"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("Kiibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("Kiiban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Kitamili"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Asia ya Kati"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia ya Magharibi"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Kitajiki"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Kitigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Kibugini"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("Kikoro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("Kiingereza (Canada)"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Kiturukimeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Kitswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Kitonga"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("Kibulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Kijola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("Nambari za Kijapani"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Kituruki"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Kitsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("Shikomor"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Kitatari"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Kijula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Kitahiti"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Ulaya"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Ulaya ya Mashariki"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Ulaya ya Kaskazini"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Kidazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Ulaya ya Magharibi"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Kiuyghur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Kawaida"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Kiukraini"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Kalenda ya Koptiki"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Kiurdu"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("Kikalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Kiuzbeki"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Kikhasi"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Kivenda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Kalenda ya Jamhuri ya Uchina"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Kivietinamu"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Kikoyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Kipindi cha saa (12 au 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("Kivolapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"Kʼicheʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Kiwaloon"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("Kigagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Lugha ya Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Kiwolofu"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Kiberber Sanifu cha Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("Kiarabu sanifu"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Kigbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Kimanipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("Nambari za Kichina Rahisi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Nambari za Kichina cha Jadi"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Kixhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("Nambari Ndogo za Kirumi"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Kiblin"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("Kimedumba"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Lugha ya Mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("Lugha ya Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Kiyiddi"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Kimoore"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Kiyoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Tarakimu za Jadi"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Kivai"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kikalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Kichina"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Kibopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Mtindo wa Kukata Mstari"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Kizulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Mpangilio wa Orodha za Nambari za Simu"_s)
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
			$of("Nambari za Kifedha za Kijapani"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"Kige’ez"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Mpangilio Uliorekebishwa"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Kiembu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("Kichina (Kilichorahisishwa)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("Kikomi-Permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Kikonkani"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Kichina cha Jadi"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kikpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Nambari za Kikambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Kiilocano"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Kimundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Nambari za Kigurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Lugha nyingi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Mfumo wa Vipimo"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Kikriki"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Kikiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Nambari za Kitamil"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Kikarachay-Balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Kiingush"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("Kiajemi (Afganistani)"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Karjala"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Kiefik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Nambari"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Kisambaa"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("Kibafia"_s)
		})
	}));
	return data;
}

LocaleNames_sw::LocaleNames_sw() {
}

$Class* LocaleNames_sw::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sw, name, initialize, &_LocaleNames_sw_ClassInfo_, allocate$LocaleNames_sw);
	return class$;
}

$Class* LocaleNames_sw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun