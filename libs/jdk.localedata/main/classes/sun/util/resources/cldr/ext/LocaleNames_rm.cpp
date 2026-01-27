#include <sun/util/resources/cldr/ext/LocaleNames_rm.h>

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

$MethodInfo _LocaleNames_rm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_rm, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_rm, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_rm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_rm",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_rm_MethodInfo_
};

$Object* allocate$LocaleNames_rm($Class* clazz) {
	return $of($alloc(LocaleNames_rm));
}

void LocaleNames_rm::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_rm::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ae, "avestic"_s);
	$var($String, metaValue_ar, "arab"_s);
	$var($String, metaValue_bn, "bengal"_s);
	$var($String, metaValue_bo, "tibetan"_s);
	$var($String, metaValue_el, "grec"_s);
	$var($String, metaValue_gu, "gujarati"_s);
	$var($String, metaValue_he, "ebraic"_s);
	$var($String, metaValue_hy, "armen"_s);
	$var($String, metaValue_ja, "giapunais"_s);
	$var($String, metaValue_jv, "javanais"_s);
	$var($String, metaValue_ka, "georgian"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_ko, "corean"_s);
	$var($String, metaValue_la, "latin"_s);
	$var($String, metaValue_lo, "laot"_s);
	$var($String, metaValue_mn, "mongolic"_s);
	$var($String, metaValue_or, "oriya"_s);
	$var($String, metaValue_si, "singalais"_s);
	$var($String, metaValue_su, "sundanais"_s);
	$var($String, metaValue_ta, "tamil"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, "tailandais"_s);
	$var($String, metaValue_tl, "tagalog"_s);
	$var($String, metaValue_ban, "balinais"_s);
	$var($String, metaValue_ccp, "chakma"_s);
	$var($String, metaValue_chr, "cherokee"_s);
	$var($String, metaValue_cop, "coptic"_s);
	$var($String, metaValue_got, "gotic"_s);
	$var($String, metaValue_nqo, u"n’ko"_s);
	$var($String, metaValue_peo, "persian vegl"_s);
	$var($String, metaValue_phn, "fenizian"_s);
	$var($String, metaValue_syr, "siric"_s);
	$var($String, metaValue_uga, "ugaritic"_s);
	$var($String, metaValue_zbl, "simbols da Bliss"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("colognais"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirandais"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("simbols"_s)
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
			$of("tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emojis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("dialect da Gniva"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("egipzian vegl"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phags-pa"_s)
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
			$of("rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Insla d’Ascensiun"_s)
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
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Emirats Arabs Unids"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flam"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua e Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("chalender etiopic"_s)
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
			$of("Teng"_s),
			$of("tengwar"_s)
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
			$of("Argentinia"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("partic dad inscripziuns"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Americana"_s)
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
			$of("englais american"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Inslas Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Aserbaidschan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("armen oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia ed Erzegovina"_s)
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
			$of("Bangladesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumuk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("tudestg mesaun"_s)
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
			$of(u"Son Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudas"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erzya"_s)
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
			$of("Antillas Ollandaisas"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasilia"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Insla Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bielorussia"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("alfabet visibel"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("chalender persian"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Inslas Cocos"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Republica Centralafricana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Svizra"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Costa d’Ivur"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Inslas Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Camerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Columbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Insla da Clipperton"_s)
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
			$of("Cap Verd"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Insla da Nadal"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cipra"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Tschechia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Germania"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("vegl tudestg da scrittira"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("aceh"_s)
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
			$of("DJ"_s),
			$of("Dschibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danemarc"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("scrittira da Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Republica Dominicana"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meetei mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
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
			$of("Ceuta e Melilla"_s)
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
			$of("andangme"_s)
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
			$of("Egipta"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Occidentala"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("tschagataic"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palau"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuukais"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"patuà chinook"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
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
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spagna"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Uniun Europeica"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamitic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("chalender gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"zona da l’euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adygai"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fidschi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Inslas dal Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Inslas Feroe"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frantscha"_s)
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
			$of("type.ca.indian"_s),
			$of("chalender naziunal indic"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("grec vegl"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabun"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("votic"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Reginavel Unì"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("pidgin nigerian"_s)
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
			$of("Guyana Franzosa"_s)
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
			$of("Tale"_s),
			$of("tai le"_s)
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
			$of(u"Grönlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("englais mesaun"_s)
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
			$of("Guinea Equatoriala"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grezia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Georgia dal Sid e las Inslas Sandwich dal Sid"_s)
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
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingonic"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("tai lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("curd central"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("nagins cuntegns linguistics"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("tudestg austriac"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Regiun d’administraziun speziala da Hongkong, China"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("vaii"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Inslas da Heard e da McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Croazia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("tudestg svizzer"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungaria"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamasheq"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Inslas Canarias"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("neapolitan"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Insla da Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territori Britannic en l’Ocean Indic"_s)
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
			$of("Islanda"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("notaziun matematica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("computer"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("chalender islamic"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Giamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Giapun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("franzos mesaun tardiv (fin 1606)"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("lingua tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("tudestg da scrittira svizzer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("chalender budistic"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("America Latina"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgisistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambodscha"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comoras"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts e Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"ertà"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("franzos canadais"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Corea dal Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Corea dal Sid"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("fonetica da Pollard"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("franzos svizzer"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Inslas Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasachstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("cirillic"_s)
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
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("slav da baselgia vegl"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("bass tudestg"_s)
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
			$of("accadic"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
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
			$of("Phlv"_s),
			$of("pahlavi da cudeschs"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettonia"_s)
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
			$of("Maroc"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavia"_s)
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
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Inslas da Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutic"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Macedonia dal Nord"_s)
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
			$of("newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Regiun d’administraziun speziala Macao, China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Inslas Mariannas dal Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauretania"_s)
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
			$of("altaic dal sid"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivas"_s)
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
			$of("chalender giapunais"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaisia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambic"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("pahlavi dad inscripziuns"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Africa Subsaharica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("chalender ebraic"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nova Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Insla Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("pahlavi da psalms"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahawn hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Pajais Bass"_s)
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
			$of("Phnx"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
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
			$of("Nova Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("romani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroitic"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("tirc crimean"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("englais vegl"_s)
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
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("chalender islamic civil"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("kaschubic"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("englais britannic"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polinesia Franzosa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nova Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippinas"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Pologna"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre e Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Territori Palestinais"_s)
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
			$of("PY"_s),
			$of("Paraguai"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
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
			$of("%%SCOTLAND"_s),
			$of("englais da standard scot"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niue"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Oceania Periferica"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezghian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"alfabet fonetic da l’Ural (UPA)"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai viet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("mund"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("America dal Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("America dal Sid"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumenia"_s)
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
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("manicheic"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("ponapean"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandaic"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Inslas Salomonas"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Africa dal Vest"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellas"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("America Centrala"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Svezia"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Africa da l’Ost"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("arameic"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Africa dal Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Sontg’Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("stil da sigl da lingia strict"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Africa Centrala"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Africa Meridiunala"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard e Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("americas"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovachia"_s)
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
			$of("araucanic"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Sudan dal Sid"_s)
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
			$of("arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("yapais"_s)
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
			$of("sistem da mesira US"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Amercia dal Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Inslas Turks e Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tschad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Territoris Franzos Meridiunals"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailanda"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tadschikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Caribica"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Timor da l’Ost"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("dialect boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunesia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Tirchia"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad e Tobago"_s)
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
			$of("Orkh"_s),
			$of("orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tansania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("scrittira nunenconuschenta"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ucraina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("aromunic"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Asia da l’Ost"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvinian"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia dal Sid"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Asia dal Sidost"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa dal Sid"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Inslas Pitschnas Perifericas dals Stadis Unids da l’America"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Naziuns Unidas"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Stadis Unids da l’America"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("chinaisa simplifitgada - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("prussian"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Usbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("urden dals stritgs"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngienboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Citad dal Vatican"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("provenzal vegl"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent e las Grenadinas"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Inslas Virginas Britannicas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Inslas Virginas Americanas"_s)
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
			$of("nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("nordic vegl"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australia e Nova Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("armen occidental"_s)
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
			$of("reglas tradiziunalas"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Regiun Micronesica"_s)
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
			$of("wae"_s),
			$of("gualser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
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
			$of("accents pseudo"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("pseudo-bidirecziunal"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinesia"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Cosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("betg scrit"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("ol chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("zavrada da standard"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("dialect da Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("lingua da segns"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Africa dal Sid"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("stil da sigl da lingia liber"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Sambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("regiun nunenconuschenta"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("sistem metric"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("chalender tenor ISO 8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("lomongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho dal nord"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("ettitic"_s)
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
			$of("ieroglifas maya"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("luri dal nord"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("newari classic"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("khmer/cambodschan"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("jakut"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("arameic samaritan"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("albanais dal Caucasus"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("dialect scouse"_s)
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
			$of("Tfng"_s),
			$of("tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("giudaic-persian"_s)
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
			$of("filippino"_s)
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
			$of("belutschi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slavey"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("giudaic-arab"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("spagnol europeic"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("scot"_s)
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
			$of("abchasian"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
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
			$of("am"_s),
			$of("amaric"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonais"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("dialect da Stolvizza"_s)
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
			$of("scrittira da silbas giapunaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assami"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avaric"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("aserbeidschanic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("dialect da Oscacco"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baschkir"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bieloruss"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgar"_s)
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
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniac"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("burmais"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("tschetschen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("ortografia revedida"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("cors"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("tschec"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("slav da baselgia"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("tschuvasch"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("kimric"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danais"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("portugais europeic"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("tudestg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("format da valuta da standard"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("bedscha"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("buginais"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("irlandais vegl"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("maledivic"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("spagnol latinamerican"_s)
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
			$of("chalender chinais"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("stil da sigl da lingia normal"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldav"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("englais"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("chinaisa tradiziunala - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("spagnol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("eston"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("han cun bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basc"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("samaritan"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("aut sorb"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"simplifitgà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("cifras occidentalas"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradiziunal"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fidschian"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("cantonais"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("feroais"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("mbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("franzos"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("fris"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("gaelic scot"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galician"_s)
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
			$of("lingua nunenconuschenta"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manx"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("haussa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
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
			$of("croat"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("creol haitian"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("ungarais"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("alfabet fonetic internaziunal (IPA)"_s)
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
			$of("indonais"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("sichuan yi"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("franzos mesaun"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("franzos vegl"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"fris da l’ost"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("fris dal nord"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandais"_s)
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
			$of("malaisian"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of("arab vegl dal sid"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("sami dal sid"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("shavian"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madurais"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("sami lule"_s)
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
			$of("sami inari"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makassar"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("sami skolt"_s)
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
			$of(metaValue_got)
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
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("casac"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grönlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("cambodschan"_s)
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
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("curd"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("cornic"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirghis"_s)
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
			$of("luxemburgais"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburgais"_s)
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
			$of("friulan"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("sistem da mesira imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("lituan"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("letton"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdian"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malagassi"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marschallais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("zavrada unicode standard"_s)
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
			$of("malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malaic"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltais"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birman"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("bass sorb"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("arameic imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("tschertga generala"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norvegais bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele dal nord"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalais"_s)
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
			$of("ollandais"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("norvegiais nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norvegiais"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele dal sid"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
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
			$of("kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("politonic"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("occitan"_s)
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
			$of("ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardic"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("morisyen"_s)
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
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("serer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("dialect lipovaz da Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polac"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("ollandais mesaun"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("chalender dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("paschto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugais"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("irlandais mesaun"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("zavrada"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("portugais brasilian"_s)
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
			$of("format da valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("chalender"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"sistem da 24 uras (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"sistem da 24 uras (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapotec"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"sistem da 12 uras (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"sistem da 12 uras (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("rumantsch"_s)
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
			$of("rumen"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("russ"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("cabverdian"_s)
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
			$of("englais australian"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanscrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sard"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("sami dal nord"_s)
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
			$of("serbo-croat"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumeric"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovac"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("sloven"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoan"_s)
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
			$of("cifras indic-arabas"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanais"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serb"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("format da valuta per la contabilitad"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sotho dal sid"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("dialect da Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("svedais"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suahili"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Asia Centrala"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia dal Vest"_s)
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
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugi"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("englais canadais"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmen"_s)
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
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("tirc"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("diula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("dialect da San Giorgio"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa Orientala"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa dal Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa dal Vest"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uiguric"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("italic vegl"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"betg determinà"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ucranais"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("ortografia standardisada da Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmuk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("usbec"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("nova ortografia tudestga"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("syloti nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("chalender da la Republica Chinaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamais"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("khotanais"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("ciclus da las uras"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("ortografia taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("siric classic"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osman"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("vallon"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidic"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("scrittira a cugn sumeric-accadica"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"marocan tamazight standardisà"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"arab modern standardisà"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("simbols autoctons canadais unifitgads"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("manchu"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("latin (scrittira gotica)"_s)
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
			$of("latin (scrittira gaelica)"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lichic"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("moon"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("franzos modern tempriv (a partir da 1694)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("jiddic"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("spagnol mexican"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("siric dal vest"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("tirc ottoman"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("siric estrangelo"_s)
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
			$of("carian"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("chinais"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("permic vegl"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("stil da sigl da lingia"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("cudesch da telefon"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monotonic"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"siric da l’ost"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("arab vegl dal nord"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("egipzian demotic"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("egipzian ieratic"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("ieroglifas egipzianas"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("kutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"chinais simplifitgà"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("ungarais vegl"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("ortografia tudestga tradiziunala"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosraean"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("chinais tradiziunal"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilocano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("valencian"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("cipriot"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"alfabet tirc unifitgà"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("pluriling"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("sistem da mesira"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagolitic"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilbertais"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("caribic"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karachay-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingush"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("carelian"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
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
			$of("bafia"_s)
		})
	}));
	return data;
}

LocaleNames_rm::LocaleNames_rm() {
}

$Class* LocaleNames_rm::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_rm, name, initialize, &_LocaleNames_rm_ClassInfo_, allocate$LocaleNames_rm);
	return class$;
}

$Class* LocaleNames_rm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun