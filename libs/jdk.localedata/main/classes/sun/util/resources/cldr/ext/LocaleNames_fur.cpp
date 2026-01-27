#include <sun/util/resources/cldr/ext/LocaleNames_fur.h>

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

$MethodInfo _LocaleNames_fur_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_fur, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_fur, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_fur_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_fur",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_fur_MethodInfo_
};

$Object* allocate$LocaleNames_fur($Class* clazz) {
	return $of($alloc(LocaleNames_fur));
}

void LocaleNames_fur::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_fur::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, "arap"_s);
	$var($String, metaValue_bn, u"bengalês"_s);
	$var($String, metaValue_bo, "tibetan"_s);
	$var($String, metaValue_el, u"grêc"_s);
	$var($String, metaValue_gu, "gujarati"_s);
	$var($String, metaValue_hy, "armen"_s);
	$var($String, metaValue_ja, u"gjaponês"_s);
	$var($String, metaValue_km, "khmer"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_ko, "corean"_s);
	$var($String, metaValue_la, "latin"_s);
	$var($String, metaValue_lo, "lao"_s);
	$var($String, metaValue_ml, "malayalam"_s);
	$var($String, metaValue_mn, "mongul"_s);
	$var($String, metaValue_or, "oriya"_s);
	$var($String, metaValue_ta, "tamil"_s);
	$var($String, metaValue_te, "telegu"_s);
	$var($String, metaValue_th, "thai"_s);
	$var($String, metaValue_tl, "tagalog"_s);
	$var($String, metaValue_got, "gotic"_s);
	$var($String, metaValue_peo, "vieri persian"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandês"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipin"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"sclâf"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("dialet di Gnive"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("vieri egjizian"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"spagnûl iberic"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"scozês"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sicilian"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abcazian"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emirâts araps unîts"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("avestan"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamant"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua e Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanie"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenie"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amaric"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonês"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("dialet di Stolvize"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antartic"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argjentine"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("katakana o hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa merecanis"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"assamês"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austrie"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australie"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"lineâr A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"lineâr B"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("ingles merecan"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Isulis Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aymarà"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaigian"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("dialet di Oseac"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"armen orientâl"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnie e Ercegovine"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgjiche"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"bielorùs"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarie"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgar"_s)
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
			$of(u"Sant Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivie"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brasîl"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("breton"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniac"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Isule Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bielorussie"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canade"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Isulis Cocos"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Republiche Democratiche dal Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("cecen"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Republiche centri africane"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Svuizare"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Cueste di Avoli"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("Ortografie revisade"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Isulis Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Cile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Camerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Cine"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombie"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("cors"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Isule Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("cec"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"sclâf de glesie"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Cjâf vert"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Isule Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cipri"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"galês"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Republiche ceche"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"danês"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portughês iberic"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Gjermanie"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("todesc"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Gibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danimarcje"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominiche"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"buginês"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Republiche dominicane"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"vieri irlandês"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"spagnûl de Americhe Latine"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Alzerie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"calendari cinês"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta e Melilla"_s)
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
			$of("EE"_s),
			$of("Estonie"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egjit"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Sahara ocidentâl"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldâf"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"inglês"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritree"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"ordin cinês tradizionâl - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spagne"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"spagnûl"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopie"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("eston"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Union europeane"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("calendari gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Han semplificât"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"numars ocidentâi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Han tradizionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandie"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finlandês"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fizi"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fizian"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Isulis Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesie"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Isulis Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"faroês"_s)
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
			$of("fr"_s),
			$of(u"francês"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("frisian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"calendari nazionâl indian"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"vieri grêc"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"gaelic irlandês"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Ream unît"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"gaelic scozês"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gjeorgjie"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Guiana francês"_s)
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
			$of("Gjibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Groenlande"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galizian"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinee"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guaranì"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Guinee ecuatoriâl"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("indeterminade"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grecie"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Georgia dal Sud e Isulis Sandwich dal Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manx"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("ebraic"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("todesc de Austrie"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Regjon aministrative speciâl de Cine di Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Isule Heard e Isulis McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Cravuazie"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("cravuat"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitian"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ongjarie"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ongjarês"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Isulis Canariis"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesie"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonesian"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlande"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napoletan"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"vieri francês"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Israêl"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isule di Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Teritori britanic dal Ocean Indian"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
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
			$of("Islande"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandês"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italie"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("talian"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
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
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("calendari islamic"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Gjamaiche"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordanie"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Gjapon"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("alt todesc de Svuizare"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("gjeorgjian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("calendari budist"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Americhe latine"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirghizstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Camboze"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazac"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comoris"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("San Kitts e Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"francês dal Canade"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Coree dal nord"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Coree dal sud"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("curd"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"francês de Svuizare"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"cornualiês"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Isulis Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazachistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("cirilic"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
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
			$of("lb"_s),
			$of(u"lussemburghês"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Sante Lusie"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("cirilic dal vieri slavonic de glesie"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("bas todesc"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburghês"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("furlan"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("coptic"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberie"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituanie"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituan"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lussemburc"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letonie"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("leton"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libie"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladin"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroc"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavie"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Sant Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Isulis Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ordenament predeterminât Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("macedon"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Birmanie"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolie"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Regjon aministrative speciâl de Cine di Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Isulis Mariana dal Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martiniche"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritanie"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malês"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltês"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Maurizi"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivis"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Messic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"calendari gjaponês"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambic"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"ricercje par fins gjenerâi"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norvegjês bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("calendari ebreu"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Gnove Caledonie"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ndebele setentrionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepalês"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Isole Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigerie"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Paîs bas"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"olandês"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norvegjês nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norvegje"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norvegjês"_s)
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
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Gnove Zelande"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Politoniche"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("ocitan"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"vieri inglês"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osetic"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Panamà"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"calendari islamic civîl"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("dialet di Lipovaz dal resian"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"inglês britanic"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Perù"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinesie francês"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papue Gnove Guinee"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinis"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonie"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polac"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("San Pierre e Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Teritoris palestinês"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"balinês"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portughês"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("ordenament"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"portughês brasilian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("ebreu"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("calendari"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Oceanie periferiche"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Mont"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopic"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afriche"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Americhe dal Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Americhe meridionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceanie"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"rumanç"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("monede"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romanie"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("romen"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbie"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russie"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rus"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruande"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"inglês australian"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("ugaritic"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabie Saudide"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanscrit"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Isulis Salomon"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Afriche ocidentâl"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardegnûl"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Americhe centrâl"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Svezie"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"sami setentrionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Afriche orientâl"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Afriche setentrionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Sante Eline"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Afriche di mieç"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenie"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"sinalês"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Afriche meridionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard e Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumeric"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Americhis"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovachie"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovac"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("sloven"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marin"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalie"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somal"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albanês"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serp"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swati"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tomè e Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"sotho meridionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"gjavanês"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundanês"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Dialet des valadis dal Nadison"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"svedês"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Sirie"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Americhe setentrionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Isulis Turks e Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Asie centrâl"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Çad"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Asie ocidentâl"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Teritoris meridionâi francês"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tagic"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailandie"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tazikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"inglês canadês"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("caraibic"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turcmen"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Timor orientâl"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisie"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turchie"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turc"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tartar"_s)
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
			$of("asturian"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitian"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanie"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"dialet di San Zorç di Resie"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"codiç par scrituris no codificadis"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ucraine"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Asie orientâl"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Europe orientâl"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Europe setentrionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Asie meridionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Europe ocidentâl"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Asie sud orientâl"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uigur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("ordin pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("vieri italic"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("comun"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Europe meridionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ucrain"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Isulis periferichis minôrs dai Stâts Unîts"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Stâts Unîts"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("Ortografie resiane standard"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"ordin cinês semplificât - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbechistan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbec"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("Ortografie todescje dal 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("ordin segns"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatican"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"vieri provenzâl"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("San Vincent e lis Grenadinis"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("calendari de Republiche di Cine"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Isulis vergjinis britanichis"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Isulis vergjinis americanis"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamite"_s)
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
			$of("wa"_s),
			$of("valon"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"vieri norvegjês"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australie e Gnove Zelande"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"armen ocidentâl"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesie"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis e Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"ordin tradizionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Regjon de Micronesie"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("cuneiform sumeric-acadic"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"Silabari unificât aborigjens canadês"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("latin Fraktur"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinesie"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("latin gaelic"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"codiç pes lenghis no scritis"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("siriac"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"siriac ocidentâl"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("turc otoman"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("siriac Estrangelo"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Sud Afriche"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"cinês"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("ordin elenc telefonic"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Regjon no cognossude o no valide"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("georgjian"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runic"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"sotho setentrionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"siriac orientâl"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("demotic egjizian"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("jeratic egjizian"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("jeroglifics egjizians"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"cinês semplificât"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"vieri ongjarês"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Ortografie todescje tradizionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("jeroglifics Maya"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"cinês tradizionâl"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("valenzian"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("cipriot"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("copt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("lenghis multiplis"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagolitic"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		})
	}));
	return data;
}

LocaleNames_fur::LocaleNames_fur() {
}

$Class* LocaleNames_fur::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_fur, name, initialize, &_LocaleNames_fur_ClassInfo_, allocate$LocaleNames_fur);
	return class$;
}

$Class* LocaleNames_fur::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun