#include <sun/util/resources/cldr/ext/LocaleNames_brx.h>

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

$MethodInfo _LocaleNames_brx_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_brx, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_brx, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_brx_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_brx",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_brx_MethodInfo_
};

$Object* allocate$LocaleNames_brx($Class* clazz) {
	return $of($alloc(LocaleNames_brx));
}

void LocaleNames_brx::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_brx::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_TK, u"टोकेलौ"_s);
	$var($String, metaValue_TO, u"टॉंगा"_s);
	$var($String, metaValue_TR, u"तुर्की"_s);
	$var($String, metaValue_ae, u"अवस्तन्"_s);
	$var($String, metaValue_ar, u"अरबी"_s);
	$var($String, metaValue_bo, u"तिब्बती"_s);
	$var($String, metaValue_el, u"ग्रीक"_s);
	$var($String, metaValue_gu, u"गुजराती"_s);
	$var($String, metaValue_ja, u"जापानी"_s);
	$var($String, metaValue_jv, u"जावानीस"_s);
	$var($String, metaValue_km, u"ख्मेर"_s);
	$var($String, metaValue_or, u"उड़िया"_s);
	$var($String, metaValue_te, u"तेलुगु"_s);
	$var($String, metaValue_th, u"थाई"_s);
	$var($String, metaValue_bug, u"बुगीनी"_s);
	$var($String, metaValue_nqo, u"न्गको"_s);
	$var($String, metaValue_vai, u"वाई"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ओगहैम"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"मीरांडी"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"आत्सम"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"मारवाड़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"तागबानवा"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"ग्नीवा या न्जीवा डायलेक्ट"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"प्राचीन मिस्री"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"राजस्थानी"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"फाग्स पा"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"तीमने"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"रापानुई"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"तेरेनो"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"रारोटोंगा"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"तेतुम"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ऍन्डोरा"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"संयुक्त अरब अमीरात"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"फ्लेमी"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"अफ़ग़ानिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"एन्टिगुआ एवं बारबूडा"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"एंगीला"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"अल्बानिया"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"आर्मेनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"तेंगवार"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"अंगोला"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"अंटार्कटिका"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"अर्जेण्टिना"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"अमरिकी समोआ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ऑस्ट्रिया"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ऑस्ट्रेलिया"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"अरूबा"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"अंग्रेज़ी (अमरिकी)"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"आलाँड द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"अज़रबैजान"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"पूर्वी अर्मेनियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"बोसनिया हर्ज़ेगोविना"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"बारबाडोस"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"चेबुआनो"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"बंगलादेश"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"कुमीक्"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"बेल्जियम"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"मध्य उच्चस्तरी जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"बुर्किना फासो"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"बल्गैरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"बहरैन"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"बुरुंडी"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"बेनेँ"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"सेँ बार्थेलेमी"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"बरमूडा"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"कुतेनाई"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ऐर्ज़िया"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ब्रूनइ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"बोलीविया"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ब्राज़ील"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"बहामा"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"भूटान"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"बुवे द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"बोत्स्वाना"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"बेलारूस"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"बेलिज़"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"वीज़ीबल बोली"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"कैनाडा"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"कोकोस द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"कॉंगो किनशासा"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"सेंट्रल अफ्रीकन रिपब्लिक"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"कॉंगो ब्राज़्ज़ावील"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"स्वित्ज़रलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"आईवरी कोस्ट"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"कुक द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"चिली"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"कोमेरान"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"चीन"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"कोलम्बिया"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"कोस्टारीका"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"क्यूबा"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"कैप वेर्दे"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"क्रिस्मस द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"साइप्रस"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"चेक गणराज्य"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"एकाजुक"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"जर्मनी"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"पुरानी उच्चस्तरी जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"अचेहनी"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"द्जिबूती"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"डेनमार्क"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"अकोली"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"गाँडी"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ब्रेल"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"ब्रह्मी"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"डोमिनिका"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"डोमिनिकन गणराज्य"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"गोरंटालो"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"गॉथिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"मेतेई मयेक"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ज़ुनी"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"टीग्रे"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"अल्जीरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"पांगासीनन"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"पहलवी"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"चीबचा"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"पंपंगा"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"एक्वाडोर"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"पापीआमेन्तो"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"अडांगमे"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"एस्टोनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"टीव्"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"मिस्र"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"पश्चिमी सहारा"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"चगताई"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"पालाऊ"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"चुकेसे"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"चीनूक् जार्गन्"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"मारी"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"चिपेवियान्"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"चौक्टो"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"चीरोकी"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"एरिट्रिया"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"स्पेन"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"इथिओपिया"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"यूरोपीय संघ"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"एलामी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ग्रेगरीअन पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"शायान्"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"सिन्धु"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"अडीगे"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"फिनलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"फिजी"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"फ़ॉल्कलैंड द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"माइक्रोनेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"फरो द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"तमीळ"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"फ्राँस"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"ग्रेबो"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"प्राचीन यूनानी"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"गैबॉन"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"वोटीक"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"ब्रितन"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ग्रेनडा"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"जॉर्जिया"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"फ्राँसीसी गिआना"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"गेर्नसे"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"घाना"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"ताई ले"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"जिब्राल्टर"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"अफ्रीहीली"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ग्रीनलैण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"मध्य अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"गाम्बिया"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"गिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ग्वादलुप"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"इक्वेटोरियल गिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"ग्रीस"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"दक्षिण जोर्जिया एवं दक्षिण सैंडवीच द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"गोतेदाला"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"गुआम"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"गीनी-बिसाउ"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"ट्लिंगीत"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"क्लींगदन"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"नया ताई लुए"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"गुयाना"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"रिक्त"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"जर्मन (ऑस्ट्रिया)"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"हाँगकाँग विशेष प्रशासनिक क्षेत्र चीन"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"हर्ड द्वीप एवं मैकडोनॉल्ड द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"हौण्डूरास"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"क्रोएशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"स्वीस जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"हाइती"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"हंगरी"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"तमाशेक"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"इंडोनेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"पुरानी फ़ारसी"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"आयरलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"नेआपोलिटन"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ज़ाज़ा"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"इस्राइल"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"आईल ऑफ़ मैन"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"भारत"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ब्रिटिश हिंद महासागरिय क्षेत्र"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ईराक़"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ईरान"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"आइसलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"इटली"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"कम्प्यूटर"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"जर्सी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"इस्लामी पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"जमाइका"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"बंगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"जॉर्डन"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"जापान"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"मध्य फ्रांसीसी 1606 तक"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ऐनू"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"न्यासा टॉंगा"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"कायाह ली"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"उच्च स्तरिय स्वीस जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"बौद्ध पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"केन्या"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"लैटिन अमरिका एवं करीबी"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"किर्गिज़"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"कम्बोडिया"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"किरिबाती"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"कोमोरोज़"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"सेंट किट्स एवं नेविस"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"कन्नड़"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"विरासत"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"फ्रांसीसी (कनाडाई)"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"उत्तर कोरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"दक्षिण कोरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"पौलार्ड़ फोनेटीक"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"फ्रांसीसी (स्वीस)"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"कुवैत"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"तोक पिसीन"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"केमैन द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"कज़ाखस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"सिरिलिक्"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"लाओस"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"लेबनोन"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"सेंट लूसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"फीनीसी"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"पुरानी चर्च सिरिलिक्"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ग्वीचलीन"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"नीजी स्तरिय जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"लिक्टैनस्टाईन"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"श्री लँका"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"अकाडिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"कॉप्टीक्"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"लाइबेरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"लसोथो"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"बुक (सालटर) पहलवी"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"लिथुआनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"लक्समबर्ग"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"लाट्वीया"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"काताकाना"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"लीबिया"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"लाड़ीनो"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"लाह्डां"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"थाना"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"मोरोक्को"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"मोनाको"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"मोल्डेविया"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"मोंटेनेग्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"सेँ मार्टेँ"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"लांबा"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"मदागास्कर"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"मार्शल द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"अलुट"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"माली"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"म्यानमार"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"मंगोलिया"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"नेवारी"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"मकाओ विशेष प्रशासनिक क्षेत्र (चीन)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"उत्तरी मारियाना द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"मार्टीनिक"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"मॉरिटेनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"मॉंसेरा"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"माल्टा"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"मॉरिस"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"मालदीव"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"मलावी"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"मैक्सिको"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"जापानी पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"मलेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"मोज़ाम्बिक"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"नामीबिया"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"यहुदी पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"न्यू कैलेडोनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"नाइजेर"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"नॉरफ़ॉक द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"नाइजीरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"निकारागुआ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"पाहवाह ह्मौंग"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"नेदरलैण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"नॉर्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"नेपाल"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"नाउरू"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"नीयूए"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"फोनीशीयन"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"त्सीमशीआन्"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"न्यूज़ीलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"रुमानी"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"मेरोईटीक्"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"तुर्की क्रिमिया"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"पुरानी अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ओमान"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"अंगीका"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"पुरानी फारसी"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"पनामा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"इस्लामी नागरिक पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"काशुबियान्"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"अंग्रेजी (ब्रिटिश)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"पेरू"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"फ्राँसीसी पॉलिनीशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"पापुआ न्यू गिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"फिलीपिन्स"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"पाकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"पोलैण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"एवौंडो"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"सेँ पीएर एवं मि\u200dकेलॉं"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"पिटकेर्न"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"पुएर्टो रीको"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"फ़िलिस्तीन"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"बाली"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"पुर्तगाल"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"पलाऊ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"नियास"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"पारागुए"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"टुँबुका"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"हिब्रू"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"क़तार"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"मानक स्कॉट अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"नियुइआन"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"बाहरिय ओशेआनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"लेज़गीयान"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"युपीए फ़ोनेटीक्स"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"टुवालु"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"दुनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"अफ्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"उत्तर अमरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"रेयूनियॉं"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"दक्षिण अमरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"लोजबान"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"रेजेंग"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ओशेआनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"रोमानिया"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"सर्बिया"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"रूस"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"रूआण्डा"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"मानीकी"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"ऊगारीटीक"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"खरोष्टी"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"सऊदी अरब"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"पोहनपी"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"मांडे"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"सॉलोमन द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"पश्चिमी अफ्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"सेशेल्स"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"सूदान"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"मध्य अमरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"स्वीडन"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"पूर्वी अफ्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"अरामाईक"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"उत्तरी अफ्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"सिंगापुर"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"सेण्\u200dट हेलेना"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"मध्य अफ्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"स्लोवेनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"दक्षिणी अफ्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"स्वाल्बार्ड एवं यान मायेन"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"अमरिकाज़्"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"स्लोवाकिया"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"सियेरा लेओन"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"सैन मरीनो"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"सेनेगाल"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"सोमालिया"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"अरापाहो"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"सुरिनाम"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"साउँ-तोमे एवं प्रिंसिप"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ऍल साल्वाडोर"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"सीरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"याओ"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"स्वाज़ीलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"अरावाक"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"यापीज़"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"उत्तरी अमरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"तुर्की एवं कैकोज़ द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"चाड"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"फ्राँसीसी उत्तरी क्षेत्रों"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"टोगो"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"थाइलैण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ताजिकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"कैरिबियन"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"पूर्वी तिमोर"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"तुर्कमेनीस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"बुन्तलींग"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"त्युनिशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ट्रिनिडाड एवं टोबैगो"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"तुवालु"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ताइवान"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"ओरखोन"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"तंज़ानिया"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"अज्ञात या अवैध लिपि"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"यूक्रेन"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"आरोमानी"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"पूर्वी एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"टुवी"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"दक्षिणी एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"हईडा"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"दक्षिण-पूर्वी एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"युगाँडा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"पिनयीन वर्गीकरण"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"दक्षिणी यूरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"सिंहाली"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"युनाइटेड स्टेट्स के छोटे बाहरिय द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"संयुक्त राज्य अमरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"हवाईअन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"सरलीकृत चीनी वर्गीकरण जीबी2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"युरूगुए"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"उज़बेकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"स्ट्रोक वर्गीकरण"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"वैटिकन"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"पुरानी प्रोवाँसाल"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"सेंट विंसंट एवं दी ग्रनाडीन्स्"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"वेनेज़ुएला"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ब्रिटिश वर्जीन आईलंड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"यु.एस. वर्जीन आईलंड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"वियतनाम"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"वानाऊटु"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"नोगाई"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"पुरानी नॉर्स्"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ऑस्ट्रेलिया एवं न्यूजीलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"मेलीनेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"वॉलेस एवं फ़्यूचूना"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"पारम्पारिक वर्गीकरण"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"माईक्रोनेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"समोआ"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"वालामो"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"वाशो"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"वारय"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"अवधी"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"पोलीनेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"अलिखित"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ओल चीकी"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"बटकी"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"ब्लीस चीन्ह"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"यमन"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"फाँग्"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"रेज़ीयन"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"फाँटी"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"सांकेतिक लेख"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"मैयौट"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"दक्षिण अफ्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"देवनागरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"हीरागाना"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ज़ाम्बिया"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ज़ीम्बाब्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"अज्ञात या अवैध प्रदेश"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"रूनिक"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"मोंगो"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"लोज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"हीलीगैनोन"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"डकौटा"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"हीत्ती"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"दर्गवा"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"माया हीरोग्लीफ्"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"कॉप्ट"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"पुरानी नेवारी"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"उड़मुर्त"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"लिम्बु"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"संडावे"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"यकुट्"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"समारीती आरामाईक़"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"स्काउज़"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"सासक"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"संताली"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"तीफीनाग़"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"यहुदी फ़ारसी"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"गुरमुखी"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"लुबा लुलुआ"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"लुईसेनो"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"न्यानकोले"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"न्यामवेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"लुंडा"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"न्यौरो"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"लुओ"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"फिलिपिनो"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"ह्मौंग"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"दलावार्"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"लुशाई"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"बलूची"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"स्लेव्"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"बालिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"उगारिती"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"बास्क़्"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"यहुदी अरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ईवेरियाई स्पैनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"न्ज़ीमा"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"स्कॉट"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"सीसीलीअन"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"अब्खाज़ियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"अफ्रीकी"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"अकन"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"अम्हारिक्"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"आर्गोनी"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"श्टोलविज़्ज़ा या सोलबीका डायलेक्ट"_s)
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
			$of(u"काताकाना या हीरागाना"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"असामी"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"लीनीयर ए"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"अवारिक्"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"लीनीयर बी"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"आयमारा"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"अज़रबैजानी"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"ओसेआको ओसोजाने डायलेक्ट"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"बशख़िर्"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"बैलोरूसियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"बल्गैरियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"बिस्लामा"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"बांबारा"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"बंगला"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"डोगरीब्"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ब्रटों"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"बोस्नियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"म्यानमार्"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"सेलकुप"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"कातालान्"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"चेचेन्"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"चामोरो"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"संशोधित वर्तनी"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"कोर्सीकन्"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"क्री"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"चेक्"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"चर्च स्लाविक्"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"चुवाश्"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"वैल्श्"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"यी"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"डैनीश्"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"ज़र्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"बेजा"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"डींगका"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"बेंबा"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"पुरानी आईरीश"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"दीवेही"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"लैटिन अमरिकी स्पैनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"भुटानी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"चीनी पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"एवे"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"मोल्डेवियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"एस्पेरान्तो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"पारम्पारिक चीनी वर्गीकरण बीग फ़ाईव"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"स्पैनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ऐस्टोनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"बास्क्"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"बुहीद"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"हंगुल"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"समारती"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"ऊपरी सौर्बियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"हान"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"शान"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"हानुनु"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"फार्सी"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"सरलीकृत हान"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"पारम्परिक हान"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"फुलाह्"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"फिनिश्"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"फ़ीजी"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"फोन"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"फिरोज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"उंबुंडु"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"फ्रांसीसी"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"सीदामो"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"पश्चीमी फ्रीज़ियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"आईरिश"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"स्कॉट्स् गैलिक्"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"गैलिशियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"गुआरानी"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"भोजपुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"अज्ञात या अवैध भाषा"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"मैंक्स"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"हउसा"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"हिब्रु"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"हिंदी"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"हूपा"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"बिकोल्"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"बिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"हीरी मोटु"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"क्रोएशन्"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"हाईशीयन्"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"हंगैरीयन्"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"अरमेनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"हेरेरो"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"आईपीए फ़ोनेटीक्स"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ईन्टरलिंग्वा"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"इन्डोनेशियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ईन्टरलिंग्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ईग्बो"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"सीचुआन् यी"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"मध्य फ्रांसीसी"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"इनुपियाक़्"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"पुरानी फ्रांसीसी"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ईडो"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"पूर्वी फ्रीज़ियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"उत्तरी फ्रीज़ियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"आईस्लैंडिक्"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ईटालियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"इनूक्टीटूत्"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"मलयालम्"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"सराती"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"डोगरी"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"पश्चीमी सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"शेवियन"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"मादुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"लुले सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"मघी"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"मैथीली"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ईनारी सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"जॉर्जियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"सीकसीका"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"मक्सर"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"स्कोल्ट् सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"मांडींगो"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"कॉंगो"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"गौथीक"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"किकुयु"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"मसाई"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"कुआनयामा"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"क़ज़ाख़्"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"कलालीसुत"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"कन्नड्"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"कोरीयन्"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"कनुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"कश्मिरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"सिर्थ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"लेपचा"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"कुर्दी"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"कोमी"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"कौर्नवॉली"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"किरग़ीज़्"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"सोनिंगके"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"लैटीन्"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"लुक्समबुर्गी"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"गांडा"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"रोंगोरोंगो"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"लींबुर्गी"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"लिंगाला"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"फ्रीउलीअन्"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"लाओसीयन्"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"लिथुआनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"लुबा कटांगा"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"लाटवियन् (लैट्टीश)"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"सोगडीयन"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of("{0},{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"मालागासी"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"मार्शली"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"माओरी"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"मैसेडोनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"मलयालम"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"मोंगोलियन"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"मराठी"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"मलाय"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"मालटीज़्"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"बर्मी"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"सौराष्ट्र"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"अर्मेनियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"मोक्षा"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"सोर्बियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"शहनशाही आरामाईक"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"नाऊरू"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"नोर्वेगी बोकमाल"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"उत्तर न्दबेले"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"नेपाली"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"न्डोंगा"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"मंदार"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"डच्"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"नॉर्वेजियन् नीनॉर्स्क्"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"नॉर्वेजीयन्"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"दक्षिणी न्दबेले"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"नावाहो"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"कारा कलपक"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"न्यानजा"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"कचीन्"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"काबील्"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"बहुस्वरीय"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ओक्सीतान"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"जु"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"कंबा"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"मेंदे"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"ओहीबवा"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ओरोमो (अफ़ान)"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"कावी"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ओस्सेटी"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"कबार्डी भाषा"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"स्रनान् टॉंगो"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"पंजाबी"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"डुआला"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"सेरेर"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"रेज़ीयन की लीपोवाज़ डायलेक्ट"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"पाली"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"पोलिश"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"मध्य डच"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"पख़्तु"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"पुर्तगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"मध्य आईरीश भाषा"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"वर्गीकरण"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"त्याप्"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ब्रज"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"पंचाग"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"लाओ"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"क्वेचुआ"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"ज़ापोतेक"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"बड़ो"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"लाना"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ईथोपियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"रेह्टो-रोमान्स"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"किरून्दी"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"मुद्रा"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"रूमानीयन्"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(u"साहो"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"रुसी"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"किन्यारुआण्डा"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"ब्लीस चिन्ह"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"मीकमाक"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"सुकुमा"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"अंग्रेज़ी (ऑस्ट्रेलिया का)"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"संस्कृत्"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"सार्दीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"सुसु"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"सिंधी"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"उत्तरी सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"मिनंगकाबाउ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"सांग्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"सर्बो-क्रोएशन्"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"सींहाला"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"सुमेरिअन"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"स्लोवाक्"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"स्लोवेनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"सामोअन"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"शोना"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"सोमाली"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"आल्बेनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"सर्बियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"स्वाटि"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"सुन्दानी"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"नाटीसोन डायलेक्ट"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"स्वीडिश"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"स्वाहिली"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ईबान्"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"तमिळ"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"बुरियात"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"मध्य एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"पश्चिमी ऐशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"ताजिक्"_s)
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
			$of(u"तिग्रीन्या"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"कोरो"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"अंग्रेज़ी (कनाडाई)"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"तुर्कमेन"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"तागालोग"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"त्स्वाना"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"सोंगा"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"टाटर्"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"द्युआला"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ट्वी"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"टाहिटि"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"सान जीओर्जीओ / बीला डायलेक्ट"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"यूरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"पूर्वी यूरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"उत्तरी यूरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"पश्चिमी यूरोप्"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"उईग़ुर"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"पुरानी इटैलियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"कोरियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"आम"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"यूक्रेनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ऊर्दु"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"पारम्पारिक रेसीयन वर्तनी 1994"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"कालमीक"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"ज़ेनागा"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"उज़बेक्"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"ख़ासी"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"जर्मन वर्तनी 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"सील्होटी नागरी"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"वेंडा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"चीनी गणतंत्र पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"वियेतनामी"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"ख़ोतानी"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"तारास्कीएवीचा वर्तनी"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"वोलापोक"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"पारंपरीक सिरिआक"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ओस्मानिया"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"गा"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"वालुन"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"सिरिआक"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"लीडीयन"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"सुमेरो अक्काड़ी कुनेईफॉर्म"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"वोलोफ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"युनीफाईड कैनेडियन अबॉरीजीनल सीलैबीक्स"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"गायो"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"मंगोलियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"मांचु"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"फ्रैक्तुर लैटिन"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"ग्बाया"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"मणीपुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"लैटिन"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"गैलीक लैटिन"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ख़ोसा"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ब्लीन"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"लीसीयन"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ओसेज"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"मुन्"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"मोहोक"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"यीद्दीश"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"मोस्सी"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"सीरीआक"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"देसेरट्"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"योरूबा"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"पश्चीमी सीरीआक"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"तुर्की ओटोमान"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"एस्ट्रांगलो सीरीआक"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"ज़ुआंग"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"कारियन"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"बोपोमोफो"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"पुरानी पर्मीक्"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ज़ुलू"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"दूरभाष निर्देशिका वर्गीकरण"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"एकस्वरीय"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"जोर्जीयन"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"कींबुंडु"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"कॅम"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"गीज़्"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"पूर्वी सीरीआक"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"टागालॉग"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"मीस्री डैमोटीक्"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"मीस्री हैरैटीक्"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"मीस्री हैरोग्लीफ़्"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"जोर्जीयन खुतसुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"चीनी (सरलीकृत)"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"पुरानी हंगैरीयन"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"कोंकणी"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"पारम्पारिक जर्मन वर्तनी 1901"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"कोस्राईयन्"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"चीनी (पारम्परिक)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"सूडानी"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"क्पेले"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ईलोको"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"सीप्रीओट्"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"युनीफाईड तुर्की लैटीनी वर्तनी"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"काद्दौ"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"क्रीक"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"ग्लैगोलिटीक"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"गीलबर्टी"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"चिरूकी"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"कारीब्"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"कराचय् बलकार्"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ईंगुष"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"करेलियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"एफीक्"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"कुरुख़्"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		})
	}));
	return data;
}

LocaleNames_brx::LocaleNames_brx() {
}

$Class* LocaleNames_brx::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_brx, name, initialize, &_LocaleNames_brx_ClassInfo_, allocate$LocaleNames_brx);
	return class$;
}

$Class* LocaleNames_brx::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun