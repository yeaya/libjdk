#include <sun/util/resources/cldr/ext/LocaleNames_fil.h>

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

$MethodInfo _LocaleNames_fil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_fil, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_fil, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_fil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_fil",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_fil_MethodInfo_
};

$Object* allocate$LocaleNames_fil($Class* clazz) {
	return $of($alloc(LocaleNames_fil));
}

void LocaleNames_fil::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_fil::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, "Nauru"_s);
	$var($String, metaValue_TV, "Tuvalu"_s);
	$var($String, metaValue_ar, "Arabic"_s);
	$var($String, metaValue_bn, "Bangla"_s);
	$var($String, metaValue_bo, "Tibetan"_s);
	$var($String, metaValue_el, "Greek"_s);
	$var($String, metaValue_gu, "Gujarati"_s);
	$var($String, metaValue_he, "Hebrew"_s);
	$var($String, metaValue_hy, "Armenian"_s);
	$var($String, metaValue_ja, "Japanese"_s);
	$var($String, metaValue_ka, "Georgian"_s);
	$var($String, metaValue_km, "Khmer"_s);
	$var($String, metaValue_kn, "Kannada"_s);
	$var($String, metaValue_ko, "Korean"_s);
	$var($String, metaValue_la, "Latin"_s);
	$var($String, metaValue_lo, "Lao"_s);
	$var($String, metaValue_ml, "Malayalam"_s);
	$var($String, metaValue_mn, "Mongolian"_s);
	$var($String, metaValue_or, "Odia"_s);
	$var($String, metaValue_si, "Sinhala"_s);
	$var($String, metaValue_ta, "Tamil"_s);
	$var($String, metaValue_te, "Telugu"_s);
	$var($String, metaValue_th, "Thai"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("Colognian"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandese"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Mga Simbolo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of("Tai Tham Tham na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("Chakma"_s)
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
			$of("Acsencion island"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotongan"_s)
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
			$of("United Arab Emirates"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("Flemish"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua & Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of("Mro na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Kalendaryo ng Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Time Zone"_s)
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
			$of("Antarctica"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("American Samoa"_s)
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
			$of("Ingles na American"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Åland Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia and Herzegovina"_s)
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
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgium"_s)
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
			$of(u"St. Barthélemy"_s)
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
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Caribbean Netherlands"_s)
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
			$of("Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvet Island"_s)
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
			$of("Kalendaryong Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Mga Hebrew Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Cocos (Keeling) Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Central African Republic"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cook Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Cameroon"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton Island"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
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
			$of("Christmas Island"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cyprus"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("Balinese na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Czechia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Germany"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Achinese"_s)
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
			$of("type.nu.deva"_s),
			$of("Mga Devanagari Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acoli"_s)
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
			$of("Armenian Lowercase Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominican Republic"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Gorontalo"_s)
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
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Hanggang sa Halfwidth"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta & Melilla"_s)
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
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Kanlurang Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("Palauan"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Chuukese"_s)
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
			$of("type.nu.mathbold"_s),
			$of("Matematikal na Bold na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spain"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("European Union"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Gregorian na Kalendaryo"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eurozone"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Mga Gujarati Digit"_s)
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
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falkland Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Lokal na Variant"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Faroe Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("France"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Pambansang Kalendaryong Indian"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("United Kingdom"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Nigerian Pidgin"_s)
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
			$of("French Guiana"_s)
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
			$of("Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Equatorial Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Greece"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("South Georgia & South Sandwich Islands"_s)
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
			$of("type.nu.mathmono"_s),
			$of("Matematikal na Mga Digit na May Isang Puwang"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
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
			$of("Central Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Walang nilalaman na ukol sa wika"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("Austrian German"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard & McDonald Islands"_s)
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
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Swiss German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("Kalendaryong Islamiko (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Canary Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("Kayah Li na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Neapolitan"_s)
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
			$of("Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of("Mga Tuntunin ng European na Pagkakasunud-sunod"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("British Indian Ocean Territory"_s)
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
			$of("Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italy"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Mathematical Notation"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Mga Thai na Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Mga Bengali Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of("Cyrillic na Mga Numero"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Kalendaryong Islamic"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
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
			$of("ain"_s),
			$of("Ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Mga Kannada na Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("Swiss High German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("Phonetic na Ayos ng Pag-uuri-uri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Kalendaryo ng Buddhist"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latin America"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kyrgyzstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambodia"_s)
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
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("St. Kitts & Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("French sa Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Hilagang Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Timog Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("Swiss na French"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Cayman Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cyrillic"_s)
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
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Low German"_s)
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
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
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
			$of("Saint Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshall Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Mga Vai na Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("North Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of("Matematikal na Dobleng-Struck na Mga Digit"_s)
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
			$of("Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macau SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Northern Mariana Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
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
			$of("UN GEGN na Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("Southern Altai"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Kalendaryong Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Sub-Saharan Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Hebrew na Kalendaryo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Pagkakasunud-sunod ng Pag-uuri ng Diksyunaryo"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("New Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles Romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk Island"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
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
			$of("Netherlands"_s)
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
			$of("New Zealand"_s)
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
			$of("Seselwa Creole French"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of("Pahawh Hmong na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Kalendaryong Islamic-Civil"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Ingles na British"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("French Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua New Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Pilipinas"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poland"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("St. Pierre & Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinian Territories"_s)
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
			$of("Greek Lowercase na Mga Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka"_s)
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
			$of("Niuean"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Outlying Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lezghian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of("Ahom na mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Mundo"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Hilagang Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Timog Amerika"_s)
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
			$of("Russia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Solomon Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Kanlurang Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Gitnang Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Sweden"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Silangang Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Hilagang Africa"_s)
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
			$of("Mahigpit na Istilo ng Line Break"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Gitnang Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of("Myanmar Tai Laing na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Katimugang Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard & Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Americas"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
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
			$of("Mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("Tamil na Mga Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Timog Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé & Príncipe"_s)
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
			$of("SZ"_s),
			$of("Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan de Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("Sistema ng Pagsukat sa US"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Northern America"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks & Caicos Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("French Southern Territories"_s)
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
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Carribbean"_s)
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
			$of("Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Maghanap Ayon sa Unang Katinig ng Hangul"_s)
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
			$of("Turkey"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad & Tobago"_s)
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
			$of("Asturian"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Hindi Kilalang Script"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromanian"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Silangang Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuvinian"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("Congo Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Katimugang Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Timog-Silangang Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pagkakasunud-sunod ng Pag-uuri ng Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Katimugang Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("U.S. Outlying Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("United Nations"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Pagkakasunud-sunod ng Pag-uuri ng Pinasimpleng Chinese - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Prussian"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Central Atlas Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Pagkakasunud-sunod ng Pag-uuri ng Stroke"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatican City"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St. Vincent & Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("British Virgin Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("U.S. Virgin Islands"_s)
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
			$of("Nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa"_s)
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
			$of("Wallis & Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Tradisyunal na Pagkakasunud-sunod ng Pag-uuri"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Rehiyon ng Micronesia"_s)
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
			$of("Mga Pampinansyang Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of("Nakaraang Pagkakasunud-sunod ng Pag-uuri, para sa compatibility"_s)
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
			$of("type.nu.mtei"_s),
			$of("Meetei Mayek na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Wolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Mga Pseudo-Accent"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
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
			$of("type.nu.brah"_s),
			$of("Brahmi na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Hindi Nakasulat"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("Warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Karaniwang Pagkakasunud-sunod ng Ayos"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of("Cham na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("South Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Loose na Istilo ng Line Break"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Georgian na Mga Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("Zhuyin na Pagkakasunud-sunod ng Pag-uuri"_s)
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
			$of("%%PINYIN"_s),
			$of("Pinyin Romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Hindi Kilalang Rehiyon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Metrikong Sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601 na Kalendaryo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Hilagang Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Mga Telugu na Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("Louisiana Creole"_s)
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
			$of("Simplified Chinese na Mga Numeral para sa Pananalapi"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Extendend Arabic-Indic na Mga Digit"_s)
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
			$of("type.nu.fullwide"_s),
			$of("Mga Full-Width Digit"_s)
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
			$of("Hilagang Luri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of("Pagkakasunud-sunod ng Pag-uuri ng Emoji"_s)
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
			$of("type.ca.islamic-rgsa"_s),
			$of("Kalendaryong Islamiko (Saudi Arabia, sighting)"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Mga Roman Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Numeric"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Mga Native na Digit"_s)
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
			$of("Hanggang sa Fullwidth"_s)
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
			$of("Filipino"_s)
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
			$of("Balinese"_s)
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
			$of("es_ES"_s),
			$of("European Spanish"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Scots"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sicilian"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abkhazian"_s)
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
			$of("type.nu.cakm"_s),
			$of("Chakma na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharic"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonese"_s)
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
			$of("Japanese syllabaries"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assamese"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avaric"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("Katimugang Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Pagkakasunud-sunod ng Pag-uuri ng Radical-Stroke"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarusian"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgarian"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of("Javanese na Mga Digit"_s)
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
			$of("Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnian"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("Mga Lao na Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Catalan"_s)
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
			$of("co"_s),
			$of("Corsican"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Czech"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Church Slavic"_s)
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
			$of("type.nu.ethi"_s),
			$of("Mga Ethiopic Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Danish"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("European Portuguese"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Karaniwang Format ng Pera"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Mongolian Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Latin American na Espanyol"_s)
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
			$of("Kalendaryong Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Greek na Mga Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("Normal na Istilo ng Line Break"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldavian"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Ingles"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Pagkakasunod-sunod ng Pag-uuri ng Tradisyunal na Chinese - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanish"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estonian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han na may Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Basque"_s)
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
			$of("Upper Sorbian"_s)
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
			$of("Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Pinasimple"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Mga Kanluraning Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Tradisyonal"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Finnish"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fijian"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Kanlurang Balochi"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Cantonese"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Faroese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("US BGN na Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("French"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Kanlurang Frisian"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Irish"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Scottish Gaelic"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galician"_s)
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
			$of("Hindi Kilalang Wika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Kalendaryong Ethiopic Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("Kalendaryong Islamiko (tabular, astronomikal na epoch)"_s)
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
			$of("Croatian"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haitian"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Hungarian"_s)
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
			$of("frc"_s),
			$of("Cajun French"_s)
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
			$of("Indonesian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Mga Tibetan na Digit"_s)
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
			$of("Icelandic"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italian"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut"_s)
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
			$of("type.nu.lepc"_s),
			$of("Lepcha Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Katimugang Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Javanese"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Madurese"_s)
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
			$of("sms"_s),
			$of("Skolt Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongo"_s)
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
			$of("Kazakh"_s)
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
			$of("Kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Cornish"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirghiz"_s)
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
			$of("Luxembourgish"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Mga Malayalam na Digit"_s)
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
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friulian"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Sistemang Imperial na Pagsukat"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("Tai Tham Hora na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lithuanian"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Latvian"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marshallese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Default na Pagkakasunud-sunod ng Ayos ng Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Macedonian"_s)
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
			$of("Malay"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltese"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Burmese"_s)
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
			$of("Lower Sorbian"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Pangkalahatang Paghahanap"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norwegian Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Hilagang Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Dutch"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Norwegian Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Norwegian"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("South Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of("Modi na Mga Digit"_s)
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
			$of("Occitan"_s)
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
			$of("Mga Armenian Numeral"_s)
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
			$of("Ossetic"_s)
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
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polish"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Dangi na Kalendaryo"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portuguese"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Pagkakasunud-sunod ng Ayos"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Portuges ng Brasil"_s)
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
			$of("Format ng Pera"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"N’Ko na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Kalendaryo"_s)
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
			$of(u"24 na Oras na Sistema (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 na Oras na Sistema (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Mga Myanmar na Digit"_s)
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
			$of("Ethiopic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 Oras na Sistema (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 Oras na Sistema (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Romansh"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Pera"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Romanian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Mga Oriya na Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Mga Chinese Decimal na Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russian"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
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
			$of("en_AU"_s),
			$of("Ingles ng Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardinian"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Hilagang Sami"_s)
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
			$of("Serbo-Croatian"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slovak"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Slovenian"_s)
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
			$of("type.nu.arab"_s),
			$of("Arabic-Indic na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albanian"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serbian"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Format ng Pera sa Accounting"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Katimugang Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Sundanese"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Swedish"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("Traditional Chinese na Mga Numeral para sa Pananalapi"_s)
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
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Gitnang Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Kanlurang Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tajik"_s)
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
			$of("Buginese"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("Ingles sa Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmen"_s)
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
			$of("type.nu.jpan"_s),
			$of("Mga Japanese Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Turkish"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("Comorian"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Tahitian"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Silangang Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of("Matematikal na Sans-Serif Bold na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Hilagang Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Kanlurang Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uyghur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Karaniwan"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukranian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Coptic Calendar"_s)
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
			$of("uz"_s),
			$of("Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("Low Saxon"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Kalendaryong Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamese"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Siklo ng Oras (12 laban sa 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of("Matematikal na Sans-Serif na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"Kʼicheʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of("Masaram Gondi na mga digit"_s)
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
			$of("gag"_s),
			$of("Gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Syriac"_s)
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
			$of("Standard Moroccan Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("Modernong Karaniwang Arabic"_s)
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
			$of("Simplified Chinese na Mga Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Traditional Chinese na Mga Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("Roman Lowercase na Mga Numeral"_s)
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
			$of("type.nu.traditional"_s),
			$of("Mga Tradisyunal na Numeral"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("Mexican na Espanyol"_s)
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
			$of("Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Istilo ng Putol ng Linya"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Pagkakasunud-sunod ng Pag-uuri ng Phonebook"_s)
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
			$of("Mga Japanese Numeral sa Pananalapi"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("Maynmar Shan na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Pagkakasunud-sunod ng Pag-uuri ng Na-reform"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("Pinasimpleng Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("Komi-Permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("Limbu na Mga Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Tradisyonal na Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Mga Khmer na Digit"_s)
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
			$of("Mga Gurmukhi Digit"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Maramihang Wika"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Sistema ng Pagsukat"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Creek"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Mga Tamil na Digit"_s)
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
			$of("Karelian"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Mga Numero"_s)
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

LocaleNames_fil::LocaleNames_fil() {
}

$Class* LocaleNames_fil::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_fil, name, initialize, &_LocaleNames_fil_ClassInfo_, allocate$LocaleNames_fil);
	return class$;
}

$Class* LocaleNames_fil::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun