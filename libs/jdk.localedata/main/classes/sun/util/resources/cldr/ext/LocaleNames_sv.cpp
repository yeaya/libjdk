#include <sun/util/resources/cldr/ext/LocaleNames_sv.h>

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

$MethodInfo _LocaleNames_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sv",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sv_MethodInfo_
};

$Object* allocate$LocaleNames_sv($Class* clazz) {
	return $of($alloc(LocaleNames_sv));
}

void LocaleNames_sv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ae, "avestiska"_s);
	$var($String, metaValue_ar, "arabiska"_s);
	$var($String, metaValue_bo, "tibetanska"_s);
	$var($String, metaValue_el, "grekiska"_s);
	$var($String, metaValue_gu, "gujarati"_s);
	$var($String, metaValue_he, "hebreiska"_s);
	$var($String, metaValue_hy, "armeniska"_s);
	$var($String, metaValue_ja, "japanska"_s);
	$var($String, metaValue_ka, "georgiska"_s);
	$var($String, metaValue_ko, "koreanska"_s);
	$var($String, metaValue_lo, "laotiska"_s);
	$var($String, metaValue_ml, "malayalam"_s);
	$var($String, metaValue_mn, "mongoliska"_s);
	$var($String, metaValue_my, "burmesiska"_s);
	$var($String, metaValue_or, "oriya"_s);
	$var($String, metaValue_si, "singalesiska"_s);
	$var($String, metaValue_su, "sundanesiska"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, u"thailändska"_s);
	$var($String, metaValue_tl, "tagalog"_s);
	$var($String, metaValue_ban, "balinesiska"_s);
	$var($String, metaValue_bax, "bamunska"_s);
	$var($String, metaValue_bug, "buginesiska"_s);
	$var($String, metaValue_ccp, "chakma"_s);
	$var($String, metaValue_cop, "koptiska"_s);
	$var($String, metaValue_gez, "etiopiska"_s);
	$var($String, metaValue_got, "gotiska"_s);
	$var($String, metaValue_men, "mende"_s);
	$var($String, metaValue_new, "newariska"_s);
	$var($String, metaValue_nqo, u"n-kå"_s);
	$var($String, metaValue_osa, "osage"_s);
	$var($String, metaValue_peo, "fornpersiska"_s);
	$var($String, metaValue_phn, "feniciska"_s);
	$var($String, metaValue_saz, "saurashtra"_s);
	$var($String, metaValue_sog, "sogdiska"_s);
	$var($String, metaValue_syr, "syriska"_s);
	$var($String, metaValue_uga, "ugaritiska"_s);
	$var($String, metaValue_vai, "vaj"_s);
	$var($String, metaValue_zbl, "blissymboler"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kölniska"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirandesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symboler"_s)
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
			$of("tai tham tham-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of("emiliska"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("mentawai"_s)
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
			$of("Njiva-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("mingrelianska"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("fornegyptiska"_s)
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
			$of("Medf"_s),
			$of("medefaidrin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of("khudawidiska siffror"_s)
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
			$of("Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotonganska"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of("barlavento-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of("sinhala lith-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Förenade Arabemiraten"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"flamländska"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua och Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of("mro-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("etiopisk kalender"_s)
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
			$of("Tidszon"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanien"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenien"_s)
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
			$of("Antarktis"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("tidig parthianska"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikanska Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Österrike"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australien"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("amerikansk engelska"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbajdzjan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"östarmeniska"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnien och Hercegovina"_s)
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
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumykiska"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgien"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"medelhögtyska"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of("gammalsogdiska"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarien"_s)
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
			$of(u"S:t Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenaj"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erjya"_s)
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
			$of(u"Karibiska Nederländerna"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasilien"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("lusoga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Bouvetön"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Vitryssland"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("synligt tal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("persisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CREISS"_s),
			$of("croissant-occitanska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("hebreiska taltecken"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kits"_s),
			$of("khitanska"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokosöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Centralafrikanska republiken"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Schweiz"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Cooköarna"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaithiska"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Clippertonön"_s)
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
			$of("Kap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Julön"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cypern"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("balinesiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Tjeckien"_s)
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
			$of("Pau Cin Hau-skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"västflamländska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"klassisk volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of(metaValue_sog)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Tyskland"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"fornhögtyska"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("acehnesiska"_s)
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
			$of("Goa-konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devanagariska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danmark"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("acholi"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("punktskrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("brami"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("gemena armeniska taltecken"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikanska republiken"_s)
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
			$of("Main-frankiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei-mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigré"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("takritiska"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeriet"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("till halvbreda"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("medelpersiska"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta och Melilla"_s)
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
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estland"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tivi"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypten"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Västsahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palau"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuukesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("chinook"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mariska"_s)
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
			$of("type.nu.mathbold"_s),
			$of("matematiska siffror i fetstil"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cherokesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanien"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopien"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Europeiska unionen"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("gregoriansk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"euroområdet"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("gujaratiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adygeiska"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("tunisisk arabiska"_s)
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
			$of(u"Falklandsöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesien"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Språkvariant"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Färöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamilska"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankrike"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"kpellé"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SIMPLE"_s),
			$of(u"lätt"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("pikardiska"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelauiska"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of("Dajnko-alfabetet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("indisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("romagnol"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("forngrekiska"_s)
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
			$of("votiska"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Storbritannien"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("nigeriansk pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgien"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Franska Guyana"_s)
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
			$of(u"Grönland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("medelengelska"_s)
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
			$of("Ekvatorialguinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grekland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Sydgeorgien och Sydsandwichöarna"_s)
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
			$of("Pennsylvaniatyska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of("matematiska siffror med fast teckenbredd"_s)
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
			$of("klingonska"_s)
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
			$of("soranisk kurdiska"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"inget språkligt innehåll"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("jurchenska"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("talysh"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VIVARAUP"_s),
			$of("vivaroalpinska (occitanska)"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of(u"mennonitisk lågtyska"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"österrikisk tyska"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkong SAR"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heardön och McDonaldöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatien"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("schweizertyska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("islamisk kalender, Umm al-Qura"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungern"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("riffianska"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanarieöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("min nan"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesien"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of("adlamiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("kayah li-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napolitanska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("Ndyuka-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of("sora sompeng-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zazaiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("tangutiska"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("nabateiska"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indien"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"sorteringsordning för flerspråkliga europeiska dokument"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Brittiska territoriet i Indiska oceanen"_s)
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
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italien"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("matematisk notation"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"thailändska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"võru"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of("wayuu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Posix"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("bengaliska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("Pfalz-tyska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of("kyrilliska taltecken"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengaliska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of("ekavisk dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordanien"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("farefare"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"1606 års stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KOCIEWIE"_s),
			$of("kociewiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("nyasatonganska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("kannadiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kaya li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("siddhamska"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"schweizisk högtyska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("fonetisk sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("ingriska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("buddistisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latinamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizistan"_s)
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
			$of("Komorerna"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("S:t Kitts och Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kanaresiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"ärvda"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("kanadensisk franska"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Nordkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Sydkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("pollardtecken"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("schweizisk franska"_s)
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
			$of(u"Caymanöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kyrilliska"_s)
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
			$of("S:t Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("fornkyrkoslavisk kyrilliska"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("gwichin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of(u"1918 års stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"lågtyska"_s)
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
			$of("akkadiska"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("Hmnp"_s),
			$of("nyiakeng puachue hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of("centralalaskisk jupiska"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("bokpahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litauen"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettland"_s)
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
			$of("Libyen"_s)
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
			$of("Alabama-muskogee"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of("laukika-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("mahajaniska"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("taana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marocko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavien"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"nüshu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint-Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
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
			$of(u"Marshallöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("vai-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Nordmakedonien"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of("matematiska siffror med dubbelstreck"_s)
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
			$of("new"_s),
			$of(metaValue_new)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongoliet"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao SAR"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of("gegiska"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Nordmarianerna"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauretanien"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("Chrs"_s),
			$of("khwarezmiska"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("kapisnon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"enligt FN:s geografiska namnkommitté"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("sydaltaiska"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldiverna"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("japansk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Moçambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("tidig pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ARANES"_s),
			$of("aranesiska (occitanska)"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Subsahariska Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("hebreisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("ordbokssorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nya Kaledonien"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("reviderad unifierad stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Norfolkön"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("psaltaren-pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahaw mong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Nederländerna"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norge"_s)
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
			$of("tsakodiska"_s)
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
			$of("Nya Zeeland"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("kursiv-meroitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of(u"stavning enligt 1945 års konvention mellan Portugal och Brasilien"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("romani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("krimtatariska"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("fornengelska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRMISTR"_s),
			$of("Mistral-occitanska"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of(u"1708 års stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("seychellisk kreol"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of("nyiakeng puachue hmong-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of("pahawh hmong-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("islamisk civil kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("kasjubiska"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("brittisk engelska"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("muslimsk tatariska"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Franska Polynesien"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nya Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippinerna"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NICARD"_s),
			$of("Nice-occitanska"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polen"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("S:t Pierre och Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Pitcairnöarna"_s)
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
			$of("Palestinska territorierna"_s)
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
			$of(u"små grekiska taltecken"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
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
			$of("skotsk engelska"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of("jamaikansk engelsk kreol"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("piemontesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niueanska"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"yttre öar i Oceanien"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("extremaduriska"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezghien"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of("ahom-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("uralisk fonetisk notation"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("takri-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvaluanska"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai viet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of("sotavento-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Maka"_s),
			$of("makasariska"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"världen"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("ao-naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Nordamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Sydamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of("lingua franca nova"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("pontiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceanien"_s)
		}),
		$$new($ObjectArray, {
			$of("Elym"_s),
			$of("elymaiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of("sursilvan-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rumänien"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbien"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("mru"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Ryssland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"ny tai lü-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("Metelko-alfabetet"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("manikeanska"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharoshti"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudiarabien"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("pohnpeiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"mandaéiska"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Salomonöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Västafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellerna"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Centralamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Sverige"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Östafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("arameiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Nordafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("S:t Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("strikt radbrytning"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Centralafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenien"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of("burmesiska tai laing-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"södra Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard och Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Nord- och Sydamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakien"_s)
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
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapudungun"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("traditionella tamilska taltecken"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of("araoniska"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Sydsudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé och Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("algerisk arabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("najdiarabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syrien"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("kiyao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("arawakiska"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of("egyptisk arabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("marockansk arabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("japetiska"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of(u"rotumänska"_s)
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
			$of(u"USA:s måttsystem"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Norra Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Turks- och Caicosöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tchad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Franska sydterritorierna"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"amerikanskt teckenspråk"_s)
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
			$of("Tadzjikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibien"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Tokelauöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Östtimor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"bamileké-jemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"söksorteringsordning för att söka på inledande Hangul-konsonant"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisien"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of("nulik-stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkiet"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad och Tobago"_s)
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
			$of("asturiska"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("rusyn"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("rovianska"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"okänt skriftsystem"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("sindhiska"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("liguriska"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"arumänska"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Östasien"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuviniska"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("Kongo-swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Sydasien"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Sydostasien"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("pinyin-sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Sydeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"USA:s yttre öar"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("livoniska"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Förenta Nationerna"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("USA"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaiiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"1959 års stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IVANCHOV"_s),
			$of(u"bulgariska i 1899 års stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("gb2312-sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("fornpreussiska"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("centralmarockansk tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("strecksorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"bamileké-ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikanstaten"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("fornprovensalska"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("S:t Vincent och Grenadinerna"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HSISTEMO"_s),
			$of("h-system"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Brittiska Jungfruöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Amerikanska Jungfruöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LEMOSIN"_s),
			$of("Limousin-occitanska"_s)
		}),
		$$new($ObjectArray, {
			$of("Soyo"_s),
			$of("soyombo"_s)
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
			$of("Marc"_s),
			$of("marchenska"_s)
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
			$of("fornnordiska"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasien"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"västarmeniska"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesien"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wallis- och Futunaöarna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("traditionell sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikronesiska öarna"_s)
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
			$of("finansiella siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of("Hepburn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"bakåtkompatibel sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("walsertyska"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("bassaiska vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of("meetei mayek-siffror"_s)
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
			$of(u"fejkade accenter (för test)"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"fejkad bidi (för test)"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesien"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of("standardstavning"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of("brahmiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"oskrivet språk"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("ol-chiki"_s)
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
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("normal sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("lombardiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Zanb"_s),
			$of("zanabazar kvadratisk skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of("balanka-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("resisk dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of("sutsilvan-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("teckningsskrift"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of("chamiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEWFOUND"_s),
			$of("Newfoundland-engelska"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Sydafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of("sundanesiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("fri radbrytning"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("georgiska taltecken"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("zhuyin-sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"okänd region"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runor"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("metersystem"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO 8601-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("nordsotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("telugiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("louisiana-kreol"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONKIRSH"_s),
			$of("Kirshenbaums fonetiska alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("naxi geba"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ASANTE"_s),
			$of("asante (twi)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AUVERN"_s),
			$of("auvergniska (occitanska)"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("kimashami"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of("Fiji-hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"förenklat kinesiskt finansiellt stavade tal"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"utökade indo-arabiska siffror"_s)
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
			$of("fullbreddssiffror"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hettitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("darginska"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("mayahieroglyfer"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("nordluri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of("emojisorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("klassisk newariska"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurtiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("khmeriska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONNAPA"_s),
			$of("nordamerikanskt fonetiskt alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("islamisk kalender, Saudi-Arabien"_s)
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
			$of("romerska taltecken"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("jakutiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of("sharada-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("lettgalliska"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("samaritanska"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("kaukasiska albanska"_s)
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
			$of("santali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("tifinaghiska"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("judisk persiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Numerisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Språkspecifika siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("Aluku-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.diak"_s),
			$of("dives akuru-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of("Biscaya-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of("tirhuta-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("till helbreda"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"luiseño"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRITAL"_s),
			$of("italiensk-inspirerad occitanska"_s)
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
			$of("filippinska"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"hmongspråk"_s)
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
			$of("baluchiska"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slavej"_s)
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
			$of("type.nu.wara"_s),
			$of("varang kshiti-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"meänkieli"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhya"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("bayerska"_s)
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
			$of("%%ABL1943"_s),
			$of(u"1943 års stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("judisk arabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("europeisk spanska"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("skotska"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sicilianska"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abchaziska"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("batak-toba"_s)
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
			$of("type.nu.cakm"_s),
			$of("chakma-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amhariska"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("Solbica-dialekt"_s)
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
			$of("katakana/hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assamesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("sassaresisk sardiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"linjär A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avariska"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"linjär B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("sydkurdiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azerbajdzjanska"_s)
		}),
		$$new($ObjectArray, {
			$of("Rohg"_s),
			$of("hanifiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("khojkiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CISAUP"_s),
			$of("cisalpinska (occitanska)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Osojane-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of("unifon-skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("basjkiriska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("radikal-streck-sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("vitryska"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgariska"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of("javanesiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengali"_s)
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
			$of("bretonska"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniska"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of("bhaiksukiska"_s)
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
			$of("sei"_s),
			$of("seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("laotiska siffror"_s)
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
			$of("katalanska"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("songhai"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("tjetjenska"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("reformerad stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korsikanska"_s)
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
			$of("tjeckiska"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("kyrkslaviska"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("tjuvasjiska"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("walesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("etiopiska taltecken"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("danska"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("europeisk portugisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("tyska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("normalt format"_s)
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
			$of("jut"_s),
			$of(u"jylländska"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("forniriska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("mongoliska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("latinamerikansk spanska"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("betawiska"_s)
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
			$of("kinesisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"litterär kineiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of("samogitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("grekiska taltecken"_s)
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
			$of("normal radbrytning"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldaviska"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("engelska"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of("bagada"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of("laziska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("big5-sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("spanska"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estniska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("han med bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskiska"_s)
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
			$of("samaritiska"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"högsorbiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of("Ulster-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"hanunó’o"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"förenklad"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"västerländska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("traditionell"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulani"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of("Tchad-arabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finska"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fijianska"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"fonspråket"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"västbaluchiska"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantonesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"färöiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"enligt USA:s geografiska namnkommitté"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("franska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AKUAPEM"_s),
			$of("akapuem (twi)"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"västfrisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("iriska"_s)
		}),
		$$new($ObjectArray, {
			$of("Wcho"_s),
			$of("wancho"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"skotsk gäliska"_s)
		}),
		$$new($ObjectArray, {
			$of("Gong"_s),
			$of("gunjalgondiska"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galiciska"_s)
		}),
		$$new($ObjectArray, {
			$of("Gonm"_s),
			$of("masaram-gondi"_s)
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
			$of(u"obestämt språk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("etiopisk amete-alem-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("islamisk kalender, astronomisk"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manx"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of("osmanya-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
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
			$of("hirimotu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("kroatiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("ungerska"_s)
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
			$of("cajun-franska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("internationell fonetisk notation - IPA"_s)
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
			$of("indonesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tibetanska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GASCON"_s),
			$of("Gascogne-occitanska"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("szezuan i"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("medelfranska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of("grischun-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of(u"stavning enligt 1990 års överenskommelse"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("fornfranska"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("frankoprovensalska"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"östfrisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("banjariska"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("nordfrisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"isländska"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italienska"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"lågsilesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CORNU"_s),
			$of("kornisk engelska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"högnorsk dialekt"_s)
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
			$of("fornsydarabiska"_s)
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
			$of("selayar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of("lepcha-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("bamekon"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("sydsamiska"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("javanesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("shawiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("bauddha-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("maduresiska"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("lulesamiska"_s)
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
			$of("enaresamiska"_s)
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
			$of("makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("skoltsamiska"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mande"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kikongo"_s)
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
			$of("massajiska"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakiska"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grönländska"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("kambodjanska"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kannada"_s)
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
			$of("kashmiriska"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("cirt"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("rong"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdiska"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("kome"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("korniska"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiziska"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of("multaniska"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of("hatran"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luxemburgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malayalamiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("luganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongo-rongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburgiska"_s)
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
			$of("friulianska"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"brittiskt måttsystem"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("tai tham hora-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litauiska"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(metaValue_sog)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("lettiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malagassiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshalliska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"grundläggande Unicode-sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedonska"_s)
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
			$of("malajiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksja"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"lågsorbiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("imperisk arameiska"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauruanska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"allmän sökning"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norskt bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("nordndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalesiska"_s)
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
			$of(u"nederländska"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("nynorska"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PROVENC"_s),
			$of("provensalska"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("sydndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of("modi-siffror"_s)
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
			$of("karakalpakiska"_s)
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
			$of("kabyliska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("polytonisk stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("occitanska"_s)
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
			$of("%%EMODENG"_s),
			$of("tidig modern engelska"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("odjibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("armeniska taltecken"_s)
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
			$of("dtp"_s),
			$of("centraldusun"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of("modiska"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("ossetiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"1997 års ALA-LC"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardinska"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("mauritansk kreol"_s)
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
			$of("Lipovaz-dialekt"_s)
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
			$of("bqi"_s),
			$of("bakhtiari"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polska"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"medelnederländska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of("saurashtra-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("koreansk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of("vallader-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("afghanska"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("medeliriska"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("brasiliansk portugisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"Bohorič-alfabetet"_s)
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
			$of("valutaformat"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"n’ko-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of("jauer-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of("surmiran-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-timmarsklocka (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-timmarsklocka (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("brahuiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("burmesiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapotek"_s)
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
			$of("vedisk dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(metaValue_gez)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of("saterfrisiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("jyutping"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-timmarsklocka (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-timmarsklocka (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"rätoromanska"_s)
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
			$of(u"rumänska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("saho-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("oriyiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("kinesiska decimaltal"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("ryska"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("bakossi"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinjarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kapverdiska"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"mi’kmaq"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("australisk engelska"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Duployéstenografiska"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("unifierad stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardinska"_s)
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
			$of("nordsamiska"_s)
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
			$of("serbokroatiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("kenjang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumeriska"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovakiska"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("slovenska"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("gammaltamilska"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoanska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BASICENG"_s),
			$of("Ogdens basic english"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somaliska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("indo-arabiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albanska"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("redovisningsformat"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("sydsotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("javanska"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("natisonsk dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("svenska"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of("wanchosiffror"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("traditionellt kinesiskt finansiellt stavade tal"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("ibanska"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asien"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"burjätiska"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Centralasien"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Västasien"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadzjikiska"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("%%SPANGLIS"_s),
			$of("spangelska"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("kanadensisk engelska"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmeniska"_s)
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
			$of("tonganska"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("boulou"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("japanskt stavade tal"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turkiska"_s)
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
			$of(u"shimaoré"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatariska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%XSISTEMO"_s),
			$of("x-system"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("Bila-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Östeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.rohg"_s),
			$of("hanifisiffror"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of("matematiska siffror i sans-serif fetstil"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Nordeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Västeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uiguriska"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("fornitaliska"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("gemensamma"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrainska"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"zeeländska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("koptisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"1994 års resisk stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmuckiska"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbekiska"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996 års reformerad tysk stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"lågsaxiska"_s)
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
			$of("kinesiska republikens kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnamesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("khotanesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Timbuktu-songhai"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("12- eller 24-timmarsklocka"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("Taraskievika-stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of("khowar"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("klassisk syriska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of("matematiska siffror i sans-serif"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanja"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"quiché"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of("masaramgondiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"Chimborazo-höglandskichwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of(metaValue_new)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"gã"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("vallonska"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauziska"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of("gunjalagondiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of("kirmanjki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lydiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("sumero-akkadisk kilskrift"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("marockansk standard-tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("modern standardarabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("kanadensiska stavelsetecken"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("X-SAMPA fonetisk notation"_s)
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
			$of("manchuriska"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("frakturlatin"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("silesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("hittitiska hieroglyfer"_s)
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
			$of("latinska"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("gaeliskt latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Nand"_s),
			$of("nandinagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"förenklat kinesiskt stavade tal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("traditionellt kinesiskt stavade tal"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"små romerska taltecken"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Dogr"_s),
			$of("dogriska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("Pamaka-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lykiska"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("bagangte"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of("zoroastrisk dari"_s)
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
			$of("mkako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"1694 års stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("jiddisch"_s)
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
			$of("type.nu.traditional"_s),
			$of("Traditionella siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("mexikansk spanska"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"västsyriska"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("ottomanska"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("estrangelosyriska"_s)
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
			$of("kariska"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("kinesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("afakiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("fornpermiska"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("radbrytningstyp"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("telefonkatalogssorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monotonisk stavning"_s)
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
			$of("%%LENGADOC"_s),
			$of("languedociska"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("japanskt finansiellt stavade tal"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(metaValue_gez)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"västmariska"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"östsyriska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("burmesiska shan-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("elbasiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("fornnordarabiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("ol chiki-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("reformerad sorteringsordning"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("demotiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("hieratiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Yezi"_s),
			$of("yazidiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of("itihasa-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("palmyreniska"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("egyptiska hieroglyfer"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("kutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"förenklad kinesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permjakiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("fornungerska"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("traditionell tysk stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosreanska"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("venetianska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH2"_s),
			$of("pahawh hmong andra steget reducerad stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH3"_s),
			$of("pahawh hmong tredje steget reducerad stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH4"_s),
			$of("pahawh hmong sista steget reducerad stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("limbu-siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("traditionell kinesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("veps"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRCLASS"_s),
			$of("klassisk occitanska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("khmeriska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("valensisk dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("cypriotiska"_s)
		}),
		$$new($ObjectArray, {
			$of("Diak"_s),
			$of("dives akuru"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"1926 års stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of("ijekavisk dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmukhiska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BORNHOLM"_s),
			$of("Bornholm"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"flera språk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of("puter-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("enhetssystem"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("muskogee"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagolitiska"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilbertiska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("vanlig stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karibiska"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamilska siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karachay-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingusjiska"_s)
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
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("karelska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of("Oxford-stavning"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("tulu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("siffror"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("kisambaa"_s)
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

LocaleNames_sv::LocaleNames_sv() {
}

$Class* LocaleNames_sv::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sv, name, initialize, &_LocaleNames_sv_ClassInfo_, allocate$LocaleNames_sv);
	return class$;
}

$Class* LocaleNames_sv::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun