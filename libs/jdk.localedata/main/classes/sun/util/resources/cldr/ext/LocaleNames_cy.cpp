#include <sun/util/resources/cldr/ext/LocaleNames_cy.h>

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

$MethodInfo _LocaleNames_cy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_cy, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_cy, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_cy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_cy",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_cy_MethodInfo_
};

$Object* allocate$LocaleNames_cy($Class* clazz) {
	return $of($alloc(LocaleNames_cy));
}

void LocaleNames_cy::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_cy::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_la, "Lladin"_s);
	$var($String, metaValue_te, "Telugu"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("Cwleneg"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Symbolau"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("Atsameg"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("tafodiaith Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("Tsiacma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("Hen Eiffteg"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("Rajasthaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("Timneg"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("Teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"Rapanŵi"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("Terena"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ynys Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Raratongeg"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetumeg"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Emiradau Arabaidd Unedig"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("Fflemeg"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua a Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Calendr Ethiopia"_s)
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
			$of("Antarctica"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Yr Ariannin"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa America"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Awstria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Awstralia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("Saesneg America"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Ynysoedd Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Aserbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("Armeneg Dwyreiniol"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia a Herzegovina"_s)
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
			$of("Cwmiceg"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Gwlad Belg"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("Almaeneg Uchel Canol"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bwlgaria"_s)
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
			$of("Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolifia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Antilles yr Iseldiroedd"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Y Bahamas"_s)
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
			$of("Ynys Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarws"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("Calendr Persia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Rhifolion Hebreig"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Ynysoedd Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Masanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Y Congo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Gweriniaeth Canolbarth Affrica"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Y Congo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Y Swistir"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Ynysoedd Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Camerŵn"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Tsieina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Ynys Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Ciwba"_s)
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
			$of("Ynys y Nadolig"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cyprus"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Tsiecia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of("Fflemeg Gorllewinol"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Yr Almaen"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("Hen Almaeneg Uchel"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Acehneg"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Tsiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Digidau Devanagarig"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denmarc"_s)
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
			$of("Rhifolion Armenaidd mewn Llythrennau Bychain"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Gweriniaeth Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("Gotheg"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Swni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigreg"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasineg"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Pahlafi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta a Melilla"_s)
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
			$of("Adangmeg"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tifeg"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Yr Aifft"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Gorllewin Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("Palawan"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Chuukaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Marieg"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("Siocto"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"Tsierocî"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Sbaen"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Yr Undeb Ewropeaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elameg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Calendr Gregori"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Ardal yr Ewro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Digidau Gwjarataidd"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Circaseg Gorllewinol"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("Arabeg Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Y Ffindir"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Ynysoedd y Falkland/Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Ynysoedd Ffaro"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Tamilaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Ffrainc"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("Picardeg"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("Tocelaweg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of("gwyddor Dajnko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Calendr Cenedlaethol India"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Hen Roeg"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("Tsakhureg"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Foteg"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Y Deyrnas Unedig"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Pidgin Nigeria"_s)
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
			$of("Guyane Ffrengig"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Ynys y Garn"_s)
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
			$of("afh"_s),
			$of("Affrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Yr Ynys Las"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Saesneg Canol"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Gini Gyhydeddol"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Gwlad Groeg"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("De Georgia ac Ynysoedd Sandwich y De"_s)
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
			$of("Almaeneg Pensylfania"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Guiné-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("Llingit"_s)
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
			$of("Cwrdeg Sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Dim cynnwys ieithyddol"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("Talysheg"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("Almaeneg Awstria"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong SAR Tsieina"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Ynys Heard ac Ynysoedd McDonald"_s)
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
			$of("Aghemeg"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Almaeneg y Swistir"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hwngari"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("Tamasheceg"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Yr Ynysoedd Dedwydd"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("Hen Bersieg"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Iwerddon"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Naplieg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("tafodiaith Ndyuka"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"Sasäeg"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Ynys Manaw"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of("Rheolau trefnu Ewropeaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Tiriogaeth Brydeinig Cefnfor India"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irac"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Gwlad yr Iâ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Yr Eidal"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Nodiant Mathemategol"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Digidau Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Cyfrifiadur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Digidau Bengalaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("Almaeneg Palatin"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Calendr Islam"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("Bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Gwlad Iorddonen"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("Ffrangeg Canol Diweddar hyd at 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"Ainŵeg"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Digidau Kannaraidd"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("Almaeneg Safonol y Swistir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Calendr Bwdaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("America Ladin"_s)
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
			$of("KN"_s),
			$of("Saint Kitts a Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Canaraidd"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("Ffrangeg Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Gogledd Corea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("De Corea"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("Ffrangeg y Swistir"_s)
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
			$of("Ynysoedd Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cyrilig"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanus"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("Phoeniceg"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Almaeneg Isel"_s)
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
			$of("Acadeg"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Copteg"_s)
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
			$of("Lithwania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lwcsembwrg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latfia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Catacana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("Iddew-Sbaeneg"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Funjo"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"Alabamäeg"_s)
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
			$of("Thaa"_s),
			$of("Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Moroco"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldofa"_s)
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
			$of("Lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Ynysoedd Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Alewteg"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Tai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Gogledd Macedonia"_s)
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
			$of("Newaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macau SAR Tsieina"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of("Ghegeg Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Ynysoedd Gogledd Mariana"_s)
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
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"Altäeg Deheuol"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Y Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mecsico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Calendr Japan"_s)
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
			$of("Affrica Is-Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Calendr Hebreaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Trefn Geiriadur"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Caledonia Newydd"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Ynys Norfolk"_s)
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
			$of("Yr Iseldiroedd"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwy"_s)
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
			$of("tsd"_s),
			$of("Tsaconeg"_s)
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
			$of("Seland Newydd"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romani"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Tyrceg y Crimea"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Hen Saesneg"_s)
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
			$of("Ffrangeg Seselwa Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Saesneg Prydain"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Periw"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polynesia Ffrengig"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Guinea Newydd"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Y Philipinau"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Gwlad Pwyl"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre-et-Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Ynysoedd Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Tiriogaethau Palesteinaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portiwgal"_s)
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
			$of("Rhifolion Groegaidd mewn Llythrennau Bychain"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Twmbwca"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("Hebreig"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("Saesneg Safonol yr Alban"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("Piedmonteg"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niuean"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Oceania Bellennig"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("Extremadureg"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lezgheg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("Seineg UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("Digidau Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("Twfalweg"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Y Byd"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Affrica"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("Ao Naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Gogledd America"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("De America"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("Ponteg"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rwmania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rwsia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("gwyddor Metelko"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Pohnpeianeg"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Ynysoedd Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Gorllewin Affrica"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Swdan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Canolbarth America"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Sweden"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Dwyrain Affrica"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Aramaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Gogledd Affrica"_s)
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
			$of("type.lb.strict"_s),
			$of("Arddull Torriad Llinell Caeth"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Canol Affrica"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slofenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Deheudir Affrica"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard a Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Yr Amerig"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slofacia"_s)
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
			$of("Arawcaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("Rhifolion Tamilaidd Traddodiadol"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of("Araonaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("De Swdan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé a Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("Arabeg Algeria"_s)
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
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawaceg"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of("Arabeg yr Aifft"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("Arabeg Moroco"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("Rotumaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Asw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("System Fesur UDA"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"America i’r Gogledd o Fecsico"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Ynysoedd Turks a Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Iangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tsiad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Tiroedd Deheuol ac Antarctig Ffrainc"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of("Iaith Arwyddion America"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Gwlad Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajicistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Y Caribî"_s)
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
			$of("Iembaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Tyrcmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tiwnisia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Twrci"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad a Tobago"_s)
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
			$of("Astwrianeg"_s)
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
			$of("Sgript anhysbys"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Wcráin"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Dwyrain Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Twfwnieg"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"Swahili’r Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("De Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("De-Ddwyrain Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Trefn Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("De Ewrop"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("Sinhanaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Ynysoedd Pellennig UDA"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("y Cenhedloedd Unedig"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Yr Unol Daleithiau"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Hawäieg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Academig"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Trefn Symledig Tsieina - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Prwseg"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Tamazight Canol yr Atlas"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Y Fatican"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("Hen Brofensaleg"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Saint Vincent a’r Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Ynysoedd Gwyryf Prydain"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Ynysoedd Gwyryf yr Unol Daleithiau"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Fietnam"_s)
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
			$of("Hen Norseg"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Awstralasia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("Armeneg Gorllewinol"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis a Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Trefn Traddodiadol"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Rhanbarth Micronesia"_s)
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
			$of("Walsereg"_s)
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
			$of("XA"_s),
			$of("Acenion Ffug"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Winarayeg"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Bidi Ffug"_s)
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
			$of("%%KSCOR"_s),
			$of("yr Orgraff Safonol"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("Gwjarataidd"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Anysgrifenedig"_s)
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
			$of("Trefn Safonol"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("Lombardeg"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Ffanti"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("De Affrica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Arddull Toriad Llinell Rhydd"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Rhifolion Georgaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("Trefn Zhuyin"_s)
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
			$of("Rhanbarth Anhysbys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("System Fetrig"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("Calendr ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Sotho Gogleddol"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Digidau Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Matsiame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("Rhifolion Ariannol Tsieineaidd Symledig"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Digidau Arabig-Indig Estynedig"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"Nŵereg"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dacotaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("Digidau Lled Llawn"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hetheg"_s)
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
			$of("Luri Gogleddol"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Hen Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Fotiaceg"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Chmeraidd"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"Sandäweg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Rhifolion Rhufeinig"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("Latgaleg"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Aramaeg Samaria"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"Sambŵrw"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("Sasaceg"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("Iddew-Bersieg"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("Ngambeieg"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gwrmwci"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("tafodiaith Aluku"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangw"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Niancole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("Niamwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lwnda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("Nioro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"Lŵo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Ffilipineg"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmongeg"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Lwshaieg"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Balwtsi"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Balïeg"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("Wgariteg"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of("Ffinneg Tornedal"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Lwyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"Basâeg"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("Bamwmeg"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("Iddew-Arabeg"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Sbaeneg Ewrop"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzimeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Sgoteg"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sisileg"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Affareg"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abchaseg"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("Afestaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"Affricâneg"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Acaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amhareg"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arabaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("Japaneaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Arabeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("Syllwyddor Japaneaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Asameg"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("Sasareseg Sardinia"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Afareg"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("Cwrdeg Deheuol"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymareg"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Aserbaijaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("tafodiaith Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Bashcorteg"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarwseg"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bwlgareg"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambareg"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengaleg"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibeteg"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Llydaweg"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnieg"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("Seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Myanmaraidd"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("Seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("Digidau Laoaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selcypeg"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Catalaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Tsietsieneg"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Tsiamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Corseg"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"Orïaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Cri"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Tsieceg"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Hen Slafoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Tshwfasheg"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Cymraeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Rhifolion Ethiopig"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Daneg"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("Portiwgaleg Ewrop"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Almaeneg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Fformat Arian Safonol"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"Bejäeg"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Dinca"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bembeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Hen Wyddeleg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Digidau Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Difehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Sbaeneg America Ladin"_s)
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
			$of("Calendr Tseina"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Sarmaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of("Samogiteg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Rhifolion Groegaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("Baffwteg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("Arddull Toriad Llinell Arferol"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldofeg"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Groeg"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Saesneg"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of("Badaga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Trefn Traddodiadol Tsieina - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Sbaeneg"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han gyda Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Basgeg"_s)
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
			$of("Sorbeg Uchaf"_s)
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
			$of("Perseg"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Symledig"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Digidau Gorllewinol"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Traddodiadol"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of("Aserbaijaneg Deheuol"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Ffwla"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of("Arabeg Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Ffinneg"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"Ffijïeg"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Balochi Gorllewinol"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Cantoneeg"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Ffaröeg"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Ffrangeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Ffriseg y Gorllewin"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Gwyddeleg"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Gaeleg yr Alban"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galisieg"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"Guaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Iaith anhysbys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Calendr Amete Alem Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("Gwjarati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manaweg"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hawsa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Hebraeg"_s)
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
			$of("Croateg"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Creol Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Hwngareg"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Armeneg"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("Ffrangeg Cajwn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("Seineg IPA"_s)
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
			$of("Indoneseg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Digidau Tibetaidd"_s)
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
			$of("Nwosw"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("Ffrangeg Canol"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inwpiaceg"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("Hen Ffrangeg"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("Arpitaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Ffriseg y Dwyrain"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Ffriseg Gogleddol"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("Islandeg"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Eidaleg"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inwctitwt"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("Is-silesieg"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Japaneeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Malayalamaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("Dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("Comeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Sami Deheuol"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Jafanaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Madwreg"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Sami Lwle"_s)
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
			$of("Georgeg"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Macasareg"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Sami Scolt"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Congo"_s)
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
			$of("Casacheg"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Chmereg"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Coreeg"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Canwri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Cashmireg"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Cwrdeg"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Comi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Cernyweg"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Cirgiseg"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninceg"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Lwcsembwrgeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Digidau Malayalamaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limbwrgeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("Tibetaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Ffriwleg"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Laoeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("System Fesur Imperialaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lithwaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Latfieg"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdeg"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagaseg"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marsialeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Trefn Rhagosodedig Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Macedoneg"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Mongoleg"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Maleieg"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Malteg"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Byrmaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("Armenaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Mocsia"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Sorbeg Isaf"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"Nawrŵeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Chwilio at Ddibenion Cyffredinol"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norwyeg Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Ndebele Gogleddol"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepaleg"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandareg"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Iseldireg"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Norwyeg Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Norwyeg"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("Ndebele Deheuol"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Nafaho"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Cara-Calpaceg"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nianja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("Kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Cabileg"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Ocsitaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("Jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Camba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("Mendeg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of("Saesneg Modern Cynnar"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"Mêrw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("Rhifolion Armenaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Oseteg"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Cabardieg"_s)
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
			$of("Pwnjabeg"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Diwaleg"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("Serereg"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Pwyleg"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("Iseldireg Canol"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Calendr Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portiwgaleg"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Gwyddeleg Canol"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Trefn"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Portiwgaleg Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"Gwyddor Bohorič"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("Tyapeg"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Makhuwa-Meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Fformat Arian"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Calendr"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Laoaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("Meta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"System 24 Awr (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"System 24 Awr (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("Brahui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Digidau Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapoteceg"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("Bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("Macondeg"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of("Ffriseg Saterland"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("Ethiopig"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"System 12 Awr (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"System 12 Awr (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Románsh"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rwndi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Math o Arian"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Rwmaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Digidau Orïaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Rhifolion Degol Tsieineaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Rwseg"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("Acwseg"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Ciniarŵandeg"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("Blisssymbols"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Caboferdianeg"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Micmaceg"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Swcwma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("Saesneg Awstralia"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sansgrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"Swsŵeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Sami Gogleddol"_s)
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
			$of("Serbo-Croateg"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Sinhaleg"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("Swmereg"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slofaceg"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Slofeneg"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Samöeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somaleg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("Digidau Arabig-Indig"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serbeg"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Fformat Arian Cyfrifeg"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Sesotheg Deheuol"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Swndaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("tafodiaith Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Swedeg"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("Rhifolion Ariannol Tsieineaidd Traddodiadol"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("Ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("Ibaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamileg"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Bwriateg"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Canol Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Gorllewin Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tajiceg"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Bwginaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("Saesneg Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Tyrcmeneg"_s)
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
			$of("Tongeg"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("Bwlw"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("Rhifolion Japaneaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Tyrceg"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsongaeg"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("Comoreg"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatareg"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"Tahitïeg"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Ewrop"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Dwyrain Ewrop"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Gogledd Ewrop"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Gorllewin Ewrop"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uighur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("Coreaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Cyffredin"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Wcreineg"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"Zêlandeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Calendr y Coptiaid"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Wrdw"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("Calmyceg"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Wsbeceg"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"Càseg"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("Sacsoneg Isel"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Fendeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Calendr Gweriniaeth Tseina"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Fietnameg"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Cylched Awr (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Folapük"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of("Chowareg"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("Hen Syrieg"_s)
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
			$of("Walwneg"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("Gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Syrieg"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("Groegaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Woloff"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Tamaseit Moroco Safonol"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("Arabeg Modern Safonol"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("Gaio"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("Mongolaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("Manshw"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Silesieg"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaia"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Manipwri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("Rhifolion Tsieineaidd Symledig"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Rhifolion Tsieineaidd Traddodiadol"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("Rhifolion Rhufeinig mewn Llythrennau Bychain"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("tafodiaith Pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("Osageg"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of("Dareg y Zoroastriaid"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohoceg"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("Ffrangeg Modern Cynnar"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Iddew-Almaeneg"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mosi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Iorwba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("Sbaeneg Mecsico"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("Tyrceg Otoman"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Faieg"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Tsieinëeg"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Arddull Toriad Llinell"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Swlw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Trefn Llyfr Ffôn"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("Georgaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("Rhifolion Ariannol Japaneaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("Mari Gorllewinol"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Trefn Diwygiedig"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embw"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Tsieinëeg Symledig"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("Komi-Permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Concani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("orgraff draddodiadol yr Almaeneg"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("Feniseg"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Tsieinëeg Traddodiadol"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("Feps"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Digidau Chmeraidd"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Ilocaneg"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Digidau Gwrmwcaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Mwy nag un iaith"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Cado"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("System Fesur"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Creek"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilberteg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("yr Orgraff Gyffredin"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Caribeg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Digidau Tamilaidd"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karachay-Balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Ingwsieg"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Careleg"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("Tulu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Rhifau"_s)
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
			$of("Baffia"_s)
		})
	}));
	return data;
}

LocaleNames_cy::LocaleNames_cy() {
}

$Class* LocaleNames_cy::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_cy, name, initialize, &_LocaleNames_cy_ClassInfo_, allocate$LocaleNames_cy);
	return class$;
}

$Class* LocaleNames_cy::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun