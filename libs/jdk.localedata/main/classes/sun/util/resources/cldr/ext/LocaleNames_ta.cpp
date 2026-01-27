#include <sun/util/resources/cldr/ext/LocaleNames_ta.h>

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

$MethodInfo _LocaleNames_ta_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ta, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ta, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ta_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ta",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ta_MethodInfo_
};

$Object* allocate$LocaleNames_ta($Class* clazz) {
	return $of($alloc(LocaleNames_ta));
}

void LocaleNames_ta::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ta::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ae, u"அவெஸ்தான்"_s);
	$var($String, metaValue_ar, u"அரபிக்"_s);
	$var($String, metaValue_bn, u"வங்காளம்"_s);
	$var($String, metaValue_bo, u"திபெத்தியன்"_s);
	$var($String, metaValue_el, u"கிரேக்கம்"_s);
	$var($String, metaValue_gu, u"குஜராத்தி"_s);
	$var($String, metaValue_ja, u"ஜப்பானியம்"_s);
	$var($String, metaValue_jv, u"ஜாவனீஸ்"_s);
	$var($String, metaValue_ka, u"ஜார்ஜியன்"_s);
	$var($String, metaValue_kn, u"கன்னடம்"_s);
	$var($String, metaValue_ko, u"கொரியன்"_s);
	$var($String, metaValue_la, u"லத்தின்"_s);
	$var($String, metaValue_lo, u"லாவோ"_s);
	$var($String, metaValue_ml, u"மலையாளம்"_s);
	$var($String, metaValue_mn, u"மங்கோலியன்"_s);
	$var($String, metaValue_or, u"ஒடியா"_s);
	$var($String, metaValue_si, u"சிங்களம்"_s);
	$var($String, metaValue_ta, u"தமிழ்"_s);
	$var($String, metaValue_te, u"தெலுங்கு"_s);
	$var($String, metaValue_th, u"தாய்"_s);
	$var($String, metaValue_bug, u"புகினீஸ்"_s);
	$var($String, metaValue_ccp, u"சக்மா"_s);
	$var($String, metaValue_cop, u"காப்டிக்"_s);
	$var($String, metaValue_got, u"கோதிக்"_s);
	$var($String, metaValue_nqo, u"என்‘கோ"_s);
	$var($String, metaValue_peo, u"பழைய பெர்ஷியன்"_s);
	$var($String, metaValue_syr, u"சிரியாக்"_s);
	$var($String, metaValue_vai, u"வை"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"கொலோக்னியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ஒகாம்"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"மிரான்டீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"சின்னங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"ஆட்சம்"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"மார்வாரி"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"தகோவானா"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"எமோஜி"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"பண்டைய எகிப்தியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"ராஜஸ்தானி"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"பக்ஸ்-பா"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"டிம்னே"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"டெசோ"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"ரபனுய்"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"டெரெனோ"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"அஷன்ஷியன் தீவு"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"ரரோடோங்கன்"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"டெடும்"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"அன்டோரா"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"ஐக்கிய அரபு எமிரேட்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ஃப்லெமிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ஆஃப்கானிஸ்தான்"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ஆண்டிகுவா மற்றும் பார்புடா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"எத்தியோப்பிய நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"அங்கியுலா"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"நேர மண்டலம்"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"அல்பேனியா"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"அர்மேனியா"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"தெங்வார்"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"அங்கோலா"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"அண்டார்டிகா"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"அர்ஜென்டினா"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"இன்ஸ்கிரிப்ஷனல் பார்த்தியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"அமெரிக்க சமோவா"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ஆஸ்திரியா"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ஆஸ்திரேலியா"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"அரூபா"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"அமெரிக்க ஆங்கிலம்"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ஆலந்து தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"அசர்பைஜான்"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"போஸ்னியா & ஹெர்ஸகோவினா"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"பார்படாஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"செபுவானோ"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"பங்களாதேஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"கும்இக்"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"பெல்ஜியம்"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"மிடில் ஹை ஜெர்மன்"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"புர்கினா ஃபாஸோ"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"பல்கேரியா"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"பஹ்ரைன்"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"புருண்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"பெனின்"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"செயின்ட் பார்தேலெமி"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"பெர்முடா"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"குடேனை"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ஏர்ஜியா"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"புருனே"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"பொலிவியா"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"கரீபியன் நெதர்லாந்து"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"பிரேசில்"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"பஹாமாஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"சோகா"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"பூடான்"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"பொவேட் தீவு"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"போட்ஸ்வானா"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"பெலாரஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"பெலிஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"விசிபிள் ஸ்பீச்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"பாரசீக நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"ஹீப்ரு எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"கனடா"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"கோகோஸ் (கீலிங்) தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"மசந்தேரனி"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"காங்கோ - கின்ஷாசா"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"மத்திய ஆப்ரிக்கக் குடியரசு"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"காங்கோ - ப்ராஸாவில்லே"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"ஸ்விட்சர்லாந்து"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"கோட் தி’வாயர்"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"குக் தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"சிலி"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"காய்தி"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"கேமரூன்"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"சீனா"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"கொலம்பியா"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"கிலிப்பர்டன் தீவு"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"கோஸ்டாரிகா"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"கியூபா"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"கேப் வெர்டே"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"குராகவ்"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"கிறிஸ்துமஸ் தீவு"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"சைப்ரஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"செசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ஈகாஜுக்"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"ஜெர்மனி"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"பழைய ஹை ஜெர்மன்"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ஆச்சினீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"சிகா"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"டியகோ கார்ஷியா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"தேவநாகரி இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ஜிபௌட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"டென்மார்க்"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"அகோலி"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"கோன்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"பிரெயில்"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"பிரம்மி"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"டொமினிகா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"ஆர்மேனியன் சிற்றெழுத்து எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"டொமினிகன் குடியரசு"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"கோரோன்டலோ"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"மெய்தெய் மயக்"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ஜூனி"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"டைக்ரே"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"அல்ஜீரியா"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"பன்காசினன்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"அரை அகலம்"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"பாஹ்லவி"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"சியூடா & மெலில்லா"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"சிப்சா"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"பம்பாங்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ஈக்வடார்"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"பபியாமென்டோ"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"அதாங்மே"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"எஸ்டோனியா"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"டிவ்"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"எகிப்து"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"மேற்கு சஹாரா"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"ஷகதை"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"பலௌவன்"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"சூகிசே"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"சினூக் ஜார்கான்"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"மாரி"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"சிபெவ்யான்"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"சோக்தௌ"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"செரோகீ"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"எரிட்ரியா"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ஸ்பெயின்"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"எத்தியோப்பியா"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"ஐரோப்பிய யூனியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"எலமைட்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"கிரிகோரியன் நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"யூரோஜோன்"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"செயேனி"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"குஜராத்தி இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"சிந்து"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"அதகே"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"துனிசிய அரபு"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"பின்லாந்து"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ஃபிஜி"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ஃபாக்லாந்து தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"மைக்ரோனேஷியா"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"மொழி மாறிலி"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ஃபாரோ தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"பிரான்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"டோகேலௌ"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"க்ரேபோ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"இந்திய தேச நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"பண்டைய கிரேக்கம்"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"கேபான்"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"வோட்க்"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"யுனைடெட் கிங்டம்"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"நைஜீரியன் பிட்கின்"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"கிரனெடா"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"ஜார்ஜியா"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"பிரெஞ்சு கயானா"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"கெர்ன்சி"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"கானா"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"தாய் லே"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"ஜிப்ரால்டர்"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"அஃப்ரிஹிலி"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"கிரீன்லாந்து"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"மிடில் ஆங்கிலம்"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"காம்பியா"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"கினியா"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"க்வாதேலோப்"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ஈக்வடோரியல் கினியா"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"கிரீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"தெற்கு ஜார்ஜியா மற்றும் தெற்கு சாண்ட்விச் தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"கவுதமாலா"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"குவாம்"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of(u"பென்சில்வேனிய ஜெர்மன்"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"கினியா-பிஸ்ஸாவ்"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"லிங்கிட்"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"க்ளிங்கோன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"புதிய தை லூ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"கயானா"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"மத்திய குர்திஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"மொழி உள்ளடக்கம் ஏதுமில்லை"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ஆஸ்திரிய ஜெர்மன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ஹாங்காங் எஸ்ஏஆர் சீனா"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ஹேர்ட் மற்றும் மெக்டொனால்டு தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ஹோண்டூராஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"குரோஷியா"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"அகெம்"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"ஸ்விஸ் ஜெர்மன்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"இஸ்லாமிய நாள்காட்டி (உம்-அல்-குரா)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ஹைட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ஹங்கேரி"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"தமஷேக்"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"கேனரி தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"மின் நான் சீனம்"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"இந்தோனேசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"அயர்லாந்து"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"நியோபோலிடன்"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"நாமா"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ஜாஜா"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"இஸ்ரேல்"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"ஐல் ஆஃப் மேன்"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"இந்தியா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"ஐரோப்பிய வரிசைப்படுத்தல் விதிகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"பிரிட்டிஷ் இந்தியப் பெருங்கடல் பிரதேசம்"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ஈராக்"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ஈரான்"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ஐஸ்லாந்து"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"இத்தாலி"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"கணிதக்குறியீடு"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"தாய் இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"பெங்காலி இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ஜெர்சி"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"இஸ்லாமிய நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"ஜமைகா"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ஜோர்டான்"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ஜப்பான்"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ஐனு"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"குஸி"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"நயாசா டோங்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"கன்னட இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"கயாஹ் லீ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"ஸ்விஸ் ஹை ஜெர்மன்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"ஒலியியல் வரிசைப்படுத்தல் முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"புத்த நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"கென்யா"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"லத்தீன் அமெரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"கிர்கிஸ்தான்"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"கம்போடியா"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"கிரிபாட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"கோமரோஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"செயின்ட் கிட்ஸ் & நெவிஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"பாரம்பரியமான"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"கனடிய பிரெஞ்சு"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"வட கொரியா"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"தென் கொரியா"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"போலார்ட் ஃபொனெட்டிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"ஸ்விஸ் பிரஞ்சு"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"குவைத்"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"டோக் பிஸின்"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"கெய்மென் தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"கஸகஸ்தான்"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"சிரிலிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"லாவோஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"லெபனான்"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"செயின்ட் லூசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"ஃபொனிஷியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"பழைய சர்ச் ஸ்லவோனிக் சிரிலிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"குவிசின்"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"லோ ஜெர்மன்"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"லிச்செண்ஸ்டெய்ன்"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"இலங்கை"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"அக்கேதியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"லைபீரியா"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"லெசோதோ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"புக் பஹலவி"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"லிதுவேனியா"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"லக்ஸ்சம்பர்க்"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"லாட்வியா"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"கதகானா"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"லிபியா"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"லடினோ"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"வுன்ஜோ"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"லஹன்டா"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"லங்கி"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"தானா"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"மொராக்கோ"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"மொனாக்கோ"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"மால்டோவா"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"மான்டேனெக்ரோ"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"செயின்ட் மார்ட்டீன்"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"லம்பா"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"மடகாஸ்கர்"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"மார்ஷல் தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"அலூட்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"வை எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"வடக்கு மாசிடோனியா"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"மாலி"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"மியான்மார் (பர்மா)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"மங்கோலியா"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"நெவாரி"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"மகாவ் எஸ்ஏஆர் சீனா"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"வடக்கு மரியானா தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"மார்டினிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"மௌரிடானியா"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"மாண்ட்செராட்"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"மால்டா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"யூஎன் ஜிஇஜிஎன் ஒலிபெயர்ப்பு"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"மொரிசியஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"தெற்கு அல்தை"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"மாலத்தீவு"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"மலாவி"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"மெக்சிகோ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"ஜப்பானிய நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"மலேசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"மொசாம்பிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"இன்ஸ்கிரிப்ஷனல் பஹலவி"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"நமீபியா"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"துணை சஹாரா ஆப்பிரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"ஹீப்ரு நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"அகராதி வரிசை முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"நியூ கேலிடோனியா"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"வேட்-கைல்ஸ் ரோமனைஷேசன்"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"நைஜர்"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"நார்ஃபோக் தீவு"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"நைஜீரியா"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"தரோகோ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"சால்டர் பஹலவி"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"நிகரகுவா"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"பஹாவ் மாங்க்"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"நெதர்லாந்து"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"நார்வே"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"நேபாளம்"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"நௌரு"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"நியுவே"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"ஃபோனேஷியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ரோம்போ"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"ட்ஸிம்ஷியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"நியூசிலாந்து"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"ரோமானி"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"மெராய்டிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"கிரிமியன் துர்க்கி"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"பழைய ஆங்கிலம்"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ஓமன்"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"அங்கிகா"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"செசெல்வா க்ரெயோல் பிரெஞ்சு"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"பனாமா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"இஸ்லாமிய சிவில் நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"கஷுபியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"பிரிட்டிஷ் ஆங்கிலம்"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"பெரு"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"பிரெஞ்சு பாலினேஷியா"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"பப்புவா நியூ கினியா"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"பிலிப்பைன்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"பாகிஸ்தான்"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"போலந்து"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"எவோன்டோ"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"செயின்ட் பியர் & மிக்வேலான்"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"பிட்கெய்ர்ன் தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"பியூர்டோ ரிகோ"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"பாலஸ்தீனிய பிரதேசங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"பாலினீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"போர்ச்சுக்கல்"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"பாலோ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"நியாஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"கிரீக் சிற்றெழுத்து எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"பராகுவே"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"தும்புகா"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"ஹீப்ரு"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"கத்தார்"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"நியூவான்"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"வெளிப்புற ஓஷியானியா"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"லெஜ்ஜியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"டுவாலு"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"தை வியத்"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"உலகம்"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"ஆப்ரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"வட அமெரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ரீயூனியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"தென் அமெரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"லோஜ்பன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"ரெஜெய்ன்"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ஓஷியானியா"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"ருமேனியா"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"செர்பியா"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ரஷ்யா"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"ருவாண்டா"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"மனிசெய்ன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"உகாரதிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"கரோஷ்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"சவூதி அரேபியா"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"ஃபோன்பெயென்"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"மேன்டியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"சாலமன் தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"டசவாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"மேற்கு ஆப்ரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"சீஷெல்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"சூடான்"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"மத்திய அமெரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"ஸ்வீடன்"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"கிழக்கு ஆப்ரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"அராமைக்"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"வடக்கு ஆப்ரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"சிங்கப்பூர்"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"செயின்ட் ஹெலெனா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"கண்டிப்பான வரி முறிப்பு ஸ்டைல்"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"மத்திய ஆப்ரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"ஸ்லோவேனியா"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"தெற்கு ஆப்ரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"ஸ்வல்பார்டு & ஜான் மேயன்"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"அமெரிக்காஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"ஸ்லோவாகியா"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"சியாரா லியோன்"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"சான் மரினோ"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"செனெகல்"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"சோமாலியா"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"மபுச்சே"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"அரபஹோ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"பாரம்பரிய தமிழ் எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"சுரினாம்"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"தெற்கு சூடான்"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"சாவ் தோம் & ப்ரின்சிபி"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"எல் சால்வடார்"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"சின்ட் மார்டென்"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"சிரியா"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"யாவ்"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"எஸ்வாட்டீனி"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"அராவாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"யாபேசே"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"டிரிஸ்டன் டா குன்ஹா"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"அசு"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"அமெரிக்க அளவீட்டு முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"வடக்கு அமெரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"டர்க்ஸ் & கைகோஸ் தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"யாங்பென்"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"சாட்"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"பிரெஞ்சு தெற்கு பிரதேசங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"டோகோ"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"தாய்லாந்து"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"தஜிகிஸ்தான்"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"கரீபியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"டோகேலோ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"திமோர்-லெஸ்தே"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"யெம்பா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"ஹங்குல் முதன்மை மெய்யெழுத்தின்படி தேடு"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"துர்க்மெனிஸ்தான்"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"டுனிசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"டோங்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"துருக்கி"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"டிரினிடாட் & டொபாகோ"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"துவாலு"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"தைவான்"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"அஸ்துரியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"ஆர்கான்"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"தான்சானியா"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"க்வாசியோ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"அறியப்படாத ஸ்கிரிப்ட்"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"உக்ரைன்"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"அரோமானியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"கிழக்காசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"டுவினியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"காங்கோ ஸ்வாஹிலி"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"தெற்காசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"ஹைடா"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"தென்கிழக்காசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"உகாண்டா"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"ஹக்கா சீனம்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"பின்யின் வரிசை முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"தெற்கு ஐரோப்பா"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"யூ.எஸ். வெளிப்புறத் தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"ஐக்கிய நாடுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"அமெரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ஹவாயியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"எளிமையாக்கப்பட்ட சீன வரிசை வடிவம் - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"உருகுவே"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"பிரஷ்யன்"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"உஸ்பெகிஸ்தான்"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"மத்திய அட்லஸ் டமசைட்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"ஸ்ட்ரோக் வரிசை முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"நெகெய்ம்பூன்"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"வாடிகன் நகரம்"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"பழைய ப்ரோவென்சால்"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"செயின்ட் வின்சென்ட் & கிரெனடைன்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"வெனிசுலா"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"பிரிட்டீஷ் கன்னித் தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"யூ.எஸ். கன்னித் தீவுகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"வியட்நாம்"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"வனுவாட்டு"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"நோகை"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"ருவா"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"பழைய நோர்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ஆஸ்திரலேசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"மெலனேஷியா"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"வாலிஸ் மற்றும் ஃபுடுனா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"பாரம்பரிய வரிசை முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"மைக்ரோ நேஷியா பிரதேசம்"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"நகொம்பா"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"லகோடா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"நிதி எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"முந்தைய வரிசை வடிவம், இணக்கத்தன்மைக்கு"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"வால்சேர்"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"சமோவா"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"வோலாய்ட்டா"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"வாஷோ"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"போலி உச்சரிப்புகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"வாரே"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"போலி பீடி"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"அவதி"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"பாலினேஷியா"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"கொசோவோ"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"எழுதப்படாதது"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ஒல் சிக்கி"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"வல்பிரி"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"பாடாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"ப்லிஸ்ஸிமிபால்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"ஏமன்"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"நிலையான வரிசை முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"ஃபேங்க்"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"ஃபான்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"ஸைன்எழுத்து"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"மயோட்"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"தென் ஆப்பிரிக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"தளர்வான வரி முறிப்பு ஸ்டைல்"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"தேவநாகரி"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"ஜார்ஜியன் எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ஹிராகானா"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ஜாம்பியா"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"பின்யின் ரோமானைசெஷன்"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ஜிம்பாப்வே"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"அறியப்படாத பிரதேசம்"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"ருனிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"மெட்ரிக் முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"மோங்கோ"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"வடக்கு சோதோ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"தெலுங்கு இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"லூசியானா க்ரயோல்"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"லோசி"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"மாசெம்"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"ஃபிஜி இந்தி"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"எளிதாக்கப்பட்ட சீன நிதி எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"ஹிலிகாய்னான்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"நீட்டிக்கப்பட்ட அரபிய-இந்திய இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"நியூர்"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"டகோடா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"முழு-அகல இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"ஹிட்டைட்"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"தார்குவா"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"டைடா"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"மயான் ஹைரோகிளிப்"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"வடக்கு லுரி"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"பாரம்பரிய நேவாரி"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"உட்முர்ட்"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"கமெர்"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"லிம்பு"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"சான்டாவே"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"ரோமன் எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"சக்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"சமாரிடன் அராமைக்"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"சம்புரு"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"சாசாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"சான்டாலி"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"டிஃபினாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"ஜூதேயோ-பெர்ஷியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(u"சௌராஷ்டிரம்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"எண்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"சொந்த இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"நெகாம்பே"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"குர்முகி"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"லுபா-லுலுலா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"முழு அகலம்"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"சங்கு"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"லுய்சேனோ"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"நியான்கோலே"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"நியாம்வேஜி"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"லூன்டா"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"நியோரோ"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"லுயோ"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ஃபிலிபினோ"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"மாங்க்"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"டெலாவர்"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"மிஸோ"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"பலூச்சி"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"ஸ்லாவ்"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"பலினீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"உகாரிடிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"லுயியா"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"பாஸா"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"ஜூதேயோ-அராபிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ஐரோப்பிய ஸ்பானிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"நிஜ்மா"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"ஸ்காட்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"சிசிலியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"அஃபார்"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"அப்காஜியான்"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"ஆஃப்ரிகான்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"அகான்"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"அம்ஹாரிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"ஆர்கோனீஸ்"_s)
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
			$of(u"ஜப்பானிய எழுத்துருக்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"அஸ்ஸாமீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"லினியர் ஏ"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"அவேரிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"லினியர் பி"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"தெற்கு குர்திஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"அய்மரா"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"அசர்பைஜானி"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"பஷ்கிர்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"ரேடியன் ஸ்ட்ரோக் வரிசை முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"பெலாருஷியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"பல்கேரியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"பிஸ்லாமா"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"பம்பாரா"_s)
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
			$of(u"டோக்ரிப்"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"பிரெட்டன்"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"போஸ்னியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"மியான்மர்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"லாவோ இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"செனா"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"செல்குப்"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"கேட்டலான்"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"கொய்ராபோரோ சென்னி"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"செச்சென்"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"சாமோரோ"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"கார்சிகன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"க்ரீ"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"செக்"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"சர்ச் ஸ்லாவிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"சுவாஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"வேல்ஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"எத்தியோப்பிய எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"யீ"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"டேனிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ஐரோப்பிய போர்ச்சுகீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"ஜெர்மன்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"நிலையான நாணய வடிவம்"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"பேஜா"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"டின்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"பெம்பா"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"பழைய ஐரிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"மங்கோலியன் இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"திவேஹி"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"லத்தின் அமெரிக்க ஸ்பானிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"பூடானி"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"பெனா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"சீன நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"ஸார்மா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"கிரீக் எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ஈவ்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"சாதாரண வரி முறிப்பு ஸ்டைல்"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"மோல்டாவியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ஆங்கிலம்"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"எஸ்பரேன்டோ"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"படகா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"பாரம்பரிய சீன வரிசை வடிவம் - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ஸ்பானிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"எஸ்டோனியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ஹன்ப்"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"பாஸ்க்"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"புகித்"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"ஹங்குல்"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"சமாரிடன்"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"தசேஹித்"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"அப்பர் சோர்பியான்"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ஹன்"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"ஷான்"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"ஹனுனூ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"பெர்ஷியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"எளிதாக்கப்பட்டது"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"மேற்கத்திய இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"பாரம்பரியம்"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ஃபுலா"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"சியாங்க் சீனம்"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ஃபின்னிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ஃபிஜியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ஃபான்"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"மேற்கு பலோச்சி"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"காண்டோனீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ஃபரோயிஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"யூஎஸ் பிஜிஎன் ஒலிபெயர்ப்பு"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"அம்பொண்டு"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"பிரெஞ்சு"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"சிடாமோ"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"மேற்கு ஃப்ரிஷியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ஐரிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"ஸ்காட்ஸ் கேலிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"காலிஸியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"க்வாரனி"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"போஜ்பூரி"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"அறியப்படாத மொழி"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"எத்தியோபிக் அமேதே ஆலெம் நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"மேங்க்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ஹௌஸா"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"ஹீப்ரூ"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"இந்தி"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"ஹுபா"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"பிகோல்"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"பினி"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"ஹிரி மோட்டு"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"குரோஷியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ஹைத்தியன் க்ரியோலி"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ஹங்கேரியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"ஆர்மேனியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"ஹெரேரோ"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"கஜுன் பிரெஞ்சு"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"இன்டர்லிங்வா"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"ஜமோ"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"இந்தோனேஷியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"திபெத்திய இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"இன்டர்லிங்"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"இக்போ"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"சிசுவான் ஈ"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"மிடில் பிரெஞ்சு"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"இனுபியாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"பழைய பிரெஞ்சு"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"இடோ"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"கிழக்கு ஃப்ரிஸியான்"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"வடக்கு ஃப்ரிஸியான்"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ஐஸ்லேண்டிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"இத்தாலியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"இனுகிடூட்"_s)
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
			$of("Sara"_s),
			$of(u"சாராதி"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"டோக்ரி"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"தெற்கு சமி"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"ஷவியான்"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"மதுரீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"லுலே சமி"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"மகாஹி"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"மைதிலி"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"இனாரி சமி"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"சிக்சிகா"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"மகாசார்"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"வூ சீனம்"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"ஸ்கோல்ட் சமி"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"மான்டிங்கோ"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"காங்கோ"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"கிகுயூ"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"மாசாய்"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"குவான்யாமா"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"கசாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"கலாலிசூட்"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"கெமெர்"_s)
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
			$of(u"கனுரி"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"காஷ்மிரி"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"கிர்த்"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"லெப்சா"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"குர்திஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"கொமி"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"கார்னிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"கிர்கிஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"சோனின்கே"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"லக்ஸம்போர்கிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"மலையாள இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"கான்டா"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"ரொங்கோரொங்கோ"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"லிம்பர்கிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"லிங்காலா"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ஃப்ரியூலியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"இம்பீரியல் அளவீட்டு முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"லிதுவேனியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"லுபா-கடாங்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"லாட்வியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"சோக்தியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"மலகாஸி"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"மார்ஷெலீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"இயல்புநிலை யுனிகோட் வரிசை முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"மௌரி"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"மாஸிடோனியன்"_s)
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
			$of(u"மராத்தி"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"மலாய்"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"மால்டிஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"பர்மீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"சௌராஷ்ட்ரா"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"அர்மேனியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"மோக்க்ஷா"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"லோயர் சோர்பியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"இம்பேரியல் அரமெய்க்"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"நவ்ரூ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"பொதுப்படையான தேடல்"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"நார்வேஜியன் பொக்மால்"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"வடக்கு தெபெலே"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"நேபாளி"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"தோங்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"மான்டார்"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"டச்சு"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"நார்வேஜியன் நியூநார்ஸ்க்"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"நார்வேஜியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"தெற்கு தெபெலே"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"நவாஜோ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"காரா-கல்பாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"நயன்ஜா"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"காசின்"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"கபாய்ல்"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ஒக்கிடன்"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ஜ்ஜூ"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"கம்பா"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"மென்டீ"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"ஒஜிப்வா"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"மெரு"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"ஆர்மேனியன் எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ஒரோமோ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"காவி"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ஒசெட்டிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"பிஷ்ணுப்பிரியா"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"கபார்டியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"மொரிசியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"ஸ்ரானன் டோங்கோ"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"பஞ்சாபி"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"டுவாலா"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"செரெர்"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"பாலி"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"போலிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"மிடில் டச்சு"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"டேங்கி நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"பஷ்தோ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"போர்ச்சுக்கீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"மிடில் ஐரிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"வரிசை முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"பிரேசிலிய போர்ச்சுகீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"தையாப்"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"மகுவா-மீட்டோ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"நாணய வடிவம்"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ப்ராஜ்"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"மேடா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 மணிநேர முறைமை (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 மணிநேர முறைமை (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"சஹோ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"மியான்மர் இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"க்வெச்சுவா"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"ஜாபோடெக்"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"போடோ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"லன்னா"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"மகொண்டே"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"எத்தியோபிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 மணிநேர முறைமை (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 மணிநேர முறைமை (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ரோமான்ஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"ருண்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"நாணயம்"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"ரோமேனியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ஒடியா இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"சீன பின்ன எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ரஷியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"கின்யாருவான்டா"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"ப்லிஸ்ஸிம்பால்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"கபுவெர்தியானு"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"மிக்மாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"சுகுமா"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ஆஸ்திரேலிய ஆங்கிலம்"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"சமஸ்கிருதம்"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"சார்தீனியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"சுசு"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"சிந்தி"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"வடக்கு சமி"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"மின்னாங்கபௌ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"சாங்கோ"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"செர்போ-குரோஷியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"சுமேரியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"ஸ்லோவாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"ஸ்லோவேனியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"சமோவான்"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"ஷோனா"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"சோமாலி"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"அரபிய-இந்திய இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"அல்பேனியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"செர்பியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"ஸ்வாடீ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"கணக்கிடல் நாணய வடிவம்"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"தெற்கு ஸோதோ"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"சுண்டானீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"ஸ்வீடிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"ஸ்வாஹிலி"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"பாரம்பரிய சீன நிதி எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"இபிபியோ"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"இபான்"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"ஆசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"புரியாத்"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"மத்திய ஆசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"மேற்காசியா"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"தஜிக்"_s)
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
			$of(u"டிக்ரின்யா"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"கோரோ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"கனடிய ஆங்கிலம்"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"துருக்மென்"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"டாகாலோக்"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ஸ்வானா"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"டோங்கான்"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"ஜோலா-ஃபோன்யி"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"ஜப்பானிய எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"துருக்கிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ஸோங்கா"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"கொமோரியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"டாடர்"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"ட்யூலா"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ட்வி"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"தஹிதியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ஐரோப்பா"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"கிழக்கு ஐரோப்பா"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"வடக்கு ஐரோப்பா"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"டசாகா"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"மேற்கு ஐரோப்பா"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"உய்குர்"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"பழைய இத்தாலி"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"பொது"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"உக்ரைனியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"காப்டிக் நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"உருது"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"கல்மிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"ஜெனகா"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"உஸ்பெக்"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"காஸி"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"லோ சாக்ஸன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"சிலோடி நக்ரி"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"வென்டா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"மின்கோ நாள்காட்டி"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"வியட்நாமீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"கோதானீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"கொய்ரா சீனீ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"மணிநேர சுழற்சி (12, 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ஒலாபூக்"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"பாரம்பரிய சிரியாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ஒஸ்மான்யா"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"கீசீ"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"கா"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ஒவாலூன்"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"காகௌஸ்"_s)
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
			$of(u"கன் சீனம்"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"லிடியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"சுமெரோ-அக்கடியன் க்யூனிஃபார்ம்"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ஓலோஃப்"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"ஸ்டாண்டர்ட் மொராக்கன் தமாசைட்"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"நவீன நிலையான அரபிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"யுனிஃபைடு கனடியன் அபொரிஜினல் சிலபிக்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"கயோ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"மன்சூ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"ஃப்ரக்டூர் லெத்தின்"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"பயா"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"மணிப்புரி"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"கேலிக் லெத்தின்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"எளிதாக்கப்பட்ட சீன எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"பாரம்பரிய சீன எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ஹோசா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"ரோமன் சிற்றெழுத்து எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ப்லின்"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"லிசியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ஓசேஜ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"மூன்"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"மொஹாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"ககோ"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"யெட்டிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"மோஸ்ஸி"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"டெசராட்"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"யோருபா"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"பாரம்பரிய எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"மெக்ஸிகன் ஸ்பானிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"மேற்கு சிரியாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ஓட்டோமான் துருக்கிஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"எஸ்ட்ரெங்கெலோ சிரியாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"ஜுவாங்"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"கரியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"கலின்ஜின்"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"சீனம்"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"போபோமோஃபோ"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"பழைய பெர்மிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"வரி முறிப்பு ஸ்டைல்"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ஜுலு"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"தொலைபேசி புத்தக வரிசை முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"கிம்புன்து"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"ஜப்பானிய நிதி எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"சாம்"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"கீஜ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"கிழக்கு சிரியாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"சீர்திருத்தப்பட்ட வரிசை முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"தகலாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"எகிப்தியன் டெமோட்டிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"எகிப்தியன் ஹைரேட்டிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"எம்பு"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"எகிப்தியன் ஹைரோகிளிப்ஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"ஜியார்ஜியன் குட்சுரி"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"எளிதாக்கப்பட்ட சீனம்"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"கொமி-பெர்ம்யாக்"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"பழைய ஹங்கேரியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"கொங்கணி"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"கோஸ்ரைன்"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"பாரம்பரிய சீனம்"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"சுந்தானீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"க்பெல்லே"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"கெமெர் இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"இலோகோ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"சைப்ரியாட்"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"முன்டாங்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"குர்முகி இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"பல மொழிகள்"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"கேடோ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"அளவீட்டு முறை"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"க்ரீக்"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"க்லாகோலிடிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"கில்பெர்டீஸ்"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"செரோக்கி"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"கரீப்"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"தமிழ் இலக்கங்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"கராசே-பல்கார்"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"இங்குஷ்"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"தாரி"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"கரேலியன்"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"எஃபிக்"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"எண்கள்"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"குருக்"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"ஷம்பாலா"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"பாஃபியா"_s)
		})
	}));
	return data;
}

LocaleNames_ta::LocaleNames_ta() {
}

$Class* LocaleNames_ta::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ta, name, initialize, &_LocaleNames_ta_ClassInfo_, allocate$LocaleNames_ta);
	return class$;
}

$Class* LocaleNames_ta::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun