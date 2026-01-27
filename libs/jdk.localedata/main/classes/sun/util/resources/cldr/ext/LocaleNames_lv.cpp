#include <sun/util/resources/cldr/ext/LocaleNames_lv.h>

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

$MethodInfo _LocaleNames_lv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_lv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_lv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_lv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_lv",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_lv_MethodInfo_
};

$Object* allocate$LocaleNames_lv($Class* clazz) {
	return $of($alloc(LocaleNames_lv));
}

void LocaleNames_lv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_lv::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"arābu"_s);
	$var($String, metaValue_bn, u"bengāļu"_s);
	$var($String, metaValue_bo, u"tibetiešu"_s);
	$var($String, metaValue_el, u"grieķu"_s);
	$var($String, metaValue_gu, u"gudžaratu"_s);
	$var($String, metaValue_he, "ivrits"_s);
	$var($String, metaValue_hy, u"armēņu"_s);
	$var($String, metaValue_ja, u"japāņu"_s);
	$var($String, metaValue_jv, u"javiešu"_s);
	$var($String, metaValue_ka, u"gruzīnu"_s);
	$var($String, metaValue_km, "khmeru"_s);
	$var($String, metaValue_kn, "kannadu"_s);
	$var($String, metaValue_ko, u"korejiešu"_s);
	$var($String, metaValue_la, u"latīņu"_s);
	$var($String, metaValue_lo, u"laosiešu"_s);
	$var($String, metaValue_ml, "malajalu"_s);
	$var($String, metaValue_mn, u"mongoļu"_s);
	$var($String, metaValue_my, u"birmiešu"_s);
	$var($String, metaValue_or, "oriju"_s);
	$var($String, metaValue_pa, u"pandžabu"_s);
	$var($String, metaValue_si, u"singāļu"_s);
	$var($String, metaValue_su, "zundu"_s);
	$var($String, metaValue_ta, "tamilu"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, "taju"_s);
	$var($String, metaValue_tl, "tagalu"_s);
	$var($String, metaValue_arc, u"aramiešu"_s);
	$var($String, metaValue_ban, u"baliešu"_s);
	$var($String, metaValue_cop, "koptu"_s);
	$var($String, metaValue_got, "gotu"_s);
	$var($String, metaValue_phn, u"feniķiešu"_s);
	$var($String, metaValue_ssy, "saho"_s);
	$var($String, metaValue_syr, u"sīriešu"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"Ķelnes vācu"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogamiskais raksts"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("simboli"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsamu"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marvaru"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"emocijzīmes"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"čakmu"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"ēģiptiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"radžastāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temnu"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapanuju"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Debesbraukšanas sala"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotongiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetumu"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Apvienotie Arābu Emirāti"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"flāmu"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganistāna"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigva un Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"etiopiešu kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angilja"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("laika josla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albānija"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armēnija"_s)
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
			$of(u"Argentīna"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("ASV Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austrija"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austrālija"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Olandes salas"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("mjenu"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaidžāna"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"austrumarmēņu"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnija un Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbadosa"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"sebuāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangladeša"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumiku"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Beļģija"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"vidusaugšvācu"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkinafaso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulgārija"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahreina"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundija"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benina"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Senbartelmī"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudu salas"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenaju"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erzju"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Bruneja"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bolīvija"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Nīderlandes Karību salas"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brazīlija"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamu salas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("sogu"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Butāna"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Buvē sala"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Botsvāna"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Baltkrievija"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Beliza"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"persiešu kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Ivrita cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Kanāda"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokosu (Kīlinga) salas"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazanderāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongo (Kinšasa)"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Centrālāfrikas Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo (Brazavila)"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Šveice"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kotdivuāra"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Kuka salas"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Čīle"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamerūna"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Ķīna"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbija"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Klipertona sala"_s)
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
			$of("Kaboverde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kirasao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Ziemsvētku sala"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kipra"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Čehija"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ekadžuku"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Vācija"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"senaugšvācu"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ačinu"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("kiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Djego Garsijas atols"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Devanāgarī cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Džibutija"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Dānija"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"ačolu"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondu valodas"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braila raksts"_s)
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
			$of(u"Mazie armēņu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominikāna"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalu"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zunju"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigru"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alžīrija"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinanu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Pusplatuma"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pehlevi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Seūta un Melilja"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"čibču"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanganu"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvadora"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papjamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangmu"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Igaunija"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tivu"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Ēģipte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Rietumsahāra"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"džagatajs"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palaviešu"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"čūku"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"činuku žargons"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"mariešu"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"čipevaianu"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"čoktavu"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"čiroku"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Spānija"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopija"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Eiropas Savienība"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"elamiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gregora kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eirozona"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"šejenu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Gudžaratu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigu"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Somija"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidži"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Folklenda salas"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikronēzija"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"lokalizācijas variants"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Fēru salas"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francija"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"tokelaviešu"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Indijas nacionālais kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"sengrieķu"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabona"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("votu"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Apvienotā Karaliste"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Nigērijas pidžinvaloda"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Grenāda"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gruzija"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Francijas Gviāna"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Gērnsija"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Gibraltārs"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grenlande"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"vidusangļu"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambija"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gvadelupa"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Ekvatoriālā Gvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Grieķija"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Dienviddžordžija un Dienvidsendviču salas"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guama"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gvineja-Bisava"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlinkitu"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klingoņu"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Gajāna"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"centrālkurdu"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("bez lingvistiska satura"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Ķīnas īpašās pārvaldes apgabals Honkonga"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Hērda sala un Makdonalda salas"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hondurasa"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Horvātija"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghemu"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Šveices vācu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"islāma kalendārs (Umm al-kura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ungārija"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tuaregu"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanāriju salas"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indonēzija"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("senpersu"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Īrija"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"neapoliešu"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zazaki"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Izraēla"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Menas sala"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indija"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Eiropas rakstību kārtošanas secīa"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Indijas okeāna Britu teritorija"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Irāka"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Irāna"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islande"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Itālija"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"matemātiskais pieraksts"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Tajiešu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("datoru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Bengāļu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Džērsija"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"islāma kalendārs"_s)
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
			$of(u"Jordānija"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Japāna"_s)
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
			$of("Njasas tongu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Kannadu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"augšvācu (Šveice)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fonētiskā kārtošanas secība"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"budistu kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenija"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Latīņamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirgizstāna"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambodža"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoru salas"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sentkitsa un Nevisa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"mantotā"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Ziemeļkoreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Dienvidkoreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuveita"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tokpisins"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kaimanu salas"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazahstāna"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kirilica"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laosa"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Libāna"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Sentlūsija"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"senslāvu"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"kučinu"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"lejasvācu"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lihtenšteina"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Šrilanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akadiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Libērija"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lietuva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemburga"_s)
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
			$of("LY"_s),
			$of(u"Lībija"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"vundžo"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("landu"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"tāna"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroka"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Melnkalne"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Senmartēna"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lambu"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskara"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Māršala salas"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("VAI cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Ziemeļmaķedonija"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mjanma (Birma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolija"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("nevaru"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ĶTR īpašais administratīvais reģions Makao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Ziemeļu Marianas salas"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mauritānija"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrata"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"transliterācijas sistēma UN GEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maurīcija"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"dienvidaltajiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Maldīvija"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Malāvija"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"japāņu kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaizija"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambika"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namībija"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Subsahāras Āfrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"ebreju kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Vārdnīcas kārtošanas secība"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Jaunkaledonija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Veida-Džailza romanizācija"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Nigēra"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkas sala"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nigērija"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragva"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Nīderlande"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norvēģija"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Nepāla"_s)
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
			$of(u"cimšiāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Jaunzēlande"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"čigānu"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"Krimas tatāru"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"senangļu"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Omāna"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"franciskā kreoliskā valoda (Seišelu salas)"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"senperiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"islāma pilsoņu kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"kašubu"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"angļu (Lielbritānija)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Francijas Polinēzija"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Jaungvineja"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Filipīnas"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakistāna"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polija"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("evondu"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Senpjēra un Mikelona"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Pitkērnas salas"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puertoriko"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Palestīnas teritorijas"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Portugāle"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("njasu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Mazie grieķu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragvaja"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuku"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katara"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Skotijas angļu"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niuāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Okeānijas attālās salas"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lezgīnu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"UPA fonētika"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuvaliešu"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("pasaule"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Āfrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Ziemeļamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reinjona"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Dienvidamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ložbans"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Okeānija"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rumānija"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbija"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Krievija"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saūda Arābija"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"ponapiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Zālamana salas"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasavaku"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Rietumāfrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Seišelu salas"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sudāna"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Centrālamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Zviedrija"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(metaValue_arc)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Austrumāfrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Ziemeļāfrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singapūra"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Sv.Helēnas sala"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Stingrais rindiņas pārtraukuma stils"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Vidusāfrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Slovēnija"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Dienvidāfrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalbāra un Jana Majena sala"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slovākija"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sjerraleone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Sanmarīno"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Senegāla"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Somālija"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"araukāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapahu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Tamilu tradicionālie cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinama"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Dienvidsudāna"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Santome un Prinsipi"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvadora"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Sintmārtena"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Sīrija"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("jao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Svatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("aravaku"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"japiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Tristana da Kuņjas salu teritorijas"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"amerikāņu mērvienību sistēma"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Amerikas ziemeļu daļa"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Tērksas un Kaikosas salas"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"janbaņu"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Čada"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francijas Dienvidjūru teritorija"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Taizeme"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadžikistāna"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Karību jūras reģions"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Austrumtimora"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("jembu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Meklēt pēc Hangul sākuma līdzskaņa"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmenistāna"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisija"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turcija"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidāda un Tobāgo"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taivāna"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"astūriešu"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanzānija"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kvasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"nezināma rakstība"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"aromūnu"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Austrumāzija"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuviešu"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("svahili (Kongo)"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Dienvidāzija"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haidu"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Centrālaustrumāzija"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"piņjiņa kārtošanas secība"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Dienvideiropa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ASV Mazās Aizjūras salas"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Apvienoto Nāciju Organizācija"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Amerikas Savienotās Valstis"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"havajiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"akadēmiskā"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"vienkāršotās ķīniešu valodas kārtošanas secība - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugvaja"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"prūšu"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbekistāna"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Centrālmarokas tamazīts"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Stroke kārtošanas secība"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ngjembūnu"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatikāns"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"senprovansiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Sentvinsenta un Grenadīnas"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Venecuēla"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britu Virdžīnas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ASV Virdžīnas"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vjetnama"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogaju"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"sennorvēģu"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Austrālāzija"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"rietumarmēņu"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melanēzija"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Volisa un Futunas salas"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"tradicionālā kārtošanas secība"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikronēzijas reģions"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lakotu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Finanšu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"saderīgā kārtošanas secība"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"Vallisas vācu"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("valamu"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"vašo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("pseidoakcenti"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("varaju"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("pseidodivvirzienu"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("avadhu"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polinēzija"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosova"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"bez rakstības"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"varlpirī"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemena"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("nko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"standarta kārtošanas secība"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fangu"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fantu"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Majota"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Dienvidāfrikas Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Brīvais rindiņas pārtraukuma stils"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"dēvanāgari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Gruzīnu cipari"_s)
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
			$of(u"piņjiņa romanizācija"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"nezināms reģions"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"rūnu raksts"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"metriskā sistēma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO 8601 kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongu"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"ziemeļsotu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Telugu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"Luiziānas kreolu"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozu"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"mačamu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Vienkāršotie ķīniešu cipari finanšu dokumentiem"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligainonu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Izvērstie arābu-indiešu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nueru"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakotu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("Pilna platuma cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hetu"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargu"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taitu"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("maiju"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"ziemeļluru"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"klasiskā nevaru"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurtu"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandavu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Romiešu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("jakutu"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"Samārijas aramiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasaku"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("santalu"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"jūdpersiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Ciparu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Vietējie cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(metaValue_pa)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambeju"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("lubalulva"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Pilna platuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luisenu"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ņankolu"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ņamvezu"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lundu"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ņoru"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filipīniešu"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmongu"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"delavēru"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"lušeju"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"beludžu"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("sleivu"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ugaritiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhju"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basu"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamumu"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"jūdarābu"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzemu"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("skotu"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sicīliešu"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afāru"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abhāzu"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("avesta"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikandu"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akanu"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("gomalu"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amharu"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragoniešu"_s)
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
			$of(u"japāņu zilbju alfabēts"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asamiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"lineārā A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avāru"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"lineārā B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("dienvidkurdu"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimaru"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbaidžāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"baškīru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Radikālā kārtošanas secība pēc vilkumu skaita"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("baltkrievu"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulgāru"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bišlamā"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambaru"_s)
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
			$of("dogribu"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretoņu"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosniešu"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneku"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Laosiešu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("senu"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkupu"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katalāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koiraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"čečenu"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"čamorru"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsikāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"krī"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"čehu"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"baznīcslāvu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"čuvašu"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"velsiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Etiopiešu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("ji"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"vācu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"standarta valūtas formāts"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"bedžu"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinku"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bembu"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"senīru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Mongoļu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"maldīviešu"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongke"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"ķīniešu kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarmu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Grieķu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("evu"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafutu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Parastais rindiņas pārtraukuma stils"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldāvu"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"angļu"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"tradicionālās ķīniešu valodas kārtošanas secība - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"spāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"igauņu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"haņu ar bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("basku"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangils"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"samariešu"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"šilhu"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"augšsorbu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"haņu"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"šanu"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"persiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"vienkāršotā"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Arābu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"tradicionālā"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"dienvidazerbaidžāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulu"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"Čadas arābu"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("somu"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fidžiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fonu"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"rietumbeludžu"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kantoniešu"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"fēru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"transliterācijas sistēma US BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"franču"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamu"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"rietumfrīzu"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"īru"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"skotu gēlu"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galisiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("gvaranu"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bhodžpūru"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"nezināma valoda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Etiopiešu kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"meniešu"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausu"_s)
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
			$of("hupu"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("bikolu"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("binu"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hirimotu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"horvātu"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haitiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ungāru"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("hereru"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"kadžūnu franču"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Starptautiskais fonētiskais alfabēts"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingva"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indonēziešu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Tibetiešu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingve"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"Sičuaņas ji"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"vidusfranču"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaku"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"senfranču"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"austrumfrīzu"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"ziemeļfrīzu"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"itāļu"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"inuītu"_s)
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
			$of("doi"_s),
			$of("dogru"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("komu"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"dienvidsāmu"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"maduriešu"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"Luleo sāmu"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"magahiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("mafu"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"Inari sāmu"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksiku"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasaru"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"skoltsāmu"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingu"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongu"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuju"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masaju"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"kvaņamu"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazahu"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grenlandiešu"_s)
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
			$of("kanuru"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kašmiriešu"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdu"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"komiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"korniešu"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirgīzu"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninku"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luksemburgiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Malajalu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("gandu"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburgiešu"_s)
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
			$of(u"friūlu"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"britu mērvienību sistēma"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"lietuviešu"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("lubakatanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"latviešu"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"sogdiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malagasu"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"māršaliešu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"noklusējuma unikoda kārtošanas secība"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maoru"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"maķedoniešu"_s)
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
			$of("marathu"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malajiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mokšu"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("mabu"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(metaValue_arc)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("lejassorbu"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"nauruiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"vispārīga meklēšana"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norvēģu bukmols"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ziemeļndebelu"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepāliešu"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndongu"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandaru"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"holandiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"jaunnorvēģu"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norvēģu"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("dienvidndebelu"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navahu"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpaku"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"čičeva"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"kačinu"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabilu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("politons"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"oksitāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"kadži"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kambu"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mendu"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"odžibvu"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Armēņu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromu"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"kāvi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"osetīnu"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabardiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"Maurīcijas kreolu"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranantogo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(metaValue_pa)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("dualu"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"serēru"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"kaņembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"pāli"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"poļu"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"vidusholandiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"dangi kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"puštu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugāļu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"vidusīru"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"kārtošanas secība"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("katabu"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makua"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"valūtas formāts"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"bradžiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("metu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 stundu sistēma (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 stundu sistēma (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Birmiešu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"kečvu"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("sapoteku"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"etiopiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 stundu sistēma (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 stundu sistēma (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retoromāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"valūta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rumāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Oriju cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Ķīniešu decimāldaļskaitļi"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("krievu"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("nkosi"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"kiņaruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("blissimbolika"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"kaboverdiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmaku"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukumu"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrits"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"vienotā ortogrāfija"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardīniešu"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhu"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"ziemeļsāmu"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabavu"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"serbu–horvātu"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"šumeru"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slovāku"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slovēņu"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"šonu"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somāļu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Arābu-indiešu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albāņu"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbu"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("svatu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"uzskaites valūtas formāts"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("dienvidsotu"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Natisona dialekts"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("zviedru"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("svahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Tradicionālie ķīniešu cipari finanšu dokumentiem"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("ibanu"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Āzija"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("burjatu"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Centrālāzija"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Rietumāzija"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tadžiku"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugu"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koru"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkmēņu"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("cvanu"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"diola-fonjī"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Japāņu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turku"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("congu"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komoru"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tatāru"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"diūlu"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"tvī"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"taitiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Eiropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Austrumeiropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Ziemeļeiropa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazu"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Rietumeiropa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uiguru"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"vecitāļu"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"vispārējā"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukraiņu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Koptu kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmiku"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenagu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbeku"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"vācu ortogrāfija no 1996. gada"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"lejassakšu"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("vendu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Ķīnas Republikas kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vjetnamiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"hotaniešu"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"koiračiinī"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Stundu formāts (12 vai 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraškeviča ortogrāfija"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapiks"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"klasiskā sīriešu"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"osmaņu turku"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"kiče"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"valoņu"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauzu"_s)
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
			$of(u"līdiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"šumeru-akadiešu ķīļraksts"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volofu"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("standarta tamazigtu (Maroka)"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"mūsdienu standarta arābu"_s)
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
			$of(u"mandžūru"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaju"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"manipūru"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Vienkāršotie ķīniešu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Tradicionālie ķīniešu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("khosu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Mazie romiešu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("bilinu"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"važāžu"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("medumbu"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"Mūna raksts"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohauku"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidišs"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mosu"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("jorubu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Tradicionālā ciparu sistēma"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"rietumsīriešu"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"turku osmaņu"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vaju"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"džuanu"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"kalendžīnu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ķīniešu"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Rindiņas pārtraukuma stils"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"tālruņu grāmatas kārtošanas secība"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monotons"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Japāņu cipari finanšu dokumentiem"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"gēzu"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"austrumsīriešu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Reformētā kārtošanas secība"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("demotiskais raksts"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"hierātiskais raksts"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("kjembu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"ēģiptiešu hieroglifi"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ķīniešu vienkāršotā"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"komiešu-permiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"senungāru"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkanu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"tradicionālā vācu ortogrāfija"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"kosrājiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"ķīniešu tradicionālā"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpellu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Khmeru cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("iloku"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"valensiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundangu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Gurmuki cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"vairākas valodas"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kadu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"mērvienību sistēma"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"krīku"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"kiribatiešu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"tradicionālā ortogrāfija"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"irokēzu"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"karību"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("kajuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Tamilu cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karačaju un balkāru"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ingušu"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"darī"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"karēļu"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efiku"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Cipari"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kuruhu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"šambalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafiju"_s)
		})
	}));
	return data;
}

LocaleNames_lv::LocaleNames_lv() {
}

$Class* LocaleNames_lv::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lv, name, initialize, &_LocaleNames_lv_ClassInfo_, allocate$LocaleNames_lv);
	return class$;
}

$Class* LocaleNames_lv::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun