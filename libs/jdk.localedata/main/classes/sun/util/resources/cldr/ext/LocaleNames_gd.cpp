#include <sun/util/resources/cldr/ext/LocaleNames_gd.h>

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

$MethodInfo _LocaleNames_gd_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_gd, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_gd, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_gd_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_gd",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_gd_MethodInfo_
};

$Object* allocate$LocaleNames_gd($Class* clazz) {
	return $of($alloc(LocaleNames_gd));
}

void LocaleNames_gd::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_gd::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_MM, u"Miànmar"_s);
	$var($String, metaValue_NR, "Nabhru"_s);
	$var($String, metaValue_TK, "Tokelau"_s);
	$var($String, metaValue_TO, "Tonga"_s);
	$var($String, metaValue_TV, "Tubhalu"_s);
	$var($String, metaValue_ae, "Avestanais"_s);
	$var($String, metaValue_ar, "Arabais"_s);
	$var($String, metaValue_bo, "Tibeitis"_s);
	$var($String, metaValue_el, "Greugais"_s);
	$var($String, metaValue_gu, "Gujarati"_s);
	$var($String, metaValue_he, "Eabhra"_s);
	$var($String, metaValue_hy, "Airmeinis"_s);
	$var($String, metaValue_ja, "Seapanais"_s);
	$var($String, metaValue_jv, u"Deàbhanais"_s);
	$var($String, metaValue_ka, "Cairtbheilis"_s);
	$var($String, metaValue_km, u"Cmèar"_s);
	$var($String, metaValue_kn, "Kannada"_s);
	$var($String, metaValue_ko, u"Coirèanais"_s);
	$var($String, metaValue_la, "Laideann"_s);
	$var($String, metaValue_lo, u"Làtho"_s);
	$var($String, metaValue_ml, "Malayalam"_s);
	$var($String, metaValue_mn, "Mongolais"_s);
	$var($String, metaValue_si, "Sinhala"_s);
	$var($String, metaValue_te, "Telugu"_s);
	$var($String, metaValue_tl, "Tagalog"_s);
	$var($String, metaValue_ccp, "Chakma"_s);
	$var($String, metaValue_chr, "Cherokee"_s);
	$var($String, metaValue_cop, "Coptais"_s);
	$var($String, metaValue_gez, u"Ge’ez"_s);
	$var($String, metaValue_got, "Gotais"_s);
	$var($String, metaValue_kpe, "Kpelle"_s);
	$var($String, metaValue_mak, "Makasar"_s);
	$var($String, metaValue_men, "Mende"_s);
	$var($String, metaValue_osa, "Osage"_s);
	$var($String, metaValue_peo, "Seann-Pheirsis"_s);
	$var($String, metaValue_saz, "Saurashtra"_s);
	$var($String, metaValue_ssy, "Saho"_s);
	$var($String, metaValue_syr, "Suraidheac"_s);
	$var($String, metaValue_vai, "Vai"_s);
	$var($String, metaValue_zbl, "Comharran Bliss"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("Gearmailtis Chologne"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogham-chraobh"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Miorandais"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Samhlaidhean"_s)
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
			$of("type.nu.lanatham"_s),
			$of(u"Àireamhan Tai Tham Tham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("Mentawai"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("Tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("Dual-chainnt Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"Èipheitis Àrsaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("Rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("Timne"_s)
		}),
		$$new($ObjectArray, {
			$of("Medf"_s),
			$of("Medefaidrin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"Àireamhan Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("Teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("Rapa Nui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"Terêna"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Eilean na Deasgabhalach"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"Cànan Rarotonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of("Dual-chainntean Barlavento de Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"Àireamhan Lith na Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Na h-Iomaratan Arabach Aonaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("Flannrais"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afghanastàn"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Aintìoga is Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"Àireamhan Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Mìosachan na h-Itioipe"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("Gilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguillia"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albàinia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Airmeinea"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("Tengwar"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Angòla"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("An Antartaig"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("An Argantain"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"Partais snaidh-sgrìobhte"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samotha na h-Aimeireaga"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("An Ostair"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Astràilia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Arùba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("Beurla na h-Aimeireaga"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Na h-Eileanan Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("Myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Asarbaideàn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("Airmeinis an Ear"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosna is Hearsagobhana"_s)
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
			$of("Bangladais"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"A’ Bheilg"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Meadhan-Àrd-Gearmailtis"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of("Seann-Sogdianais"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Buirciona Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"A’ Bhulgair"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bachrain"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Beinin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Bearmùda"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("Kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brùnaigh"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boilibhia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Na Tìrean Ìsle Caraibeach"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Braisil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Na h-Eileanan Bhathama"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Butàn"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Eilean Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsuana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"A’ Bhealaruis"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"A’ Bheilìs"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Am Mìosachan Pearsach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CREISS"_s),
			$of("Ogsatanais Chroissant"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Àireamhan na h-Eabhra"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kits"_s),
			$of("Litrichean beaga na Khitan"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Na h-Eileanan Chocos (Keeling)"_s)
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
			$of("Poblachd Meadhan Afraga"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"A’ Chongo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("An Eilbheis"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Eileanan Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("An t-Sile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("Kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Camarun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"An t-Sìn"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Coloimbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Eilean Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Costa Rìcea"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Cùba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("An Ceap Uaine"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Eilean na Nollaig"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Cìopras"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"Àireamhan Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("An t-Seic"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("Pau Cin Hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of("Flannrais Siarach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"Volapük chlasaigeach"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of("Sogdianais"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"A’ Ghearmailt"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"Seann-Àrd-Gearmailtis"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"Basa Acèh"_s)
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
			$of("gom"_s),
			$of("Konkani Goa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Àireamhan Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Diobùtaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("An Danmhairg"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Doiminicea"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Àireamhan beaga na h-Airmeinise"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"A’ Phoblachd Dhoiminiceach"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Meitei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"Zuñi"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Aildiria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Leth-Leud"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta agus Melilla"_s)
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
			$of("Eacuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("Papiamentu"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("An Eastoin"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"An Èiphit"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sathara an Iar"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("Palabhais"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"Cànan Chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("Chinuk Wawa"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("Chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("Choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"Àireamhan matamataig troma"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eartra"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"An Spàinnt"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("An Itiop"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"An t-Aonadh Eòrpach"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Am Mìosachan Griogarach"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Raon an Eòro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Àireamhan Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("Arabais Thuiniseach"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("An Fhionnlann"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fìdi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Na h-Eileanan Fàclannach"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Na Meanbh-eileanan"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Na h-Eileanan Fàro"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Taimil"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("An Fhraing"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("%%SIMPLE"_s),
			$of(u"Samhlaidhean sìmplichte"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("Picard"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of("Aibidil Dajnko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Mìosachan Nàiseanta nan Innseachan"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("Romagnol"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"Greugais Àrsaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("Tsakhur"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"An Rìoghachd Aonaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Beurla Nigèiriach"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Greanàda"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"A’ Chairtbheil"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Guidheàna na Frainge"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Geàrnsaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Gàna"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("Tai Le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Diobraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("Afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"A’ Ghraonlann"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Meadhan-Bheurla"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"A’ Ghaimbia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadalup"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Gini Mheadhan-Chriosach"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"A’ Ghreug"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Seòirsea a Deas is na h-Eileanan Sandwich a Deas"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatamala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of("Gearmailtis Phennsylvania"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(u"Àireamhan matamataig aon-leud"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gini-Bioso"_s)
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
			$of("Talu"_s),
			$of(u"Tai Lue Ùr"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Guidheàna"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"Cùrdais Mheadhanach"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"Susbaint nach eil ’na chànan"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("Jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("Talysh"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VIVARAUP"_s),
			$of("Ogsatanais Vivaro-Ailpeach"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("Plautdietsch"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("Gearmailtis na h-Ostaire"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Hong Kong SAR na Sìne"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Eilean Heard is MhicDhòmhnaill"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hondùras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"A’ Chròthais"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Gearmailtis Eilbheiseach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Am Mìosachan Ioslamach (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haidhti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("An Ungair"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("Tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Na h-Eileanan Canàrach"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("Min Nan"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Na h-Innd-innse"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of("Adlam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"Àireamhan Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Èirinn"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Eadailtis Napoli"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("Dual-chainnt Ndyuka"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"Àireamhan Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zazaki"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("Tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Iosrael"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("Nabataean"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Eilean Mhanainn"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Na h-Innseachan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Òrdugh seòrsachaidh Eòrpach"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Ranntair Breatannach Cuan nan Innseachan"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ioràc"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ioràn"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Innis Tìle"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("An Eadailt"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"Gnìomhairean matamataig"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Àireamhan Tàidh"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"Võro"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of("Wayuu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Coimpiutair"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Àireamhan na Beangailise"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"Àireamhan na Cirilise"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Deàrsaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Am Mìosachan Ioslamach"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Diameuga"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("Beangailis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of(u"Sèirbhis le fuaimneachadh iarach"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Iòrdan"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("Frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("An t-Seapan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("Meadhan-Fhraingis anmoch gu 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KOCIEWIE"_s),
			$of("Kociewie"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
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
			$of("type.nu.knda"_s),
			$of(u"Àireamhan Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("Siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Àrd-Ghearmailtis na h-Eilbheise"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Am Mìosachan Budach"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Ceinia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Aimeireaga Laidinneach"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Cìorgastan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambuidea"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Ciribeas"_s)
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
			$of(u"Naomh Crìstean is Nibheis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"Dìleab"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("Fraingis Chanada"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Coirèa a Tuath"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Coirèa"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Miao Phollard"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("Fraingis Eilbheiseach"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Cuibhèit"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Na h-Eileanan Caimean"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Casachstàn"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cirilis"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Làthos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Leabanon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Naomh Lùisea"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("Phenicis"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"Cirilis Seann-Slàbhais na h-Eaglaise"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of(u"Litreachadh na Ruisise às dèidh 1917"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Gearmailtis Ìochdarach"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Lichtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanca"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("Acadais"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("Hmnp"_s),
			$of("Nyiakeng Puachue Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Libèir"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of("Yupik Mheadhanach"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Leasoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("An Liotuain"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lugsamburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("An Laitbhe"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libia"_s)
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
			$of("akz"_s),
			$of("Alabama"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of("Laukika"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("Lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("Mahajani"_s)
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
			$of(u"A’ Mholdobha"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"Nüshu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Am Monadh Neagrach"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Naomh Màrtainn"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("Lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagasgar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Eileanan Mharshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleutais"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"Tàidh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Àireamhan Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"A’ Mhasadon a Tuath"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"Àireamhan matamataig le loidhne dhùbailte"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Màili"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(metaValue_MM)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Dùthaich nam Mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Macàthu SAR na Sìne"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"Albàinis Ghegeach"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Na h-Eileanan Mairianach a Tuath"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Mairtinic"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Moratàinea"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montsarat"_s)
		}),
		$$new($ObjectArray, {
			$of("Chrs"_s),
			$of("Khwarazm"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("Capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"Tar-litreachadh GEGN nan Dùthchannan Aonaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Na h-Eileanan Mhoiriseas"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("Altais Dheasach"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Na h-Eileanan Mhaladaibh"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malabhaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meagsago"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Am Mìosachan Seapanach"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaidhsea"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mòsaimbic"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"Pahlavi nan snaidh-sgrìobhaidhean"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("An Namaib"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ARANES"_s),
			$of("Aranais"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Afraga Deas air an t-Sathara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Am Mìosachan Eabhrach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Òrdugh seòrsachaidh an fhaclair"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Cailleann Nuadh"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Ròmanachadh Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("Turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"Litreachadh aonaichte ’s lèirmheasaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Nìgeir"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Eilean Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nigèiria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("Taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Pahlavi nan saltair"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Niocaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Na Tìrean Ìsle"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Nirribhidh"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Neapàl"_s)
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
			$of("Phnx"_s),
			$of("Pheniceach"_s)
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
			$of("Sealainn Nuadh"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("Meroiticeach ceangailte"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of(u"Aonta litreachaidh eadar a’ Phortagail is Braisil 1945"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romanais"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroiticeach"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Turcais Chriomach"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Seann-Bheurla"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRMISTR"_s),
			$of(u"Nòs-sgrìobhaidh Mhistral na h-Ogsatanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Omàn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of("Litreachadh Pheadair 1708"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("Seiseallais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of(u"Àireamhan Nyiakeng Puachue"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"Àireamhan Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Am Mìosachan Ioslamach (clàrach, linn sìobhalta)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Caisiubais"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Beurla Bhreatainn"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Pearù"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("Tati"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Poilinèis na Frainge"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Gini Nuadh Phaputhach"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Na h-Eileanan Filipineach"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pagastàn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NICARD"_s),
			$of("Ogsatanais Nice"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"A’ Phòlainn"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre agus Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Eileanan Pheit a’ Chàirn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Porto Rìceo"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Ùghdarras nam Palastaineach"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"A’ Phortagail"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palabh"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Àireamhan beaga na Greugaise"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguaidh"_s)
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
			$of("Catar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("Beurla Stannardach na h-Alba"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"Beurla Crìtheolach Diameuga"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("Piedmontese"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"Cànan Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Roinn Iomallach a’ Chuain Sèimh"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"Cànan na h-Extremadura"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Leasgais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"Àireamhan Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"Comharran fuaim-eòlais an UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"Àireamhan Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai Viet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of("Dual-chainntean Sotavento de Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Maka"_s),
			$of(metaValue_mak)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("An Saoghal"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afraga"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("Ao Naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Aimeireaga a Tuath"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Aimeireaga a Deas"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of("Lingua Franca Nova"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Roinn a’ Chuain Sèimh"_s)
		}),
		$$new($ObjectArray, {
			$of("Elym"_s),
			$of("Elymaidheach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of("Sursilvan"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Romàinia"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"An t-Sèirb"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("An Ruis"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rubhanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"Àireamhan Tai Lue Ùr"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("Aibidil Metelko"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("Manichaean"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("Ugariticeach"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Aràibia nan Sabhd"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"Cànan Pohnpei"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("Mandaean"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Eileanan Sholaimh"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Afraga an Iar"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Na h-Eileanan Sheiseall"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sudàn"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Meadhan Aimeireaga"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("An t-Suain"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Afraga an Ear"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Aramais"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Afraga a Tuath"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singeapòr"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Eilean Naomh Eilidh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Brisidhean-loidhe teanna"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Meadhan Afraga"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"An t-Slòbhain"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"Àireamhan Tai Laing Miànmar"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Ceann a Deas Afraga"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard is Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"An Dà Aimeireaga"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"An t-Slòbhac"_s)
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
			$of(u"Siarra Leòmhann"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Seanagal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Somàilia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("Mapudungun"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Àireamhan na Taimilise Tradaiseanta"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suranam"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of("Araona"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Sudàn a Deas"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé agus Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("Arabais Aildireach"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("An Salbhador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siridhea"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("Yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("eSwatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"Arabais Èipheiteach"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("Arabais Mhorocach"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"Cànan Yap"_s)
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
			$of(u"Tomhas nan Stàitean Aonaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Ceann a Tuath Aimeireaga"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Na h-Eileanan Turcach is Caiceo"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"An t-Seàd"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Ranntairean a Deas na Frainge"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of("Cainnt-shanais na h-Aimeireaga"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Dùthaich nan Tàidh"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Taidigeastàn"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Am Muir Caraibeach"_s)
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
			$of(u"Lorg leis a’ chiad chonnrag Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turcmanastàn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tuinisea"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"Nua-Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("An Tuirc"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trianaid agus Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taidh-Bhàn"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"Astùrais"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("Rusyn"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("Roviana"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("An Tansan"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Litreadh neo-aithnichte"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"An Ucràin"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"Liogùrais"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromanais"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Àisia an Ear"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"Cànan Tuva"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("Kiswahili na Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Àisia a Deas"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Àisia an Ear-dheas"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("Hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Òrdugh seòrsachaidh Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"An Roinn-Eòrpa a Deas"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Meanbh-Eileanan Iomallach nan SA"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Na Dùthchannan Aonaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Na Stàitean Aonaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Cànan Hawai’i"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Bealaruisis Acadamaigeach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IVANCHOV"_s),
			$of("Bulgarian in 1899 orthography = Bulgairis le litreachadh na bliadhna 1899"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Òrdugh seòrsachaidh na Sìnise Simplichte - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Pruisis"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Usbagastàn"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Tamazight an Atlais Mheadhanaich"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Òrdugh nan stràcan"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Cathair na Bhatacain"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"Seann-Phrovençal"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Naomh Bhionsant agus Eileanan Greanadach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HSISTEMO"_s),
			$of(u"Roghainn-èiginn stannardach litreachadh na h-Esperanto le h"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"A’ Bheiniseala"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Eileanan Breatannach na Maighdinn"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Eileanan na Maighdinn aig na SA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LEMOSIN"_s),
			$of("Ogsatanais Lemosin"_s)
		}),
		$$new($ObjectArray, {
			$of("Soyo"_s),
			$of("Soyombo"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Bhiet-Nam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("Marc"_s),
			$of("Marchen"_s)
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
			$of("Seann-Lochlannais"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Astràilia is Sealainn Nuadh"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("Airmeinis an Iar"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Na h-Eileanan Dubha"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Uallas agus Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Òrdugh seòrsachaidh tradaiseanta"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Roinn nam Meanbh-Eileanan"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("Ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"Lakhóta"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of("Novial"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("Kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"Ròmanachadh Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"Òrdugh seòrsachaidh roimhe a chum co-chòrdalachd"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Gearmailtis Wallis"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samotha"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"Àireamhan Meetei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Wolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("Washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"Sràcan fuadain"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"Dà-chomhaireach fuadain"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Poilinèis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of("Litreachadh stannardach"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"A’ Chosobho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"Àireamhan Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Gun sgrìobhadh"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("Warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("An Eaman"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Òrdugh seòrsachaidh stannardach"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("Lombardais"_s)
		}),
		$$new($ObjectArray, {
			$of("Zanb"_s),
			$of(u"Zanabazar ceàrnagach"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of("Dual-chainnt Balanka de Anii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Dual-chainnt Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of("Sutsilvan"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"Sgrìobhadh cainnte-sanais"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"Àireamhan Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEWFOUND"_s),
			$of(u"Beurla Talamh an Èisg"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afraga a Deas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"Àireamhan Sunda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Brisidhean-loidhe fuasgailte"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Àireamhan na Cairtbheilise"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"Òrdugh seòrsachaidh Zhuyin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Sàimbia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"Ròmanachadh Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"An t-Sìombab"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Roinn-dùthcha neo-aithnichte"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"Rùn-sgrìobhadh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Tomhas meatrach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"Mìosachan ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Sesotho sa Leboa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Àireamhan Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"Crìtheol Louisiana"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONKIRSH"_s),
			$of(u"Còdachadh Kirshenbaum na h-Aibidil Fuaim-eòlaiche"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Naxi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ASANTE"_s),
			$of("Asante"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AUVERN"_s),
			$of("Auvernhat"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"Hindis Fhìditheach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Àireamhan ionmhasail na Sìnise Shimplichte"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Àireamhan Arabach-Innseanach leudaichte"_s)
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
			$of(u"Àireamhan làn-leud"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"Cànan Het"_s)
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
			$of("Maya"_s),
			$of(u"Dealbh-sgrìobhadh Mayach"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Luri Thuathach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"Òrdugh seòrsachaidh Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Newari Chlasaigeach"_s)
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
			$of("%%FONNAPA"_s),
			$of(u"Aibidil Fhuaim-eòlach Aimeireaga a Tuath"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"Am Mìosachan Ioslamach (Aràibia nan Sabhd, sealladh)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Àireamhan Ròmanach"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"Àireamhan Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Aramais Shamaritanach"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"Albàinis Chabhcasach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Scouse"_s)
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
			$of("Tfng"_s),
			$of("Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"Peirsis Iùdhach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Àireamhach"_s)
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
			$of("%%ALUKU"_s),
			$of("Dual-chainnt Aluku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.diak"_s),
			$of(u"Àireamhan Dives Akuru"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of("Dual-chainnt Bizkaia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"Àireamhan Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Làn-Leud"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"Luiseño"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRITAL"_s),
			$of(u"Nòs-sgrìobhaidh Eadailteach na h-Ogsatanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("Nyamwezi"_s)
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
			$of("Filipinis"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"Baluchì"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slavey"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Cànan Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"Àireamhan Warang Citi"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"Meänkieli"_s)
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
			$of("bax"_s),
			$of("Bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ABL1943"_s),
			$of(u"Gnàthas-litreachaidh 1943"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"Arabais Iùdhach"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Spàinntis Eòrpach"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Albais"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sisilis"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abchasais"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("Nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("Batak Toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afraganais"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"Àireamhan Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("Ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amtharais"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonais"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("Dual-chainnt Stolvizza/Solbica"_s)
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
			$of("Katakana no Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Asamais"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("Sassarese"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avarais"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"Cùrdais Dheasach"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Asarbaideànais"_s)
		}),
		$$new($ObjectArray, {
			$of("Rohg"_s),
			$of("Hanifi Rohingya"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CISAUP"_s),
			$of("Ogsatanais cios-Ailpeach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Dual-chainnt Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of(u"Aibidil fuaim-eòlais Unifon"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Òrdugh an fhreumha ’s nan stràcan"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Bealaruisis"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgarais"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"Àireamhan na Deàbhanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bangla"_s)
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
			$of("Breatnais"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnais"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of("Bhaiksuki"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("Seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_MM)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("Seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Àireamhan Làtho"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"N’ko"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Catalanais"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Deideanais"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Litreachadh lèirmheasaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Corsais"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("Oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Seicis"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"Slàbhais na h-Eaglaise"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("Nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Cuimris"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Àireamhan Itiopach"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Danmhairgis"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Portagailis Eòrpach"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Gearmailtis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Fòrmat stannardach an airgeadra"_s)
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
			$of("Bugi"_s),
			$of("Lontara"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Seann-Ghaeilge"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Àireamhan na Mongolaise"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Spàinntis na h-Aimeireaga Laidinneach"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("Betawi"_s)
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
			$of(u"Am Mìosachan Sìneach"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"Sìnis an Litreachais"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Lisu"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Àireamhan na Greugaise"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("Bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Brisidhean-loidhe àbhaisteach"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldobhais"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Beurla"_s)
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
			$of("lzz"_s),
			$of("Laz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Òrdugh seòrsachaidh na Sìnise Tradaiseanta - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Spàinntis"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Eastoinis"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han le Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Basgais"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("Samaritanais"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"Sòrbais Uachdarach"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Han"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of("Albais Uladh"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Peirsis"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Simplichte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Àireamhan Siarach"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Tradaiseanta"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"Arabais Seàdach"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("Xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Fionnlannais"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"Fìdis"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Balochi Shiarach"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Cantonais"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Fàrothais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"Tar-litreachadh BGN nan Stàitean Aonaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Fraingis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AKUAPEM"_s),
			$of("Akuapem"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"Frìoslannais Shiarach"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Gaeilge"_s)
		}),
		$$new($ObjectArray, {
			$of("Wcho"_s),
			$of("Wancho"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Gàidhlig"_s)
		}),
		$$new($ObjectArray, {
			$of("Gong"_s),
			$of("Gunjala Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Gailìsis"_s)
		}),
		$$new($ObjectArray, {
			$of("Gonm"_s),
			$of("Masaram Gondi"_s)
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
			$of(u"Cànan neo-aithnichte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Mìosachan Itiopach Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"Am Mìosachan Ioslamach (clàrach, linn reul-eòlach)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Gaelg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"Àireamhan Osmanya"_s)
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
			$of("Hindis"_s)
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
			$of("Edo"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("Hiri Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Cròthaisis"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Crìtheol Haidhti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Ungairis"_s)
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
			$of("Fraingis nan Cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Comharran fuaim-eòlais an IPA"_s)
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
			$of("Innd-Innsis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Àireamhan na Tibeitise"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GASCON"_s),
			$of("Ogsatanais Ghascogne"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Yi Sichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("Meadhan-Fhraingis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of("Rumantsch Grischun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of("Aonta litreachadh na Portagailise 1990"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("Seann-Fhraingis"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("Arpitan"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"Frìoslannais Earach"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("Banjar"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"Frìoslannais Thuathach"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Innis Tìlis"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Eadailtis"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CORNU"_s),
			$of(u"Beurla na Còirne"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"Høgnorsk"_s)
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
			$of("Seann-Arabais Dheasach"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("Dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of("Selayar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"Àireamhan Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("Kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"Sàmais Dheasach"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"Sgrìobhadh an t-Seathaich"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("Bauddha"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Cànan Madhura"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"Sàmais Lule"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"Sàmais Inari"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(metaValue_mak)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("Wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"Sàmais Skolt"_s)
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
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Maasai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Casachais"_s)
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
			$of("Caismiris"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("Cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Cùrdais"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"Còrnais"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Cìorgasais"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of("Multani"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of("Hatran"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Lugsamburgais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Àireamhan Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"Cànan Limburg"_s)
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
			$of(u"Friùilis"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Tomhas impireil"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"Àireamhan Tai Tham Hora"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Liotuainis"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Laitbheis"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasais"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marshallais"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Òrdugh seòrsachaidh Unicode bunaiteach"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"Māori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Masadonais"_s)
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
			$of("Malaidhis"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltais"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Burmais"_s)
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
			$of("mde"_s),
			$of("Maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"Sòrbais Ìochdarach"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("Aramais impireil"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Lorg coitcheann"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Bokmål na Nirribhidh"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Ndebele Thuathach"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Neapàlais"_s)
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
			$of("Duitsis"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Nynorsk na Nirribhidh"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Nirribhis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PROVENC"_s),
			$of("Ogsatanais Phrovence"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("Ndebele Dheasach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"Àireamhan Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of(metaValue_osa)
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
			$of("Kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Greugais phoiliotonach"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Ogsatanais"_s)
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
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"Nua-Bheurla thràth"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Àireamhan na h-Airmeinise"_s)
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
			$of("dtp"_s),
			$of("Dusun Mheadhanach"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of("Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"Ròmanachadh ALA-LC 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("Bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Cabardais"_s)
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
			$of("Panjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("Serer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("Dual-chainnt Lipovaz Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("Kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of("Bakhtiari"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Pòlainnis"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("Meadhan-Dhuitsis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"Àireamhan Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Mìosachan Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of("Vallader"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portagailis"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Meadhan-Ghaeilge"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Òrdugh an t-seòrsachaidh"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Portagailis Bhraisileach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"Aibidil Bohorič"_s)
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
			$of(u"Fòrmat an airgeadra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"Àireamhan N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Mìosachan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of("Jauer"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of("Surmiran"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"Cleoc 24 uair a thìde (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"Cleoc 24 uair a thìde (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("Brahui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Àireamhan Miànmar"_s)
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
			$of("Lana"_s),
			$of("Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("Makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of("Vaidika"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(metaValue_gez)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("Jyutping"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"Cleoc 12 uair a thìde (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"Cleoc 12 uair a thìde (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Rumains"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Airgeadra"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Romàinis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Àireamhan Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Àireamhan deicheach na Sìnise"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Ruisis"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("Akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
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
			$of(u"Mi’kmaq"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Beurla Astràilia"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Gearr-sgrìobhadh Duployé"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("Litreachadh aonaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"Sàrdais"_s)
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
			$of(u"Sàmais Thuathach"_s)
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
			$of(u"Sèirb-Chròthaisis"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("Kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"Cànan Sumer"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Slòbhacais"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Slòbhainis"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samothais"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BASICENG"_s),
			$of("Beurla bhunasach"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Somàilis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Àireamhan Arabach-Innseanach"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Albàinis"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Sèirbis"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Fòrmat airgeadra na cunntasachd"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Sesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Cànan Sunda"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Dual-chainnt Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Suainis"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Kiswahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of(u"Àireamhan Wancho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Àireamhan ionmhasail na Sìnise Thradaiseanta"_s)
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
			$of("Taimilis"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Àisia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Meadhan Àisia"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Àisia an Iar"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Taidigis"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Cànan nan Tàidh"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SPANGLIS"_s),
			$of("Spanglish"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"Cànan nam Bugis"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("Beurla Chanada"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turcmanais"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("Bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Àireamhan na Seapanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Turcais"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("Comorais"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatarais"_s)
		}),
		$$new($ObjectArray, {
			$of("%%XSISTEMO"_s),
			$of(u"Roghainn-èiginn stannardach litreachadh na h-Esperanto le x"_s)
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
			$of(u"Cànan Tahiti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("Dual-chainnt San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"An Roinn-Eòrpa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"An Roinn-Eòrpa an Ear"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.rohg"_s),
			$of(u"Àireamhan Hanifi Rohingya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"Àireamhan matamataig sans-serif troma"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"An Roinn-Eòrpa a Tuath"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"An Roinn-Eòrpa an Iar"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Ùigiurais"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Seann-Eadailtis"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("Kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Coitcheann"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Ucràinis"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"Cànan Zeeland"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Am Mìosachan Coptach"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Ùrdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("Litreachadh stannardach dual-chainnt Resia"_s)
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
			$of("Usbagais"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("Litreachadh na Gearmailtise 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"Sagsannais Ìochdarach"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Varang Kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Mìosachan Poblachd na Sìne"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Bhiet-Namais"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"Cànan Khotan"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Cearcall an ama (12 no 24 uair)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Litreachadh Taraškievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of("Khowar"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("Suraidheac Chlasaigeach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"Àireamhan matamataig sans-serif"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"K’iche’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(u"Àireamhan Masaram Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"Quichua Àrd-tìr Chimborazo"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of("Newa"_s)
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
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of(u"Àireamhan Gunjala Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("Gan"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of("Kirmanjki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydian"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"Gèinn-sgrìobhadh Sumer is Akkad"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Tamazight Stannardach Moroco"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("Nuadh-Arabais Stannardach"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"Sgrìobhadh Lideach Aonaichte nan Tùsanach Canadach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of(u"Tar-sgrìobhadh X-SAMPA"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("Gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("Manchu"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Laideann fraktur"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"Dealbh-sgrìobhadh Anatolach"_s)
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
			$of("Latg"_s),
			$of(u"Laideann Ghàidhealach"_s)
		}),
		$$new($ObjectArray, {
			$of("Nand"_s),
			$of("Nandinagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Àireamhan na Sìnise Shimplichte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Àireamhan na Sìnise Thradaiseanta"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Àireamhan beaga Ròmanach"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Dogr"_s),
			$of("Dogra"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("Dual-chainnt Pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("Lycian"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("Medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of("Dari Zoroastrach"_s)
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
			$of("%%1694ACAD"_s),
			$of(u"Nua-Fhraingis thràth"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Iùdhais"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Spàinntis Mheagsagach"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("Suraidheac Siarach"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("Turcais Otomanach"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Carian"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Sìnis"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("Afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Seann-Phermic"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Stoidhle nam brisidhean-loidhe"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Òrdugh seòrsachaidh nan leabhraichean-fòn"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Greugais mhonotonach"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LENGADOC"_s),
			$of("Ogsatanais Lengadoc"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Àireamhan ionmhasail na Seapanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(metaValue_gez)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("Mari Shiarach"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("Suraidheac Earach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"Àireamhan Shan Miànmar"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Seann-Arabach Thuathach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"Àireamhan Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Òrdugh seòrsachaidh ath-leasaichte"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Yezi"_s),
			$of("Yezidis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of("Itihasa"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmyrene"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Sealbh-sgrìobhadh Èipheiteach"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Sìnis Shimplichte"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("Komi-Permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Seann-Ungarais"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("Litreachadh tradaiseanta na Gearmailtise"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH2"_s),
			$of(u"Pahawh Hmong na 2na ìre"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH3"_s),
			$of(u"Pahawh Hmong na 3s ìre"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH4"_s),
			$of(u"Pahawh Hmong na 4mh ìre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"Àireamhan Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Sìnis Thradaiseanta"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("Sunda"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("Veps"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("%%GRCLASS"_s),
			$of(u"Nòs-sgrìobhaidh clasaigeach na h-Ogsatanaise"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Àireamhan Cmèar"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"Valencià"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"Cìoprasais"_s)
		}),
		$$new($ObjectArray, {
			$of("Diak"_s),
			$of("Dives Akuru"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("Abidil Laideann aonaichte na Turcaise"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of(u"Sèirbis le fuaimneachadh Ijekavia"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Àireamhan Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BORNHOLM"_s),
			$of("Bornholmsk"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"Iomadh cànan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of("Puter"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Siostam tomhais"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagoliticeach"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Ciribeasais"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("Litreachadh coitcheann"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Carib"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("Cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Àireamhan na Taimilise"_s)
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
			$of("krj"_s),
			$of("Kinaray-a"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("Krio"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Cairealais"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of("Litreachadh faclair Oxford na Beurla"_s)
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
			$of(u"Àireamhan"_s)
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

LocaleNames_gd::LocaleNames_gd() {
}

$Class* LocaleNames_gd::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_gd, name, initialize, &_LocaleNames_gd_ClassInfo_, allocate$LocaleNames_gd);
	return class$;
}

$Class* LocaleNames_gd::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun