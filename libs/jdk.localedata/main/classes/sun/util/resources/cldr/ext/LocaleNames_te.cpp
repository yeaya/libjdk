#include <sun/util/resources/cldr/ext/LocaleNames_te.h>

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

$MethodInfo _LocaleNames_te_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_te, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_te, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_te_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_te",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_te_MethodInfo_
};

$Object* allocate$LocaleNames_te($Class* clazz) {
	return $of($alloc(LocaleNames_te));
}

void LocaleNames_te::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_te::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, u"నౌరు"_s);
	$var($String, metaValue_TK, u"టోకెలావ్"_s);
	$var($String, metaValue_TV, u"టువాలు"_s);
	$var($String, metaValue_ae, u"అవేస్టాన్"_s);
	$var($String, metaValue_ar, u"అరబిక్"_s);
	$var($String, metaValue_bo, u"టిబెటన్"_s);
	$var($String, metaValue_el, u"గ్రీక్"_s);
	$var($String, metaValue_jv, u"జావనీస్"_s);
	$var($String, metaValue_ka, u"జార్జియన్"_s);
	$var($String, metaValue_km, u"ఖ్మేర్"_s);
	$var($String, metaValue_kn, u"కన్నడ"_s);
	$var($String, metaValue_ko, u"కొరియన్"_s);
	$var($String, metaValue_la, u"లాటిన్"_s);
	$var($String, metaValue_lo, u"లావో"_s);
	$var($String, metaValue_ml, u"మలయాళం"_s);
	$var($String, metaValue_mn, u"మంగోలియన్"_s);
	$var($String, metaValue_or, u"ఒడియా"_s);
	$var($String, metaValue_si, u"సింహళం"_s);
	$var($String, metaValue_ta, u"తమిళము"_s);
	$var($String, metaValue_te, u"తెలుగు"_s);
	$var($String, metaValue_th, u"థాయ్"_s);
	$var($String, metaValue_tl, u"టగలాగ్"_s);
	$var($String, metaValue_ban, u"బాలినీస్"_s);
	$var($String, metaValue_ccp, u"చక్మా"_s);
	$var($String, metaValue_cop, u"కోప్టిక్"_s);
	$var($String, metaValue_nqo, u"న్కో"_s);
	$var($String, metaValue_peo, u"ప్రాచీన పర్షియన్"_s);
	$var($String, metaValue_syr, u"సిరియాక్"_s);
	$var($String, metaValue_vai, u"వాయి"_s);
	$var($String, metaValue_type_ca_islamic, u"ఇస్లామిక్ క్యాలెండర్"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"కొలోనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ఒఘమ్"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"మిరాండిస్"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"చిహ్నాలు"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"అట్సామ్"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"మార్వాడి"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"టాగ్బానవా"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ఎమోజి"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"ప్రాచీన ఈజిప్షియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"రాజస్తానీ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"ఫాగ్స్-పా"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"టిమ్నే"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"టెసో"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"రాపన్యుయి"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"టెరెనో"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"అసెన్షన్ దీవి"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"రారోటొంగాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"టేటం"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ఆండోరా"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"యునైటెడ్ అరబ్ ఎమిరేట్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ఫ్లెమిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ఆఫ్ఘనిస్తాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ఆంటిగ్వా మరియు బార్బుడా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ఎథియోపిక్ క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"ఆంగ్విల్లా"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"సమయ మండలి"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"అల్బేనియా"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ఆర్మేనియా"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"టేంగ్వార్"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"అంగోలా"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"అంటార్కిటికా"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"అర్జెంటీనా"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"ఇంస్క్రిప్షనాల్ పార్థియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"అమెరికన్ సమోవా"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ఆస్ట్రియా"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ఆస్ట్రేలియా"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"అరుబా"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"అమెరికన్ ఇంగ్లీష్"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ఆలాండ్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"అజర్బైజాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"బోస్నియా మరియు హెర్జిగోవినా"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"బార్బడోస్"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"సెబువానో"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"బంగ్లాదేశ్"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"కుమ్యిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"బెల్జియం"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"మధ్యమ హై జర్మన్"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"బుర్కినా ఫాసో"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"బల్గేరియా"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"బహ్రెయిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"బురుండి"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"బెనిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"సెయింట్ బర్థెలిమి"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"బెర్ముడా"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"కుటేనై"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ఎర్జియా"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"బ్రూనే"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"బొలీవియా"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"కరీబియన్ నెదర్లాండ్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"బ్రెజిల్"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"బహామాస్"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"సొగా"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"భూటాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"బువై దీవి"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"బోట్స్వానా"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"బెలారస్"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"బెలిజ్"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"కనిపించే భాష"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"పర్షియన్ క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"హిబ్రూ సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"కెనడా"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"కోకోస్ (కీలింగ్) దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"మాసన్\u200cదెరాని"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"కాంగో- కిన్షాసా"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"సెంట్రల్ ఆఫ్రికన్ రిపబ్లిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"కాంగో- బ్రాజావిల్లి"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"స్విట్జర్లాండ్"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"కోట్ డి ఐవోర్"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"కుక్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"చిలీ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"కైథి"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"కామెరూన్"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"చైనా"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"కొలంబియా"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"క్లిప్పర్టన్ దీవి"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"కోస్టా రికా"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"క్యూబా"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"కేప్ వెర్డె"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"క్యూరసో"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"క్రిస్మస్ దీవి"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"సైప్రస్"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"చెకియా"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ఏకాజక్"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"జర్మనీ"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"ప్రాచీన హై జర్మన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ఆఖినీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"చిగా"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"డియాగో గార్సియా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"దేవనాగరి అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"జిబౌటి"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"డెన్మార్క్"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"అకోలి"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"గోండి"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"బ్రెయిల్"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"బ్రాహ్మి"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"డొమినికా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"ఆర్మేనియన్ చిన్నబడి సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"డొమినికన్ రిపబ్లిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"గోరోంటలా"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"గోథిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"మీటి మయెక్"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"జుని"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"టీగ్రె"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"అల్జీరియా"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"పంగాసినాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"సగం వెడల్పు"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"పహ్లావి"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"స్యూటా & మెలిల్లా"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"చిబ్చా"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"పంపన్గా"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ఈక్వడార్"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"పపియమేంటో"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"అడాంగ్మే"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ఎస్టోనియా"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"టివ్"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ఈజిప్ట్"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"పడమటి సహారా"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"చాగటై"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"పలావెన్"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"చూకీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"చినూక్ జార్గన్"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"మారి"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"చిపెవ్యాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"చక్టా"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"చెరోకీ"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ఎరిట్రియా"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"స్పెయిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ఇథియోపియా"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"యూరోపియన్ యూనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"ఎలామైట్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"గ్రేగోరియన్ క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"యూరోజోన్"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"చేయేన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"గుజరాతీ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"సింధు"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"అడిగాబ్జే"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"టునీషియా అరబిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ఫిన్లాండ్"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ఫిజీ"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ఫాక్\u200cల్యాండ్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"మైక్రోనేషియా"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"లొకేల్ రూపాంతరం"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ఫారో దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ఫ్రాన్స్\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"గ్రేబో"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"భారతీయ జాతీయ క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"ప్రాచీన గ్రీక్"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"గేబన్"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"వోటిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"యునైటెడ్ కింగ్\u200cడమ్"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"నైజీరియా పిడ్గిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"గ్రెనడా"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"జార్జియా"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"ఫ్రెంచ్ గియానా"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"గర్న్\u200cసీ"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ఘనా"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"తై లీ"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"జిబ్రాల్టర్"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"అఫ్రిహిలి"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"గ్రీన్\u200cల్యాండ్"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"మధ్యమ ఆంగ్లం"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"గాంబియా"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"గినియా"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"గ్వాడెలోప్"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ఈక్వటోరియల్ గినియా"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"గ్రీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"దక్షిణ జార్జియా మరియు దక్షిణ శాండ్విచ్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"గ్వాటిమాలా"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"గ్వామ్"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"గినియా-బిస్సావ్"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"ట్లింగిట్"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"క్లింగాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"క్రొత్త టై లుఇ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"గయానా"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"సెంట్రల్ కర్డిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"లిపి లేదు"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ఆస్ట్రియన్ జర్మన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"హాంకాంగ్ ఎస్ఏఆర్ చైనా"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"హెర్డ్ దీవి మరియు మెక్\u200cడొనాల్డ్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"హోండురాస్"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"క్రొయేషియా"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"అగేమ్"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"స్విస్ జర్మన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"ఇస్లామిక్ క్యాలెండర్ (ఉమ్ అల్-ఖురా)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"హైటి"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"హంగేరీ"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"టామషేక్"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"కేనరీ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"మిన్ నాన్ చైనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ఇండోనేషియా"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ఐర్లాండ్"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"నియాపోలిటన్"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"నమ"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"జాజా"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ఇజ్రాయెల్"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"ఐల్ ఆఫ్ మాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"భారతదేశం"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"యురోపియన్ క్రమబద్ధీకరణ నిబంధనలు"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"బ్రిటిష్ హిందూ మహాసముద్ర ప్రాంతం"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ఇరాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ఇరాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ఐస్లాండ్"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ఇటలీ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"గణిత సంకేతలిపి"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"థాయ్ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"బెంగాలీ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(metaValue_type_ca_islamic)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"జెర్సీ"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"జమైకా"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"బాంగ్లా"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"జోర్డాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"జపాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ఐను"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"గుస్సీ"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"న్యాసా టోన్గా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"కన్నడ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"కాయాహ్ లి"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"స్విస్ హై జర్మన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"ధ్వని ఉచ్ఛారిత క్రమబద్ధీకరణ క్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"బుద్ధుల క్యాలెండర్\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"కెన్యా"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"లాటిన్ అమెరికా"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"కిర్గిజిస్తాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"కంబోడియా"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"కిరిబాటి"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"కొమొరోస్"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"సెయింట్ కిట్స్ మరియు నెవిస్"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"వారసత్వం"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"కెనడియెన్ ఫ్రెంచ్"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"ఉత్తర కొరియా"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"దక్షిణ కొరియా"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"పోల్లర్డ్ ఫోనెటిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"స్విస్ ఫ్రెంచ్"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"కువైట్"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"టోక్ పిసిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"కేమాన్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"కజకిస్తాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"సిరిలిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"లావోస్"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"లెబనాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"సెయింట్ లూసియా"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"ఫోనికన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"ప్రాచీన చర్చ స్లావోనిక్ సిరిలిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"గ్విచిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"లో జర్మన్"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"లిక్టెన్\u200cస్టెయిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"శ్రీలంక"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"అక్కాడియాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"లైబీరియా"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"లెసోతో"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"పుస్తక పహ్లావి"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"లిథువేనియా"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"లక్సెంబర్గ్"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"లాత్వియా"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"కాటాకాన"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"లిబియా"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"లాడినో"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"వుంజొ"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"లాహండా"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"లాంగీ"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"థానా"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"మొరాకో"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"మొనాకో"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"మోల్డోవా"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"మాంటెనెగ్రో"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"సెయింట్ మార్టిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"లాంబా"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"మడగాస్కర్"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"మార్షల్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"అలియుట్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"వాయ్ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"ఉత్తర మాసిడోనియా"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"మాలి"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"మయన్మార్"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"మంగోలియా"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"నెవారి"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"మకావ్ ఎస్ఏఆర్ చైనా"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"ఉత్తర మరియానా దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"మార్టినీక్"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"మౌరిటేనియా"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"మాంట్సెరాట్"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"మాల్టా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"UN GEGN ట్రాన్స్\u200cలిట్రేషన్"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"మారిషస్"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"దక్షిణ ఆల్టై"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"మాల్దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"మలావీ"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"మెక్సికో"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"జపానీయుల క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"మలేషియా"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"మొజాంబిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"ఇంస్క్రిప్షనాల్ పహ్లావి"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"నమీబియా"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"ఉప సెహరన్ ఆఫ్రికా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"హిబ్రూ క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"నిఘంటువు క్రమబద్ధీకరణ క్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"క్రొత్త కాలెడోనియా"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"వేడ్-గైల్స్ రోమనైజేషన్"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"నైజర్"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"నార్ఫోక్ దీవి"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"నైజీరియా"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"తరోకో"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"సల్టార్ పహ్లావి"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"నికరాగువా"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"పాహవా హ్మోంగ్"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"నెదర్లాండ్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"నార్వే"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"నేపాల్"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"నియూ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"ఫోనిశియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"రోంబో"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"శింషీయన్"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"న్యూజిలాండ్"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"రోమానీ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"మెరోఇటిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"క్రిమియన్ టర్కిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"ప్రాచీన ఆంగ్లం"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ఓమన్"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ఆంగిక"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"సెసేల్వా క్రియోల్ ఫ్రెంచ్"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"పనామా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"ఇస్లామిక్-సివిల్ క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"కషుబియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"బ్రిటిష్ ఇంగ్లీష్"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"పెరూ"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"ఫ్రెంచ్ పోలినీషియా"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"పాపువా న్యూ గినియా"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ఫిలిప్పైన్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"పాకిస్తాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"పోలాండ్"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"ఎవోండొ"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"సెయింట్ పియెర్ మరియు మికెలాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"పిట్\u200cకెయిర్న్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"ప్యూర్టో రికో"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"పాలస్తీనియన్ ప్రాంతాలు"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"పోర్చుగల్"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"పాలావ్"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"నియాస్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"గ్రీక్ చిన్నబడి సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"పరాగ్వే"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"టుంబుకా"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"హీబ్రు"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"ఖతార్"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"నియాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"ఒషీనియా బయటున్నవి"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"లేజ్ఘియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"టై వియట్"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"ప్రపంచం"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"ఆఫ్రికా"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"ఉత్తర అమెరికా"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"రీయూనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"దక్షిణ అమెరికా"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"లోజ్బాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"రేజాంగ్"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ఓషినియా"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"రోమేనియా"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"సెర్బియా"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"రష్యా"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"రువాండా"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"మానిచేన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"యుగారిటిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"ఖరోషథి"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"సౌదీ అరేబియా"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"పోహ్న్పెయన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"మాన్డియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"సోలమన్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"టసావాఖ్"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"పశ్చిమ ఆఫ్రికా భూభాగం"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"సీషెల్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"సూడాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"మధ్యమ అమెరికా"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"స్వీడన్"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"తూర్పు ఆఫ్రికా"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"అరామైక్"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"ఉత్తర ఆఫ్రికా"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"సింగపూర్"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"సెయింట్ హెలెనా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"క్రమ లైన్ బ్రేక్ శైలి"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"మధ్యమ ఆఫ్రికా"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"స్లోవేనియా"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"దక్షిణ ఆఫ్రికా భూభాగం"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"స్వాల్\u200cబార్డ్ మరియు జాన్ మాయెన్"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"అమెరికాస్"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"స్లొవేకియా"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"సియెర్రా లియాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"శాన్ మారినో"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"సెనెగల్"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"సోమాలియా"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"మపుచే"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"అరాపాహో"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"సాంప్రదాయ తమిళ సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"సూరినామ్"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"దక్షిణ సూడాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"సావో టోమ్ మరియు ప్రిన్సిపి"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ఎల్ సాల్వడోర్"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"సింట్ మార్టెన్"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"సిరియా"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"యాయే"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"ఈస్వాటిని"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"అరావాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"ఈజిప్షియన్ అరబిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"యాపిస్"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ట్రిస్టన్ డ కన్హా"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"అసు"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"యు.ఎస్. కొలమాన పద్ధతి"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"ఉత్తర అమెరికా భూభాగం"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"టర్క్స్ మరియు కైకోస్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"యాంగ్\u200cబెన్"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"చాద్"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"ఫ్రెంచ్ దక్షిణ ప్రాంతాలు"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"టోగో"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"థాయిలాండ్"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"తజికిస్తాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"కరిబ్బియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"టిమోర్-లెస్టె"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"యెంబా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"హాంగుల్ ప్రారంభ హల్లు ద్వారా శోధించు"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"టర్క్\u200cమెనిస్తాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ట్యునీషియా"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"టోంగా"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"టర్కీ"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ట్రినిడాడ్ మరియు టొబాగో"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"తైవాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ఆస్టూరియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"ఓర్ఖోన్"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"టాంజానియా"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"క్వాసియె"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"తెలియని లిపి"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ఉక్రెయిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ఆరోమేనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"తూర్పు ఆసియా"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"టువినియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"కాంగో స్వాహిలి"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"దక్షిణ ఆసియా"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"హైడా"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"ఆగ్నేయ ఆసియా"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ఉగాండా"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"హక్కా చైనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"పిన్\u200cయిన్ క్రమబద్ధీకరణ క్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"దక్షిణ యూరోప్"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"సంయుక్త రాజ్య అమెరికా బయట ఉన్న దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"యునైటెడ్ నేషన్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"యునైటెడ్ స్టేట్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"హవాయియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"సరళీకృత చైనీస్ క్రమబద్ధీకరణ క్రమం - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ఉరుగ్వే"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"ప్రష్యన్"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ఉజ్బెకిస్తాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"సెంట్రల్ అట్లాస్ టామాజైట్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"స్ట్రోక్ క్రమబద్ధీకరణ క్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"గింబూన్"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"వాటికన్ నగరం"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"ప్రాచీన ప్రోవెంసాల్"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"సెయింట్ విన్సెంట్ మరియు గ్రెనడీన్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"వెనిజులా"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"బ్రిటిష్ వర్జిన్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"యు.ఎస్. వర్జిన్ దీవులు"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"వియత్నాం"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"వనాటు"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"నోగై"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"ర్వా"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"ప్రాచిన నోర్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ఆస్ట్రేలేసియా"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"మెలనేశియ"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"వాల్లిస్ మరియు ఫుటునా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"సాంప్రదాయ క్రమబద్ధీకరణ క్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"మైక్రోనేశియ ప్రాంతం"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"గోంబా"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"లకొటా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"ఆర్థిక సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"మునుపటి క్రమబద్ధీకరణ క్రమం, అనుకూలం"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"వాల్సర్"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"సమోవా"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"వాలేట్టా"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"వాషో"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"సూడో యాక్సెంట్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"వారే"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"సూడో-బిడి"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"అవధి"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"పాలినేషియా"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"కొసోవో"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"గుజరాతీ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"లిపి లేని"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ఓల్ చికి"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"వార్లపిరి"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"బాటక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"బ్లిస్సింబల్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"యెమెన్"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"ప్రామాణిక క్రమబద్ధీకరణ క్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"ఫాంగ్"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"ఫాంటి"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"సంజ్ఞ లిపి"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"మాయొట్"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"దక్షిణ ఆఫ్రికా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"అపక్రమ లైన్ బ్రేక్ శైలి"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"దేవనాగరి"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"జార్జియన్ సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"హిరాగాన"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"జాంబియా"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"పిన్\u200cయిన్ రోమనైజేషన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"జింబాబ్వే"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"తెలియని ప్రాంతం"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"రూనిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"మెట్రిక్ పద్ధతి"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"మొంగో"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"ఉత్తర సోతో"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"తెలుగు అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"లూసియానా క్రియోల్"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"లోజి"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"మకొమ్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"సరళీకృత చైనీయుల ఆర్థిక సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"హిలిగెనాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"పొడిగించబడిన అరబిక్-ఇండిక్ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"న్యుర్"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"డకోటా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"పూర్తి వెడల్పు అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"హిట్టిటే"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"డార్గ్వా"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"టైటా"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"మాయన్ హైరోగ్లైఫ్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"ఉత్తర లూరీ"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"సాంప్రదాయ న్యూయారీ"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ఉడ్ముర్ట్"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"ఇస్లామిక్ క్యాలెండర్ (సౌదీ అరేబియా)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"లింబు"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"సండావి"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"రోమన్ సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"సాఖా"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"సమారిటన్ అరామైక్"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"సంబురు"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"ససక్"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"సంతాలి"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"టిఫీనాఘ్"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"జ్యుడియో-పర్షియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"సంఖ్య"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"స్థానిక అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"గాంబే"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"గుర్ముఖి"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"లుబా-లులువ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"పూర్తి వెడల్పు"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"సాంగు"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"లుయిసెనో"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"న్యాన్కోలె"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"న్యంవేజి"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"లుండా"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"నేయోరో"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"లువో"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ఫిలిపినో"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"మోంగ్"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"డెలావేర్"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"మిజో"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"బాలుచి"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"స్లేవ్"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ఉగారిటిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"లుయియ"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"బసా"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"జ్యుడియో-అరబిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"యూరోపియన్ స్పానిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"జీమా"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"స్కాట్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"సిసిలియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"అఫార్"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"అబ్ఖాజియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"ఆఫ్రికాన్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"అకాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"అమ్హారిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"అరగోనిస్"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"జాపనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"జపనీస్ సిలబెరీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"అస్సామీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"లినియర్ ఎ"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"అవారిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"లినియర్ బి"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"దక్షిణ కుర్డిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ఐమారా"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"అజర్బైజాని"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"బాష్కిర్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"రాడికల్-స్ట్రోక్ క్రమబద్ధీకరణ క్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"బెలారుషియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"బల్గేరియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"బిస్లామా"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"బంబారా"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"బంగ్లా"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"డోగ్రిబ్"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"బ్రెటన్"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"బోస్నియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"మయాన్మార్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"లావో అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"సెనా"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"సేల్కప్"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"కాటలాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"కోయోరాబోరో సెన్నీ"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"చెచెన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"చమర్రో"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"సవరించబడిన వర్ణక్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"కోర్సికన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"క్రి"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"చెక్"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"చర్చ్ స్లావిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"చువాష్"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"వెల్ష్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ఎథియోపిక్ సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"యి"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"డానిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"యూరోపియన్ పోర్చుగీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"జర్మన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"ప్రామాణిక కరెన్సీ ఫార్మాట్"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"బేజా"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"డింకా"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"బ్యుగినీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"బెంబా"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"ప్రాచీన ఐరిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"మంగోలియన్ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"దివేహి"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"లాటిన్ అమెరికన్ స్పానిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"జోంఖా"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"బెనా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"చైనీస్ క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"జార్మా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"గ్రీక్ సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"యూ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"సాధారణ లైన్ బ్రేక్ శైలి"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"మొల్డావియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ఇంగ్లీష్"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ఎస్పెరాంటో"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"సాంప్రదాయ చైనీస్ క్రమబద్ధీకరణ క్రమం - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"స్పానిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ఎస్టోనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"హాన్బ్"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"బాస్క్యూ"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"బుహిడ్"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"హంగుల్"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"సమారిటన్"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"టాచెల్\u200cహిట్"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"అప్పర్ సోర్బియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"హాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"షాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"హనునూ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"పర్షియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"సరళీకృతం"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"పశ్చిమ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"సాంప్రదాయక"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ఫ్యుల"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"జియాంగ్ చైనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ఫిన్నిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ఫిజియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ఫాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"పశ్చిమ బలూచీ"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"కాంటనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ఫారోస్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"US BGN ట్రాన్స్\u200cలిట్రేషన్"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"ఉమ్బుండు"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ఫ్రెంచ్"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"సిడామో"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"పశ్చిమ ఫ్రిసియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ఐరిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"స్కాటిష్ గేలిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"గాలిషియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"గ్వారనీ"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"భోజ్\u200cపురి"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"తెలియని భాష"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"ఎథోపిక్ అమేటే అలెమ్ క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(metaValue_type_ca_islamic)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"గుజరాతి"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"మాంక్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"హౌసా"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"హిబ్రూ"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"హిందీ"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"హుపా"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"బికోల్"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"బిని"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"హిరి మోటు"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"క్రొయేషియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"హైటియన్ క్రియోల్"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"హంగేరియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"ఆర్మేనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"హెరెరో"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"కాజున్ ఫ్రెంచ్"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ఇంటర్లింగ్వా"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"జమో"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ఇండోనేషియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"టిబిటన్ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ఇంటర్లింగ్"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ఇగ్బో"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"శిషువన్ ఈ"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"మధ్యమ ప్రెంచ్"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"ఇనుపైయాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"ప్రాచీన ఫ్రెంచ్"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ఈడో"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"తూర్పు ఫ్రిసియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"ఉత్తర ఫ్రిసియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ఐస్లాండిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ఇటాలియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ఇనుక్టిటుట్"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"జపనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"సరాటి"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"డోగ్రి"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"దక్షిణ సామి"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"షవియాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"మాదురీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"లులే సామి"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"మగాహి"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"మైథిలి"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ఇనారి సామి"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"సిక్సికా"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"మకాసార్"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"వు చైనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"స్కోల్ట్ సామి"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"మండింగో"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"కోంగో"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"గోతిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"కికుయు"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"మాసై"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"క్వాన్యామ"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"కజఖ్"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"కలాల్లిసూట్"_s)
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
			$of(u"కానురి"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"కాశ్మీరి"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"సిర్థ్"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"లేప్చా"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"కుర్దిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"కోమి"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"కోర్నిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"కిర్గిజ్"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"సోనింకి"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"లక్సెంబర్గిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"మలయాళం అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"గాండా"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"రోంగో రోంగో"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"లిమ్బర్గిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"లింగాల"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ఫ్రియులియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"ఇంపీరియల్ కొలమాన పద్ధతి"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"లిథువేనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"లూబ-కటాంగ"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"లాట్వియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"సోగ్డియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"మలగాసి"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"మార్షలీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"డిఫాల్ట్ యూనీకోడ్ క్రమబద్ధీకరణ క్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"మావొరీ"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"మాసిడోనియన్"_s)
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
			$of(u"మరాఠీ"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"మలయ్"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"మాల్టీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"బర్మీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"సౌరాష్ట్ర"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"అర్మేనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"మోక్ష"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"లోయర్ సోర్బియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"ఇంపీరియల్ అరామాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"సాధారణ-ప్రయోజన శోధన"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"నార్వేజియన్ బొక్మాల్"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ఉత్తర దెబెలె"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"నేపాలి"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"డోంగా"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"మండార్"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"డచ్"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"నార్వేజియాన్ న్యోర్స్క్"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"నార్వేజియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"దక్షిణ దెబెలె"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"నవాజొ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"కారా-కల్పాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"న్యాన్జా"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"కాచిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"కాబిల్"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ఆక్సిటన్"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"జ్యూ"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"కంబా"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"మెండే"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"చేవా"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"మెరు"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"ఆర్మేనియన్ సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ఒరోమో"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"కావి"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ఒసేటిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"బిష్ణుప్రియ"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"కబార్డియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"మొరిస్యేన్"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"స్రానన్ టోంగో"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"పంజాబీ"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"డ్యూలా"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"సెరేర్"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"పాలీ"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"పోలిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"మధ్యమ డచ్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"దాంగీ క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"పాష్టో"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"పోర్చుగీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"మధ్యమ ఐరిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"క్రమబద్ధీకరణ క్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"బ్రెజీలియన్ పోర్చుగీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"ట్యాప్"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"మక్వా-మిట్టో"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"కరెన్సీ ఫార్మాట్"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"బ్రాజ్"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"మెటా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 గంటల పద్ధతి (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 గంటల పద్ధతి (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"సాహో"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"మయన్మార్ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"కెచువా"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"జపోటెక్"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"బోడో"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"లన్నా"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"మకొండే"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ఇథియోపిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 గంటల పద్ధతి (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 గంటల పద్ధతి (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"రోమన్ష్"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"రుండి"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"కరెన్సీ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"రోమేనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ఒరియా అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"చైనీయుల దశాంశ సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"రష్యన్"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"కిన్యర్వాండా"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"బ్లిసింబల్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"కాబువేర్దియను"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"మికమాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"సుకుమా"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ఆస్ట్రేలియన్ ఇంగ్లీష్"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"సంస్కృతం"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"సార్డీనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"సుసు"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"సింధీ"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"ఉత్తర సామి"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"మినాంగ్\u200cకాబో"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"సాంగో"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"సేర్బో-క్రొయేషియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"సుమేరియాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"స్లోవక్"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"స్లోవేనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"సమోవన్"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"షోన"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"సోమాలి"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"అరబిక్-ఇండిక్ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"అల్బేనియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"సెర్బియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"స్వాతి"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"అకౌంటింగ్ కరెన్సీ ఫార్మాట్"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"దక్షిణ సోతో"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"సండానీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"స్వీడిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"స్వాహిలి"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"సాంప్రదాయ చైనీయుల ఆర్థిక సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ఇబిబియో"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ఐబాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"ఆసియా"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"బురియట్"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"మధ్య ఆసియా"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"పశ్చిమ ఆసియా"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"తజిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"టిగ్రిన్యా"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"బుగినీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"కోరో"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"కెనడియన్ ఇంగ్లీష్"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"తుర్క్\u200cమెన్"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"స్వానా"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"టాంగాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"జోలా-ఫోనయి"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"జపానీయుల సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"టర్కిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"సోంగా"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"కొమొరియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"టాటర్"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"డ్యులా"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ట్వి"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"తహితియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"యూరోప్"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"తూర్పు యూరోప్"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"ఉత్తర యూరోప్"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"డాజాగా"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"పశ్చిమ యూరోప్"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ఉయ్\u200cఘర్"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"ప్రాచిన ఐటాలిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"సామాన్య"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ఉక్రెయినియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"కాప్టిక్ క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ఉర్దూ"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"కల్మిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"జెనాగా"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ఉజ్బెక్"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"ఖాసి"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996 ఙర్మన వర్ణక్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"లో సాక్సన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"స్లోటి నాగ్రి"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"వెండా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"మింగ్యూ క్యాలెండర్"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"వియత్నామీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"ఖోటనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"కొయరా చీన్నీ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"గంటల పద్ధతి (12 వర్సెస్ 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"వోలాపుక్"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"సాంప్రదాయ సిరియాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ఓసమాన్య"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"కిచే"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"గా"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"వాలూన్"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"గాగౌజ్"_s)
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
			$of(u"గాన్ చైనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"లిడియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"సుమేరో- అక్కడియన్ క్యునిఫార్మ్"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ఉలూఫ్"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"ప్రామాణిక మొరొకన్ టామజైట్"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"ఆధునిక ప్రామాణిక అరబిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"యునిఫైడ్ కెనెడియన్ అబొరిజినల్ సిలబిక్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"గాయో"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"మంచు"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"ఫ్రాక్టూర్ లాటిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"గ్బాయా"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"మణిపురి"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"గేలిక్ లాటిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"సరళీకృత చైనీయుల సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"సాంప్రదాయ చైనీయుల సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"షోసా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"రోమన్ చిన్నబడి సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"బ్లిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"లిసియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ఒసాజ్"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"మూన్"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"మోహాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"కాకో"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ఇడ్డిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"మోస్సి"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"డేసెరెట్"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"యోరుబా"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"సాంప్రదాయ సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"మెక్సికన్ స్పానిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"పశ్చిమ సిరియాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ఒట్టోమన్ టర్కిష్"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"ఎస్ట్రానజీలో సిరియాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"జువాన్"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"కారియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"కలెంజిన్"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"చైనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"బోపోమోఫో"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"ప్రాచీన పెర్మిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"లైన్ బ్రేక్ శైలి"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"జూలూ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"ఫోన్\u200cబుక్ క్రమబద్ధీకరణ క్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"కిమ్బుండు"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"జపానీయలు ఆర్థిక సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"చామ్"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"జీజ్"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"తూర్పు సిరియాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"మళ్ళీ ఆకృతీకరించబడిన క్రమబద్ధీకరణ క్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"ఇజిప్షియన్ డెమోటిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"ఇజిప్షియన్ హైరాటిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ఇంబు"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"ఇజిప్షియన్ హైరోగ్లైఫ్స్"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"జార్జియన్ ఖట్సూరి"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"సరళీకృత చైనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"కోమి-పర్మాక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"ప్రాచీన హంగేరియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"కొంకణి"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"ప్రాచీన ఙర్మన వర్ణక్రమం"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"కోస్రేయన్"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"సాంప్రదాయక చైనీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"సుడానీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"పెల్లే"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"ఖ్మేర్ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ఐలోకో"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"సైప్రోట్"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"మండాంగ్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"గుర్ముఖీ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"బహుళ భాషలు"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"కేడ్డో"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"కొలమాన పద్ధతి"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"క్రీక్"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"గ్లాగో లిటిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"గిల్బర్టీస్"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"చిరోకి"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"కేరిబ్"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"తమిళ అంకెలు"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"కరచే-బల్కార్"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ఇంగుష్"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"డారి"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"కరేలియన్"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ఎఫిక్"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of(u"తుళు"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"సంఖ్యలు"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"కూరుఖ్"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"శంబాలా"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"బాఫియ"_s)
		})
	}));
	return data;
}

LocaleNames_te::LocaleNames_te() {
}

$Class* LocaleNames_te::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_te, name, initialize, &_LocaleNames_te_ClassInfo_, allocate$LocaleNames_te);
	return class$;
}

$Class* LocaleNames_te::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun