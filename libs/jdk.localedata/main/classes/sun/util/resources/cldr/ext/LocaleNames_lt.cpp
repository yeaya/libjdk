#include <sun/util/resources/cldr/ext/LocaleNames_lt.h>

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

$MethodInfo _LocaleNames_lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_lt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_lt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_lt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_lt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_lt_MethodInfo_
};

$Object* allocate$LocaleNames_lt($Class* clazz) {
	return $of($alloc(LocaleNames_lt));
}

void LocaleNames_lt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_lt::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_TK, "Tokelau"_s);
	$var($String, metaValue_TV, "Tuvalu"_s);
	$var($String, metaValue_WS, "Samoa"_s);
	$var($String, metaValue_ar, u"arabų"_s);
	$var($String, metaValue_bn, u"bengalų"_s);
	$var($String, metaValue_bo, u"tibetiečių"_s);
	$var($String, metaValue_el, u"graikų"_s);
	$var($String, metaValue_gu, u"gudžaratų"_s);
	$var($String, metaValue_he, u"hebrajų"_s);
	$var($String, metaValue_hy, u"armėnų"_s);
	$var($String, metaValue_ja, u"japonų"_s);
	$var($String, metaValue_jv, u"javiečių"_s);
	$var($String, metaValue_ka, u"gruzinų"_s);
	$var($String, metaValue_km, u"khmerų"_s);
	$var($String, metaValue_kn, u"kanadų"_s);
	$var($String, metaValue_ko, u"korėjiečių"_s);
	$var($String, metaValue_la, u"lotynų"_s);
	$var($String, metaValue_lo, u"laosiečių"_s);
	$var($String, metaValue_ml, u"malajalių"_s);
	$var($String, metaValue_mn, u"mongolų"_s);
	$var($String, metaValue_my, u"birmiečių"_s);
	$var($String, metaValue_si, u"sinhalų"_s);
	$var($String, metaValue_su, u"sundų"_s);
	$var($String, metaValue_ta, u"tamilų"_s);
	$var($String, metaValue_te, u"telugų"_s);
	$var($String, metaValue_th, u"tajų"_s);
	$var($String, metaValue_tl, u"tagalogų"_s);
	$var($String, metaValue_bug, u"buginezų"_s);
	$var($String, metaValue_chr, u"čerokių"_s);
	$var($String, metaValue_cop, u"koptų"_s);
	$var($String, metaValue_got, u"gotų"_s);
	$var($String, metaValue_nqo, "enko"_s);
	$var($String, metaValue_syr, u"sirų"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kolognų"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandezų"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"simbolių"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"atsamų"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marvari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of("Tai Tham Tham skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"italų kalbos Emilijos tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("mentavai"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanva"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("jaustukai"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Gniva / Njiva tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"megrelų"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"Čakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"senovės egiptiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"Radžastano"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("pagsa pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("timne"_s)
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
			$of("Tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Dangun Žengimo sala"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotonganų"_s)
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
			$of(u"Jungtiniai Arabų Emyratai"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"flamandų"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistanas"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigva ir Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Etiopijos kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("gilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angilija"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Laiko juosta"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanija"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armėnija"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("tengvar"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktida"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"rašytiniai partų"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikos Samoa"_s)
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
			$of(u"Jungtinių Valstijų anglų"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Alandų Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"mjenų"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaidžanas"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Rytų armėnai"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnija ir Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbadosas"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"sebuanų"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangladešas"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kumikų"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgija"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Vidurio Aukštosios Vokietijos"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Fasas"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarija"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahreinas"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundis"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Beninas"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of("Sen Bartelemi"_s)
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
			$of(u"erzyjų"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brunėjus"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivija"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Karibų Nyderlandai"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazilija"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamos"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"sogų"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butanas"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Buvė Sala"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsvana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Baltarusija"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belizas"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("matoma kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"persų kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"hebrajų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokosų (Kilingo) Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazenderanių"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongas-Kinšasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Centrinės Afrikos Respublika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongas-Brazavilis"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Šveicarija"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Dramblio Kaulo Krantas"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Kuko Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Čilė"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamerūnas"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kinija"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbija"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Klipertono sala"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Žaliasis Kyšulys"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kiurasao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Kalėdų Sala"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kipras"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("bali skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Čekija"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("Pau Cin Hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"vakarų flamandų"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Vokietija"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"senoji Aukštosios Vokietijos"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ačinezų"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"čigų"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garsija"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"Goa konkanių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devanagari skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Džibutis"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danija"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"akolių"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("brailio"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"armėnų skaitmenys mažosiomis raidėmis"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikos Respublika"_s)
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
			$of("vmf"_s),
			$of(u"pagrindinė frankonų"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei majek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alžyras"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"pangasinanų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"vidutinio pločio"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"vidurinė persų kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Seuta ir Melila"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"čibčų"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"pampangų"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvadoras"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"adangmų"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estija"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egiptas"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Vakarų Sachara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"čagatų"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palauliečių"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"čukesų"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"činuk žargonas"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"marių"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"čipvėjų"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"čoktau"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Eritrėja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Ispanija"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopija"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Europos Sąjunga"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"elamitų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Grigaliaus kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("euro zona"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"čajenų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"gudžaratų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adygėjų"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"Tuniso arabų"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Suomija"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidžis"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Folklando Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezija"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Lokalės variantas"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Farerų Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Prancūzija"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"Kpelų"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"pikardų"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"nacionalinis indų kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"italų kalbos Romanijos tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"senovės graikų"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabonas"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"tsakurų"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Votik"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Jungtinė Karalystė"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Nigerijos pidžinų"_s)
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
			$of(u"Prancūzijos Gviana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Gernsis"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("tai le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltaras"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grenlandija"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Vidurio Anglijos"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambija"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Gvinėja"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gvadelupa"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Pusiaujo Gvinėja"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Graikija"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Pietų Džordžija ir Pietų Sandvičo salos"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guamas"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of(u"Pensilvanijos vokiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Bisau Gvinėja"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"tlingitų"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klingonų"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("naujasis Tailando lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gajana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"soranių kurdų"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"nėra kalbinio turinio"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("Jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"talyšų"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of(u"vokiečių kalbos žemaičių tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Austrijos vokiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Ypatingasis Administracinis Kinijos Regionas Honkongas"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Herdo ir Makdonaldo Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hondūras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatija"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"aghemų"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Šveicarijos vokiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("Islamo kalendorius (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haitis"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Vengrija"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of(u"rifų"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tamašek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanarų salos"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"kinų kalbos pietų minų tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezija"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"senoji persų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("Kayah Li skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Airija"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"neapoliečių"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of("Sora Sompeng skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("Tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izraelis"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"Nabatėjų"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Meno Sala"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indija"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"rūšiavimo tvarka daugiakalbės Europos dokumentų"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Indijos Vandenyno Britų Sritis"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irakas"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iranas"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islandija"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italija"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("matematiniai simboliai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"tajų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of("veru"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"vajų"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Kompiuteris"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"bengalų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"vokiečių kalbos Pfalco tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Džersis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamo kalendorius"_s)
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
			$of("Jordanija"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japonija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"1606 -ųjų metų prancūzų kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ainų"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusi"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"niasa tongų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"kanadų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kajah li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("Siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Šveicarijos aukštutinė vokiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fonetinė rikiavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"ingrų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"budistų kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenija"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Lotynų Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizija"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambodža"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribatis"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komorai"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sent Kitsas ir Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"paveldėtas"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Kanados prancūzų"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Šiaurės Korėja"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Pietų Korėja"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"polard fonetinė"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Šveicarijos prancūzų"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuveitas"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"Papua pidžinų"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Kaimanų Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazachstanas"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kirilica"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laosas"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanas"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Sent Lusija"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"finikiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"senoji bažnytinė slavų kirilica"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gvičino"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Žemutinės Vokietijos"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lichtenšteinas"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Šri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akadianų"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberija"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"centrinės Aliaskos jupikų"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotas"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("buk pahvali"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lietuva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Liuksemburgas"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvija"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("Sora Sompeng"_s)
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
			$of("akz"_s),
			$of(u"alabamiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("landa"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"Mahadžani"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("hana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marokas"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monakas"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"Nüshu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Juodkalnija"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Sen Martenas"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskaras"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Maršalo Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"aleutų"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Šiaurės Makedonija"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Malis"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mianmaras (Birma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolija"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("nevari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Ypatingasis Administracinis Kinijos Regionas Makao"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"albanų kalbos gegų tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Marianos Šiaurinės Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritanija"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montseratas"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN simboliai"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauricijus"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"pietų Altajaus"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldyvai"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malavis"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"japonų kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaizija"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambikas"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"rašytiniai pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibija"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Užsachario Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"hebrajų kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"žodyno rūšiavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Naujoji Kaledonija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles Romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"Suvienodinta ištaisyta rašyba"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nigeris"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolko sala"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigerija"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("Taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("pselter pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragva"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahav hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Nyderlandai"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norvegija"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepalas"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of(u"tsakonų"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Niujė"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"foenikų"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"tsimšian"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Naujoji Zelandija"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"Merojitų rankraštinis"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"romų"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroitik"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"Krymo turkų"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"senoji anglų"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Omanas"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"angikų"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"Seišelių kreolų ir prancūzų"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"senieji persų"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Islamo kalendorius (lentelinis, pilietinė era)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"kašubų"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Didžiosios Britanijos anglų"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"musulmonų tatų"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Prancūzijos Polinezija"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua Naujoji Gvinėja"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinai"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistanas"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Lenkija"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("evondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sen Pjeras ir Mikelonas"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkerno salos"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rikas"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinos teritorija"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"Baliečių"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalija"_s)
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
			$of(u"graikų skaitmenys mažosiomis raidėmis"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragvajus"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"tumbukų"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Kataras"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Norminė škotiška anglų kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"Jamaikos kreolų anglų"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"italų kalbos Pjemonto tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niujiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Nuošali Okeanija"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"ispanų kalbos Ekstremadūros tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lezginų"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("Takri skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai vet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("pasaulis"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("ao naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Šiaurės Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunjonas"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Pietų Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"naujoji frankų kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("loiban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("Ponto"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Okeanija"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumunija"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbija"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("Mro"_s)
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
			$of("type.nu.talu"_s),
			$of("Naujieji Tai Lue skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"maničų"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("ugaritik"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"karošti"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudo Arabija"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"Ponapės"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"mandėjų"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Saliamono Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"tasavakų"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Vakarų Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Seišeliai"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudanas"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Centrinė Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Švedija"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Rytų Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"aramaikų"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Šiaurės Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singapūras"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Šv. Elenos Sala"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"griežtas teksto laužymo stilius"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Vidurio Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Slovėnija"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Pietinė Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbardas ir Janas Majenas"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakija"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("Woleai"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Siera Leonė"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marinas"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegalas"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalis"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"mapudungunų"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"arapahų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"tradicinės tamilų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinamas"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"araonų"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Pietų Sudanas"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"San Tomė ir Prinsipė"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"Alžyro arabų"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvadoras"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Martenas"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Sirija"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("jao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Svazilandas"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"aravakų"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"Egipto arabų"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"Maroko arabų"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"japezų"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of(u"rotumanų"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristano da Kunjos"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"amerikietiška matų sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Šiaurinė Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Terkso ir Kaikoso Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"jangbenų"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Čadas"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Prancūzijos Pietų sritys"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"Amerikos ženklų kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togas"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailandas"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadžikija"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibai"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Rytų Timoras"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"jembų"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmėnistanas"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisas"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkija"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidadas ir Tobagas"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taivanas"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"asturianų"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"rusinų"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("Rovianos"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanija"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"kvasių"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"nežinomi rašmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"ligūrų"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"aromanių"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Rytų Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuvių"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"Kongo suahilių"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Pietų Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haido"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Pietryčių Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"kinų kalbos hakų tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"supaprastinta kiniškų hieroglifų rūšiavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Pietų Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Jungtinių Valstijų Mažosios Tolimosios Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"lyvių"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Jungtinės Tautos"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Jungtinės Valstijos"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"havajiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Akademinis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"supaprastinta kiniška rūšiavimo tvarka - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugvajus"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"prūsų"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistanas"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Centrinio Maroko tamazitų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Įprasta kiniško požymio rūšiavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ngiembūnų"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatikano Miesto Valstybė"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"senovės provansalų"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Šventasis Vincentas ir Grenadinai"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venesuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Didžiosios Britanijos Mergelių Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Jungtinių Valstijų Mergelių Salos"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnamas"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"nogų"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rua"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"senoji norsų"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australazija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Vakarų armėnai"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezija"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Volisas ir Futūna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"įprasta rūšiavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronezijos regionas"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"ngombų"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"lakotų"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of("novial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Finansiniai skaičiai"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"ankstesnė rūšiavimo tvarka, skirta suderinamumui"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"valserų"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(metaValue_WS)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of("Meetei Mayek skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("valamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"Vašo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("pseudo A"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("varai"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("pseudo B"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("avadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinezija"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of("Brahmi skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"neparašyta"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ol čiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("valrpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"„Bliss“ simboliai"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemenas"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("standartinis rikiavimas"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"lombardų"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"fangų"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"ženklų raštas"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Majotas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of("cham skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Pietų Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"Sudaniečių skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"laisvas teksto laužymo stilius"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"gruzinų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("Zhuyin rikiavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"Kinų hieroglifų vertimo sistema Romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimbabvė"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"nežinoma sritis"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"runų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"metrinė sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO 8601 kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"mongų"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"šiaurės Soto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"telugų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"Luizianos kreolų"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"lozių"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Naxi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"mačamų"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"Fidžio hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"supaprastintos kinų k. finans. skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"hiligainonų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"išplėstiniai arabų-indų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"nuerų"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"dakotų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"viso pločio skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"hititų"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargva"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"taitų"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"malų hieroglifai"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"šiaurės luri"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"klasikinė nevari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"udmurtų"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("Islamo kalendorius (Saudo Arabija)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"sandavių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"romėniški skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"jakutų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"Šaradų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of(u"latgalių"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"samarėjų aramių"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("Kaukazo Albanijos"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Scouse"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"sambūrų"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"santalių"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("tifinag"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"judėjų persų"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(u"sauraštrų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Skaitinis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Vietiniai skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ngambajų"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"viso pločio"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"sangų"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"niankolų"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("niamvezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lundos"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"niorų"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filipiniečių"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delavero"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"baluči"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slave"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"baliečių"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ugaritų"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"suomių kalbos Tornedalio tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luja"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"bavarų"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"basų"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"bamunų"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"judėjų arabų"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Europos ispanų"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"škotų"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"siciliečių"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afarų"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abchazų"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("batak toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avestų"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afrikanų"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"akanų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"Čakmų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"ghomalų"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amharų"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonesų"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Stolvizza / Solbica tarmė"_s)
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
			$of("katakana / hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asamų"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"sasaresų sardinų"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("linijiniai A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avarikų"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("linijiniai B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"pietų kurdų"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aimarų"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbaidžaniečių"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Oseacco / Osojane tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"baškirų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Šaknies ženklų ir brūkšnių rūšiavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"baltarusių"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulgarų"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"javiečių skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"bambarų"_s)
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
			$of(u"dogribų"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretonų"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosnių"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"senecų"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"laosiečių skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"senų"_s)
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
			$of(u"katalonų"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("kojraboro seni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"čečėnų"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"čamorų"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Ištaisyta rašyba"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsikiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"orijų"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("kry"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"čekų"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"bažnytinė slavų"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("njengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"čiuvašų"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"valų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Etiopijos skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("ji"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"danų"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Europos portugalų"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"vokiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("standartinis valiutos formatas"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"bėjų"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"dinkų"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"danų kalbos jutų tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"bembų"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"senoji airių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"mongolų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"divehų"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Lotynų Amerikos ispanų"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("betavi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"botijų"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"benų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"kinų kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"klasikinė kinų"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"zarmų"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"žemaičių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"graikų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"evių"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"bafutų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"įprastas teksto laužymo stilius"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldavų"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"anglų"_s)
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
			$of(u"įprasta kiniška rūšiavimo tvarka - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ispanų"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"estų"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"hanbų"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"baskų"_s)
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
			$of(u"samariečių"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"tachelhitų"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"aukštutinių sorbų"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"šan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanuno"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"persų"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("supaprastinti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"lotyniški skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradiciniai"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"fulahų"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"chadian arabų"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"kinų kalbos hunano tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"suomių"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fidžių"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"vakarų beludžių"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kinų kalbos Kantono tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"farerų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("BGN simboliai"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"prancūzų"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"sidamų"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"vakarų fryzų"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"airių"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"škotų (gėlų)"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galisų"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"gvaranių"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"baučpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"nežinoma kalba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Etiopijos „Amete Alem“ kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"Islamo kalendorius (lentelinis, astronominė era)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"meniečių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"Osmanų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"hausų"_s)
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
			$of(u"bikolų"_s)
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
			$of(u"kroatų"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Haičio"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"vengrų"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"hererų"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"kadžunų prancūzų"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Tarptautinės abėcėlės fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"tarpinė"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("Jamo simboliai"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indoneziečių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"tibetiečių skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interkalba"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"igbų"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"sičuan ji"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Vidurio Prancūzijos"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"inupiakų"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"senoji prancūzų"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("arpitano"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"rytų fryzų"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"bandžarų"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"šiaurinių fryzų"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandų"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"italų"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inukitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"sileziečių žemaičių"_s)
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
			$of(u"senoji pietų Arabijos"_s)
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
			$of("sly"_s),
			$of(u"selajarų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of("Lepcha skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"komų"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"pietų samių"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"šavių"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madurezų"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"Liuleo samių"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"mafų"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"Inario samių"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"siksikų"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makasaro"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"kinų kalbos vu tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"Skolto samių"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"mandingų"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"kikujų"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masajų"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuaniama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kazachų"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalalisut"_s)
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
			$of(u"kanurių"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kašmyrų"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("kirt"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"lepča"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("avestano"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kurdų"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"kornų"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirgizų"_s)
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
			$of(u"liuksemburgiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"malajalių skaitmenys"_s)
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
			$of(u"limburgiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"ngalų"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"friulių"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"angliška matų sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("Tai Tham Hora skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"lietuvių"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"latvių"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malagasų"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"Maršalo Salų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("numatytasis unikodo rikiavimas"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maorių"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"makedonų"_s)
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
			$of(u"maratų"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malajiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"sauraštra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mokša"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"mabų"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"žemutinių sorbų"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"imperinė aramaikų"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"naurų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"bendroji paieška"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norvegų bukmolas"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"šiaurės ndebelų"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepaliečių"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ndongų"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"mandarų"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"olandų"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"naujoji norvegų"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norvegų"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"pietų ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"navajų"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"karakalpakų"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"nianjų"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"kačinų"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kebailų"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Polytonic"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"očitarų"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("ju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"kembų"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mende"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("ojibva"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"merų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"armėnų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"oromų"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"kavių"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of("centrinio Dusuno"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"odijų"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of("Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"osetinų"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"bišnuprijos"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabardinų"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"morisijų"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pendžabų"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"dualų"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"sererų"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"Resian tarmei priklausanti Lipovaz tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"kanembų"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of("bakhtiari"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"lenkų"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("Vidurio Vokietijos"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"Sauraštrų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"puštūnų"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugalų"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Vidurio Airijos"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("rikiavimas"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Brazilijos portugalų"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makua-maeto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("valiutos formatas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"N’Ko skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"brajų"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("meta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 valandų sistema (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 valandų sistema (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"brahujų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"mianmariečių skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"kečujų"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapotekų"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("lana"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"makondų"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"Saterlendo fryzų"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"etiopų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 valandų sistema (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 valandų sistema (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retoromanų"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("valiuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rumunų"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"orijų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"kinų dešimtainiai skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"rusų"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"akūsų"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"kinjaruandų"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"BLISS simbolių"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"Žaliojo Kyšulio kreolų"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"mikmakų"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Australijos anglų"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Duplojė stenografija"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskritas"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"Suvienodinta rašyba"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardiniečių"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sindų"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"šiaurės samių"_s)
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
			$of(u"serbų-kroatų"_s)
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
			$of(u"šumerų"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slovakų"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slovėnų"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Granta"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(metaValue_WS)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"šonų"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somaliečių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"arabų-indų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albanų"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"serbų"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"svatų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("apskaitos valiutos formatas"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"pietų Soto"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Natisone tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"švedų"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"suahilių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"tradicinės kinų k. finans. skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ibibijų"_s)
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
			$of("Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"buriatų"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Centrinė Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Vakarų Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tadžikų"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigrajų"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Kanados anglų"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkmėnų"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"tsvanų"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tonganų"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"džiola-foni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"japonų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"turkų"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"tsongų"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"Komorų"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"čakma"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"totorių"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"dyulų"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("tvi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"taitiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"San Giorgio / Bila tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Rytų Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Šiaurės Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"dazagų"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Vakarų Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"uigūrų"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"senasis italų"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("bendri"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukrainiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"zelandų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"koptų kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urdų"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Sunorminta Resian rašyba"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalmukų"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbekų"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("kasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996 -ųjų metų vokiečių rašyba"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"Žemutinės Saksonijos (Nyderlandai)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("syloti nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"vendų"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Varang Kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Kinijos Respublikos kalendorius"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietnamiečių"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"kotanezų"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"kojra čini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"valandų ciklas (12 ir 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraskievica tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapiuko"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"khovarų"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"klasikinė sirų"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"osmanų"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"kičių"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"Čimboraso aukštumų kečujų"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"valonų"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gagaūzų"_s)
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
			$of(u"kinų kalbos dziangsi tarmė"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of("kirmanjki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidian"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"Šumero Akado dantiraštis"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"volofų"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"standartinė Maroko tamazigtų"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"šiuolaikinė standartinė arabų"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"suvienodinti Kanados aborigenų silabiniai"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gajo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"manču"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"fraktur lotynų"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"sileziečių"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("Anatolijaus hieroglifai"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaja"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"manipurių"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"gėlų lotynų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"supaprastintos kinų k. skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"tradicinės kinų k. skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"kosų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"romėniški skaitmenys mažosiomis raidėmis"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lician"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"medumbų"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"zoroastrų dari"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"mūn"_s)
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
			$of(u"Ankstyvasis Prancūzijos modernizmas"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidiš"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mosi"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("deseretas"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"jorubų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Tradiciniai skaičiai"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Meksikos ispanų"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"vakarų sirų"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"osmanų turkų"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"estrangelo siriečių"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("chuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"karių"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"kalenjinų"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"kinų"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("Afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"senieji permės"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"teksto laužymo stilius"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zulų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"telefonų knygos rūšiavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Vienodas"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"Šarados"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"japonų finans. skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"čam"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("gyz"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"vakarų mari"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"rytų sirų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("Myanmar Shan skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasano"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"Senasis šiaurės arabų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("Ol Chiki skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"reformuota rūšiavimo tvarka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("Egipto liaudies"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Egipto žynių"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmiros"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("egipto hieroglifai"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"gruzinų kutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"supaprastintoji kinų"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"komių-permių"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"senasis vengrų"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"konkanių"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Įprasta vokiečių rašyba"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"kosreanų"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"venetų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("Limbu skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"tradicinė kinų"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"vepsų"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"kpelių"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"khmerų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ilokų"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"Valenciečiai"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("kipro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Suvienodinta turkų kalbos lotyniška abėcėlė"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"mundangų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmuki skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("kelios kalbos"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kado"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"matų sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"krykų"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagolitik"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"Įprasta rašyba"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"karibų"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"kaijūgų"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"tamilų skaitmenys"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karačiajų balkarijos"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingušų"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of("kinaray-a"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("krio"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"karelų"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of(u"tulų"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"skaičiai"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kuruk"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"šambalų"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"bafų"_s)
		})
	}));
	return data;
}

LocaleNames_lt::LocaleNames_lt() {
}

$Class* LocaleNames_lt::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lt, name, initialize, &_LocaleNames_lt_ClassInfo_, allocate$LocaleNames_lt);
	return class$;
}

$Class* LocaleNames_lt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun