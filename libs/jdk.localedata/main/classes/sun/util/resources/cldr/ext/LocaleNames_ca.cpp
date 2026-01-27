#include <sun/util/resources/cldr/ext/LocaleNames_ca.h>

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

$MethodInfo _LocaleNames_ca_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ca, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ca, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ca_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ca",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ca_MethodInfo_
};

$Object* allocate$LocaleNames_ca($Class* clazz) {
	return $of($alloc(LocaleNames_ca));
}

void LocaleNames_ca::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ca::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ae, u"avèstic"_s);
	$var($String, metaValue_ar, u"àrab"_s);
	$var($String, metaValue_bn, u"bengalí"_s);
	$var($String, metaValue_bo, u"tibetà"_s);
	$var($String, metaValue_el, "grec"_s);
	$var($String, metaValue_gu, "gujarati"_s);
	$var($String, metaValue_he, "hebreu"_s);
	$var($String, metaValue_hy, "armeni"_s);
	$var($String, metaValue_ja, u"japonès"_s);
	$var($String, metaValue_jv, u"javanès"_s);
	$var($String, metaValue_ka, u"georgià"_s);
	$var($String, metaValue_km, "khmer"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_ko, u"coreà"_s);
	$var($String, metaValue_la, u"llatí"_s);
	$var($String, metaValue_ml, u"malaiàlam"_s);
	$var($String, metaValue_mn, "mongol"_s);
	$var($String, metaValue_my, u"birmà"_s);
	$var($String, metaValue_or, "oriya"_s);
	$var($String, metaValue_si, u"singalès"_s);
	$var($String, metaValue_ta, u"tàmil"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_ban, u"balinès"_s);
	$var($String, metaValue_bax, "bamum"_s);
	$var($String, metaValue_ccp, "chakma"_s);
	$var($String, metaValue_chr, "cherokee"_s);
	$var($String, metaValue_cop, "copte"_s);
	$var($String, metaValue_got, u"gòtic"_s);
	$var($String, metaValue_kpe, "kpelle"_s);
	$var($String, metaValue_men, "mende"_s);
	$var($String, metaValue_mni, u"manipurí"_s);
	$var($String, metaValue_nqo, u"n’Ko"_s);
	$var($String, metaValue_osa, "osage"_s);
	$var($String, metaValue_pal, "pahlavi"_s);
	$var($String, metaValue_peo, "persa antic"_s);
	$var($String, metaValue_phn, "fenici"_s);
	$var($String, metaValue_sat, "santali"_s);
	$var($String, metaValue_ssy, "saho"_s);
	$var($String, metaValue_syr, u"siríac"_s);
	$var($String, metaValue_uga, u"ugarític"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($String, metaValue_zbl, u"símbols Bliss"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kölsch"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandès"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"símbols"_s)
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
			$of("type.nu.lanatham"_s),
			$of(u"dígits tai tham tham"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"emilià"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("dialecte de Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"mingrelià"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("egipci antic"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phagspa"_s)
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
			$of("terena"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Illa de l’Ascensió"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotongà"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tètum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emirats Àrabs Units"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamenc"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua i Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"calendari etíop"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("gilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"zona horària"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albània"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armènia"_s)
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
			$of(u"Antàrtida"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"parthià inscripcional"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Nord-americana"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Àustria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austràlia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"anglès americà"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Illes Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaidjan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("armeni oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bòsnia i Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"cebuà"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kúmik"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bèlgica"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"alt alemany mitjà"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulgària"_s)
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
			$of(u"Benín"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudes"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"mordovià erza"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bolívia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Carib Neerlandès"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahames"_s)
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
			$of("Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Belarús"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("llenguatge visible"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("calendari persa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("nombres hebreus"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Canadà"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Illes Cocos"_s)
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
			$of(u"República Centreafricana"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Suïssa"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Illes Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Xile"_s)
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
			$of("Xina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Colòmbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Illa Clipperton"_s)
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
			$of("Illa Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Xipre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"dígits balinesos"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Txèquia"_s)
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
			$of("Pauc"_s),
			$of("Pau Cin Hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of("flamenc occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemanya"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("alt alemany antic"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("atjeh"_s)
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
			$of("gom"_s),
			$of("concani de Goa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"dígits devanagaris"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Dinamarca"_s)
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
			$of("braille"_s)
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
			$of("type.nu.armnlow"_s),
			$of(u"nombres armenis en minúscula"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"República Dominicana"_s)
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
			$of(metaValue_mni)
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
			$of("Takr"_s),
			$of("takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Algèria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("amplada mitjana"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(metaValue_pal)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta i Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("txibtxa"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Equador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiament"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Estònia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Sàhara Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("txagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palauà"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("pidgin chinook"_s)
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
			$of("Espanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Etiòpia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Unió Europea"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamita"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"calendari gregorià"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("zona euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("xeiene"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"dígits gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"escriptura de la vall de l’Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adigué"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finlàndia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Illes Malvines"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Micronèsia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("variant local"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Illes Fèroe"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"França"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("picard"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"tokelauès"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"calendari hindú"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"romanyès"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("grec antic"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("tsakhur"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"vòtic"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Regne Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"pidgin de Nigèria"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Geòrgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guaiana Francesa"_s)
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
			$of(u"Groenlàndia"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"anglès mitjà"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Gàmbia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadalupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Guinea Equatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Grècia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Illes Geòrgia del Sud i Sandwich del Sud"_s)
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
			$of(u"alemany pennsilvanià"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klingonià"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("nou tai lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("kurd central"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"sense contingut lingüístic"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"jürchen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("talix"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"alemany austríac"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong (RAE Xina)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Illa Heard i Illes McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hondures"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Croàcia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"alemany suís"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"calendari islàmic (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Haití"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hongria"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("amazic"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Illes Canàries"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"xinès min del sud"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indonèsia"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of("adlam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"dígits kayah"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"napolità"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("dialecte ndyuka"_s)
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
			$of("Tang"_s),
			$of("tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("nabateu"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Illa de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Índia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"normes europees d’ordenació"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Territori Britànic de l’Oceà Índic"_s)
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
			$of(u"Islàndia"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Itàlia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"notació matemàtica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"dígits tai"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"wayú"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("ordinador"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"dígits bengalins"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"alemany palatí"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"calendari islàmic"_s)
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
			$of(u"Jordània"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Japó"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"francès mitjà tardà fins el 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"gusí"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"dígits kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"alemany estàndard suís"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Ordenació fonètica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("calendari budista"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Amèrica Llatina"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirguizistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambodja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comores"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Christopher i Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("heretat"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"francès canadenc"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Corea del Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Corea del Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("pollard miao"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"francès suís"_s)
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
			$of("Illes Caiman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"ciríl·lic"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Líban"_s)
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
			$of(u"ciríl·lic de l’antic eslau eclesiàstic"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwich’in"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of("luna 1918"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("baix alemany"_s)
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
			$of("accadi"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Libèria"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(metaValue_pal)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Lituània"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Letònia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("sora sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Líbia"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"judeocastellà"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of("alabama"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of("laukika"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("panjabi occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("mahajani"_s)
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
			$of("Marroc"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Mònaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Moldàvia"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"nü shu"_s)
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
			$of("MH"_s),
			$of("Illes Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleuta"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"tailandès"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"dígits vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Macedònia del Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Myanmar (Birmània)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mongòlia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macau (RAE Xina)"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"albanès geg"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Illes Mariannes del Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinica"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mauritània"_s)
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
			$of(u"sistema de transliteració UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Maurici"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("altaic meridional"_s)
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
			$of(u"Mèxic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"calendari japonès"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Malàisia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Moçambic"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("pahlavi inscripcional"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namíbia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Àfrica subsahariana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("calendari hebreu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"ordenació de diccionari"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nova Caledònia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"romanització Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("ortografia revisada unificada"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Níger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nigèria"_s)
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
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahawh hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Països Baixos"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noruega"_s)
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
			$of(u"tsimshià"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nova Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"cursiva meroítica"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"romaní"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"meroític"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"tàtar de Crimea"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"anglès antic"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of(u"ortografia russa 1708–1917"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"francès crioll de les Seychelles"_s)
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
			$of("type.ca.islamic-civil"_s),
			$of(u"calendari civil islàmic"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("caixubi"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"anglès britànic"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Perú"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("tat meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinèsia Francesa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nova Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipines"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Polònia"_s)
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
			$of("Illes Pitcairn"_s)
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
			$of("Territoris palestins"_s)
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
			$of(u"nombres grecs en minúscula"_s)
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
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"anglès estàndard d’Escòcia"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"crioll anglès de Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"piemontès"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niueà"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Territoris allunyats d’Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("extremeny"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lesguià"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"sistema fonètic UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuvaluà"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai viet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Món"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Àfrica"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Amèrica del Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Illa de la Reunió"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Amèrica del Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"pòntic"_s)
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
			$of("%%SURSILV"_s),
			$of(u"sobreselvà"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Sèrbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Rússia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"dígits tai lue nous"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("maniqueu"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharosthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Aràbia Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"ponapeà"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandaic"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Illes Salomó"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Àfrica occidental"_s)
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
			$of(u"Amèrica Central"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Suècia"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Àfrica oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("arameu"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Àfrica septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"salt de línia estricte"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Àfrica central"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Eslovènia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Àfrica meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard i Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amèrica"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Eslovàquia"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("woleai"_s)
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
			$of(u"Somàlia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapudungu"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("nombres tamils tradicionals"_s)
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
			$of("Sudan del Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé i Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"àrab najdi"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Síria"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("eSwatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("arauac"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"àrab egipci"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"yapeà"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("pare"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"sistema d’unitats dels EUA"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Amèrica septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Illes Turks i Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Txad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Territoris Australs Francesos"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of("llengua de signes americana"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tailàndia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tadjikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Carib"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("cerca per consonant inicial del hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunísia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turquia"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinitat i Tobago"_s)
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
			$of(u"asturià"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanzània"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("bissio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("escriptura desconeguda"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("devangari"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ucraïna"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"lígur"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"aromanès"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Àsia oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuvinià"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("suahili del Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Àsia meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Àsia sud-oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"xinès hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("ordre pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Europa meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Illes Perifèriques Menors dels EUA"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Nacions Unides"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Estats Units"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"hawaià"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"acadèmica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"ordre del xinès simplificat - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguai"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"prussià"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("amazic del Marroc central"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"ordre dels traços"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Ciutat del Vaticà"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"provençal antic"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent i les Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Veneçuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Illes Verges Britàniques"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Illes Verges Nord-americanes"_s)
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
			$of("rwo"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"nòrdic antic"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Australàsia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("armeni occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melanèsia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis i Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("ordre tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Regió de la Micronèsia"_s)
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
			$of("type.nu.finance"_s),
			$of("Numerals financers"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"romanització Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"ordenació anterior, per a compatibilitat"_s)
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
			$of("Bass"_s),
			$of("bassa vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"dígits meitei mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("wolaita"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("pseudoaccents"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("pseudobidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polinèsia"_s)
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
			$of("sense escriptura"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(metaValue_sat)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("warlpiri"_s)
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
			$of("Iemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"ordenació estàndard"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("llombard"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"resià"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of(u"sotaselvà"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("escriptura de signes"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"dígits txams"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"República de Sud-àfrica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"dígits sudanesos"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"salt de línia flexible"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("nombres georgians"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Zàmbia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"romanització Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimbàbue"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"regió desconeguda"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"rúnic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"sistema mètric"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("calendari ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"dígits telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"crioll francès de Louisiana"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of("hindi de Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("nombres financers xinesos simplificats"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"híligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"xifres indoaràbigues ampliades"_s)
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
			$of("type.nu.fullwide"_s),
			$of(u"dígits d’amplada completa"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hitita"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"darguà"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"jeroglífics maies"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("luri septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"newari clàssic"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
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
			$of("type.nu.roman"_s),
			$of("nombres romans"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("iacut"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"arameu samarità"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"albanès caucàsic"_s)
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
			$of(metaValue_sat)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("judeopersa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Numèric"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Dígits natius"_s)
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
			$of("%%ALUKU"_s),
			$of("dialecte aluku"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"basc biscaí"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("amplada completa"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luisenyo"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("nyamwesi"_s)
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
			$of(u"filipí"_s)
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
			$of("mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("balutxi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slavi"_s)
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
			$of("bar"_s),
			$of(u"bavarès"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"judeoàrab"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("espanyol europeu"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzema"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"escocès"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sicilià"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"àfar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abkhaz"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaliq"_s)
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
			$of(u"àkan"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amhàric"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonès"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("dialecte de Stolvizza/Solbica"_s)
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
			$of(u"sil·labaris japonesos"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"assamès"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"sasserès"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("lineal A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"àvar"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("lineal B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("kurd meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbaidjanès"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("khoja"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"dialecte d’Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baixkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"ordenació per quantitat de traços radicals"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"belarús"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"búlgar"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"dígits javanesos"_s)
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
			$of(u"bretó"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosnià"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of("bhaiksuki"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"dígits lao"_s)
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
			$of(u"català"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("songhai oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"txetxè"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("ortografia revisada"_s)
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
			$of("txec"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"eslau eclesiàstic"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("txuvaix"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"gal·lès"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"nombres etiòpics"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"danès"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portuguès de Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("alemany"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"format de moneda estàndard"_s)
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
			$of(u"buginès"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"irlandès antic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"dígits mongols"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"espanyol hispanoamericà"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongka"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"calendari xinès"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"xinès clàssic"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("lisu"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("nombres grecs"_s)
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
			$of(u"salt de línia normal"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldau"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"anglès"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of("badaga"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of("laz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"ordre del xinès tradicional - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("espanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"estonià"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("han amb bopomofo"_s)
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
			$of(u"samarità"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("taixelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"alt sòrab"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of("ulster"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("xan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("simplificat"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"dígits aràbics"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("ful"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"àrab txadià"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"xinès xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finès"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fijià"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("balutxi occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"cantonès"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"feroès"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"sistema de transliteració BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"francès"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"frisó occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irlandès"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"gaèlic escocès"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("gallec"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("idioma desconegut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"calendari etíop amete-alem"_s)
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
			$of("bicol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("edo"_s)
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
			$of(u"crioll d’Haití"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"hongarès"_s)
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
			$of("frc"_s),
			$of(u"francès cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"alfabet fonètic internacional"_s)
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
			$of("indonesi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"dígits tibetans"_s)
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
			$of("yi sichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"francès mitjà"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of("interomanx"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"francès antic"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"frisó oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"frisó septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandès"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"italià"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"høgnorsk"_s)
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
			$of("Sarb"_s),
			$of(u"sud-aràbic antic"_s)
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
			$of("type.nu.lepc"_s),
			$of(u"dígits lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("sami meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"shavià"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("bauddha"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madurès"_s)
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
			$of("maf"_s),
			$of("mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"sami d’Inari"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("blackfoot"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makassar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"xinès wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("sami skolt"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandinga"_s)
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
			$of("kikuiu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("massai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"groenlandès"_s)
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
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("caixmiri"_s)
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
			$of("kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"còrnic"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirguís"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of("multani"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburguès"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"dígits malaiàlam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongo-rongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburguès"_s)
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
			$of(u"friülà"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laosià"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"sistema imperial d’unitats"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"dígits tai tham hora"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"lituà"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"letó"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"sogdià"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaix"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marshallès"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ordenació Unicode predeterminada"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("macedoni"_s)
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
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malai"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltès"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
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
			$of(u"mordovià moksa"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"baix sòrab"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("arameu imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"nauruà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"cerca de propòsit general"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"noruec bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepalès"_s)
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
			$of(u"neerlandès"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("noruec nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("noruec"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navaho"_s)
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
			$of("katxin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("cabilenc"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"politònic"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"occità"_s)
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
			$of(metaValue_men)
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
			$of("nombres armenis"_s)
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
			$of("Modi"_s),
			$of("modi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osseta"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"romanització ALA/LC, edició de 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabardí"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"mauricià"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjabi"_s)
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
			$of(u"dialecte Lipovaz del resià"_s)
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
			$of(u"polonès"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"neerlandès mitjà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"dígits saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("calendari dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of(u"baix engiadinès"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("paixtu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portuguès"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"gaèlic irlandès mitjà"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"ordenació"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"portuguès del Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-metto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("format de moneda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"dígits n’ko"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("calendari"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of("jauer"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of("surmiran"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"sistema de 24 hores (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"sistema de 24 hores (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("brahui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"dígits de Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"quítxua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapoteca"_s)
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
			$of("%%VAIDIKA"_s),
			$of(u"vèdic"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"etiòpic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("jyupting"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"sistema de 12 hores (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"sistema de 12 hores (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retoromànic"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("moneda"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"romanès"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"dígits oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("nombres decimals xinesos"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rus"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"ruandès"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"crioll capverdià"_s)
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
			$of(u"anglès australià"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"taquigrafia Duployé"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"sànscrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("ortografia unificada"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sard"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"susú"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("sami septentrional"_s)
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
			$of("serbocroat"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumeri"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("eslovac"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"eslovè"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoà"_s)
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
			$of(u"xifres indoaràbigues"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albanès"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbi"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("format de moneda comptable"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sotho meridional"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sondanès"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("dialecte de Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("suec"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("nombres financers xinesos tradicionals"_s)
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
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Àsia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Àsia central"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Àsia occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("tai"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugui"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"anglès canadenc"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turcman"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagal"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongalès"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("diola"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("nombres japonesos"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turc"_s)
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
			$of("swb"_s),
			$of(u"comorià"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tàtar"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("jula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahitià"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("dialecte de San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Europa septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uigur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("cursiva antiga"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of(u"kaingà"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"comú"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ucraïnès"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"zelandès"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("calendari copte"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urdú"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("ortografia resiana estandarditzada"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("calmuc"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("ortografia alemanya de 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"baix saxó"_s)
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
			$of("Wara"_s),
			$of("varang kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"calendari de la República de Xina"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"khotanès"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("sistema horari (12 h o 24 h)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("ortografia taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"siríac clàssic"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"k’iche’"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of("newar"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"való"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gagaús"_s)
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
			$of("gan"_s),
			$of(u"xinès gan"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidi"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"cuneïforme sumeri-accadi"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"wòlof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"amazic estàndard marroquí"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"àrab estàndard modern"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"síl·labes dels aborígens canadencs unificats"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("sistema X-SAMPA"_s)
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
			$of(u"manxú"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"llatí fraktur"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"silesià"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"jeroglífic anatoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(metaValue_mni)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"llatí gaèlic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("nombres xinesos simplificats"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("nombres xinesos tradicionals"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"nombres romans en minúscula"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("bilin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("dialecte pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lici"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("medumba"_s)
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
			$of(u"francès modern primerenc"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ídix"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("moore"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("ioruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Numerals tradicionals"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"espanyol de Mèxic"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"siríac occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"turc otomà"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"siríac estrangelo"_s)
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
			$of("Cari"_s),
			$of(u"carià"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"xinès"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"antic pèrmic"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"estil de salt de línia"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"ordre de la guia telefònica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"monotònic"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("shrada"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("nombres financers japonesos"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("gueez"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("mari occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"siríac oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"dígits shan de Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"antic nord-aràbic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"dígits ol chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"ordenació reformada"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"tagàlog"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"demòtic egipci"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"hieràtic egipci"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of("itihasa"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"palmirè"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"jeroglífic egipci"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"georgià hucuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"xinès simplificat"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permiac"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"hongarès antic"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("concani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("ortografia alemanya tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"kosraeà"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"vènet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"dígits limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"xinès tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"sundanès"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("vepse"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"dígits khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("tirhut"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilocano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"valencià"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("xipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"alfabet llatí turc unificat"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"dígits gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"llengües vàries"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"alt engiadinès"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("sistema de mesures"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"glagolític"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"gilbertès"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("ortografia comuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("carib"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"dígits tamils"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karatxai-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingúix"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("krio"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"carelià"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("xifres"_s)
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

LocaleNames_ca::LocaleNames_ca() {
}

$Class* LocaleNames_ca::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ca, name, initialize, &_LocaleNames_ca_ClassInfo_, allocate$LocaleNames_ca);
	return class$;
}

$Class* LocaleNames_ca::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun