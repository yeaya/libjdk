#include <sun/util/resources/cldr/ext/LocaleNames_hi.h>

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

$MethodInfo _LocaleNames_hi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_hi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_hi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_hi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_hi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_hi_MethodInfo_
};

$Object* allocate$LocaleNames_hi($Class* clazz) {
	return $of($alloc(LocaleNames_hi));
}

void LocaleNames_hi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_hi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_TR, u"तुर्की"_s);
	$var($String, metaValue_ar, u"अरबी"_s);
	$var($String, metaValue_bn, u"बंगाली"_s);
	$var($String, metaValue_bo, u"तिब्बती"_s);
	$var($String, metaValue_el, u"यूनानी"_s);
	$var($String, metaValue_gu, u"गुजराती"_s);
	$var($String, metaValue_he, u"हिब्रू"_s);
	$var($String, metaValue_hy, u"आर्मेनियाई"_s);
	$var($String, metaValue_ja, u"जापानी"_s);
	$var($String, metaValue_km, u"खमेर"_s);
	$var($String, metaValue_kn, u"कन्नड़"_s);
	$var($String, metaValue_ko, u"कोरियाई"_s);
	$var($String, metaValue_la, u"लैटिन"_s);
	$var($String, metaValue_lo, u"लाओ"_s);
	$var($String, metaValue_ml, u"मलयालम"_s);
	$var($String, metaValue_mn, u"मंगोलियाई"_s);
	$var($String, metaValue_or, u"उड़िया"_s);
	$var($String, metaValue_si, u"सिंहली"_s);
	$var($String, metaValue_ta, u"तमिल"_s);
	$var($String, metaValue_te, u"तेलुगू"_s);
	$var($String, metaValue_th, u"थाई"_s);
	$var($String, metaValue_bug, u"बगिनीस"_s);
	$var($String, metaValue_ccp, u"चकमा"_s);
	$var($String, metaValue_chr, u"चेरोकी"_s);
	$var($String, metaValue_cop, u"कॉप्टिक"_s);
	$var($String, metaValue_peo, u"पुरानी फारसी"_s);
	$var($String, metaValue_vai, u"वाई"_s);
	$var($String, metaValue_zbl, u"ब्लिसिम्बॉल्स"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"कोलोनियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ओगम"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"मिरांडी"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"चिह्न"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"अत्सम"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"मारवाड़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"तगबन्वा"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ईमोजी"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"जीवा बोली"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
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
			$of(u"फाग्स-पा"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"टिम्ने"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"टेसो"_s)
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
			$of("AC"_s),
			$of(u"असेंशन द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"रारोतोंगन"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"तेतुम"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"एंडोरा"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"संयुक्त अरब अमीरात"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"फ़्लेमिश"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"अफ़गानिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"एंटिगुआ और बरबुडा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"इथियोपिक कैलेंडर"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"एंग्विला"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"समय क्षेत्र"_s)
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
			$of(u"तेन्गवार"_s)
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
			$of(u"अर्जेंटीना"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"इंस्क्रिपश्नल पार्थियन"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"अमेरिकी समोआ"_s)
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
			$of(u"अमेरिकी अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"एलैंड द्वीपसमूह"_s)
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
			$of(u"बोस्निया और हर्ज़ेगोविना"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"बारबाडोस"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"सिबुआनो"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"बांग्लादेश"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"कुमीक"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"बेल्जियम"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"मध्यकालीन हाइ जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"बुर्किना फ़ासो"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"बुल्गारिया"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"बहरीन"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"बुरुंडी"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"बेनिन"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"सेंट बार्थेलेमी"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"बरमूडा"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"क्यूतनाई"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"एर्ज़या"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ब्रूनेई"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"बोलीविया"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"कैरिबियन नीदरलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ब्राज़ील"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"बहामास"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"सोगा"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"भूटान"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"बोवेत द्वीप"_s)
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
			$of(u"बेलीज़"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"विसिबल स्पीच"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"फ़ारसी कैलेंडर"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"हिब्रू संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"कनाडा"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"कोकोस (कीलिंग) द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"माज़न्देरानी"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"कांगो - किंशासा"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"मध्य अफ़्रीकी गणराज्य"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"कांगो – ब्राज़ाविल"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"स्विट्ज़रलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"कोट डी आइवर"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"कुक द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"चिली"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"कैथी"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"कैमरून"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"चीन"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"कोलंबिया"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"क्लिपर्टन द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"कोस्टारिका"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"क्यूबा"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"केप वर्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"क्यूरासाओ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"क्रिसमस द्वीप"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"साइप्रस"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"चेकिया"_s)
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
			$of(u"पुरातन हाइ जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"अचाइनीस"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"शिगा"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"डिएगो गार्सिया"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"देवनागरी अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"जिबूती"_s)
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
			$of("type.nu.armnlow"_s),
			$of(u"आर्मेनियाई लोअरकेस संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"डोमिनिकन गणराज्य"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"गोरोन्तालो"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"गॉथिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"मेइतेइ मायेक"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ज़ूनी"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"टाइग्रे"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"अल्जीरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"पंगासीनान"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"आधी-चौड़ाई"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"पाह्लावी"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"सेउटा और मेलिला"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"चिब्चा"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"पाम्पान्गा"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"इक्वाडोर"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"पापियामेन्टो"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"अदान्गमे"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"एस्टोनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"तिव"_s)
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
			$of(u"छगाताई"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"पलोउआन"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"चूकीस"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"चिनूक जारगॉन"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"मारी"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"शिपेव्यान"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"चोक्तौ"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"इरिट्रिया"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"स्पेन"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"इथियोपिया"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"यूरोपीय संघ"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"एलामाइट"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ग्रेगोरियन कैलेंडर"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"यूरोज़ोन"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"शेयेन्न"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"गुजराती अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"सिन्धु"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"अदिघे"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"फ़िनलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"फ़िजी"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"फ़ॉकलैंड द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"माइक्रोनेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"स्थानीय प्रकार"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"फ़ेरो द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"फ़्रांस"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"तोकेलाऊ"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"ग्रेबो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"भारतीय राष्ट्रीय कैलेंडर"_s)
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
			$of(u"वॉटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"यूनाइटेड किंगडम"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"नाइजीरियाई पिडगिन"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ग्रेनाडा"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"जॉर्जिया"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"फ़्रेंच गुयाना"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"गर्नसी"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"घाना"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"ताई ली"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"जिब्राल्टर"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"अफ्रिहिली"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ग्रीनलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"मध्यकालीन अंग्रेज़ी"_s)
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
			$of(u"ग्वाडेलूप"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"इक्वेटोरियल गिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"यूनान"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"दक्षिण जॉर्जिया और दक्षिण सैंडविच द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"ग्वाटेमाला"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"गुआम"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"गिनी-बिसाउ"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"त्लिंगित"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"क्लिंगन"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"नया ताई लु"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"गुयाना"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"सोरानी कुर्दिश"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"कोई भाषा सामग्री नहीं"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ऑस्ट्रियाई जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"हाँग काँग (चीन विशेष प्रशासनिक क्षेत्र)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"हर्ड द्वीप और मैकडोनॉल्ड द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"होंडूरास"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"क्रोएशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"अग्हेम"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"स्विस जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"इस्लामी कैलेंडर (उम्म अल-क़ुरा)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"हैती"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"हंगरी"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"तामाशेक"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"कैनेरी द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"मिन नान"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"इंडोनेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"आयरलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"नीपोलिटन"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"नामा"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ज़ाज़ा"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"इज़राइल"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"आइल ऑफ़ मैन"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"भारत"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"यूरोपीय क्रमण नियम"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ब्रिटिश हिंद महासागरीय क्षेत्र"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"इराक"_s)
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
			$of("Zmth"_s),
			$of(u"गणितीय संकेतन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"थाई अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"कम्प्यूटर"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"बंगाली अंक"_s)
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
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"जमैका"_s)
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
			$of("ain"_s),
			$of(u"ऐनू"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"गुसी"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"न्यासा टोन्गा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"कन्नड़ अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"कायाह ली"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"स्विस उच्च जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"ध्\u200dवन्यात्मक क्रमित करने का क्रम"_s)
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
			$of(u"लैटिन अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"किर्गिज़स्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"कंबोडिया"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"किरिबाती"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"कोमोरोस"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"सेंट किट्स और नेविस"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"विरासत"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"कनाडाई फ़्रेंच"_s)
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
			$of(u"पॉलार्ड फोनेटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"स्विस फ़्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"कुवैत"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"टोक पिसिन"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"कैमेन द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"कज़ाखस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"सिरिलिक"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"लाओस"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"लेबनान"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"सेंट लूसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"फोएनिशियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"ओल्ड चर्च स्लावोनिक सिरिलिक"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ग्विचइन"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"निचला जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"लिचेंस्टीन"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"श्रीलंका"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"अक्कादी"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"लाइबेरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"लेसोथो"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"बुक पाहलवी"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"लिथुआनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"लग्ज़मबर्ग"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"लातविया"_s)
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
			$of(u"लादीनो"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"वुंजो"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"लाह्न्डा"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"लांगि"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"थाना"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"मोरक्को"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"मोनाको"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"मॉल्डोवा"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"मोंटेनेग्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"सेंट मार्टिन"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"लाम्बा"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"मेडागास्कर"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"मार्शल द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"अलेउत"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"वाई अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"उत्तरी मकदूनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"माली"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"म्यांमार (बर्मा)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"मंगोलिया"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"नेवाड़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"मकाऊ (विशेष प्रशासनिक क्षेत्र चीन)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"उत्तरी मारियाना द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"मार्टीनिक"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"मॉरिटानिया"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"मोंटसेरात"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"माल्टा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"UNGEGN लिप्यंतरण"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"मॉरीशस"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"दक्षिणी अल्ताई"_s)
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
			$of(u"मोज़ांबिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"इंस्क्रिपश्नल पाहलवी"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"नामीबिया"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"उप-सहारा अफ़्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"हिब्रू पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"शब्दकोश क्रम विन्यास"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"न्यू कैलेडोनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"वेड-जाइल्स रोमनाइज़ेशन"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"नाइजर"_s)
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
			$of("trv"_s),
			$of(u"तारोको"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"सॉल्टर पाहलवी"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"निकारागुआ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"पाहो ह्मोन्ग"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"नीदरलैंड"_s)
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
			$of(u"नाउरु"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"नीयू"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"फोनिशियन"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"रोम्बो"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"त्सिमीशियन"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"न्यूज़ीलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"रोमानी"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"मेरोइटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"क्रीमीन तुर्की"_s)
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
			$of(u"अंगिका"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"सेसेल्वा क्रिओल फ्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
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
			$of(u"काशुबियन"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ब्रिटिश अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"पेरू"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"फ़्रेंच पोलिनेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"पापुआ न्यू गिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"फ़िलिपींस"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"पाकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"पोलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"इवोन्डो"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"सेंट पिएरे और मिक्वेलान"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"पिटकैर्न द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"पोर्टो रिको"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"फ़िलिस्तीनी क्षेत्र"_s)
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
			$of("type.nu.greklow"_s),
			$of(u"यूनानी लोअरकेस संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"पराग्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"तम्बूका"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"क़तर"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"नियुआन"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"आउटलाइंग ओशिनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"लेज़्घीयन"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"तुवालु"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"ताई विएत"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"विश्व"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"अफ़्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"उत्तर अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"रियूनियन"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"दक्षिण अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"लोज्बान"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"रीजांग"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ओशिआनिया"_s)
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
			$of(u"रवांडा"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"मनीशीन"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"युगारिटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"खारोशथी"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"सऊदी अरब"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"पोह्नपिएन"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"मनडेन"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"सोलोमन द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"टासवाक"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"पश्चिमी अफ़्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"सेशेल्स"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"सूडान"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"मध्य अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"स्वीडन"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"पूर्वी अफ़्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"ऐरेमेक"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"उत्तरी अफ़्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"सिंगापुर"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"सेंट हेलेना"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"सख्त पंक्ति विच्छेद शैली"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"मध्य अफ़्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"स्लोवेनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"दक्षिणी अफ़्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"स्वालबार्ड और जान मायेन"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"अमेरिकाज़"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"स्लोवाकिया"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"सिएरा लियोन"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"सैन मेरीनो"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"सेनेगल"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"सोमालिया"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"मापूचे"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"अरापाहो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"पारंपरिक तमिल संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"सूरीनाम"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"दक्षिण सूडान"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"साओ टोम और प्रिंसिपे"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"अल सल्वाडोर"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"नज्दी अरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"सिंट मार्टिन"_s)
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
			$of(u"अरावक"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"यापीस"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ट्रिस्टन दा कुना"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"असु"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"अमेरिकी मापन प्रणाली"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"उत्तरी अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"तुर्क और कैकोज़ द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"यांगबेन"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"चाड"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of(u"ज़ौजी"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"फ़्रांसीसी दक्षिणी क्षेत्र"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"टोगो"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"थाईलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ताज़िकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"कैरिबियन"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"तोकेलाउ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"तिमोर-लेस्त"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"येंबा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"हांगुल आरंभिक व्\u200dयंजन द्वारा खोजें"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"तुर्कमेनिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ट्यूनीशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"टोंगा"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"त्रिनिदाद और टोबैगो"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"तुवालू"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ताइवान"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"अस्तुरियन"_s)
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
			$of("nmg"_s),
			$of(u"क्वासिओ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"अज्ञात लिपि"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"यूक्रेन"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"अरोमानियन"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"पूर्वी एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"तुवीनियन"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"कांगो स्वाहिली"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"दक्षिणी एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"हैडा"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"दक्षिण-पूर्व एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"युगांडा"_s)
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
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"यू॰एस॰ आउटलाइंग द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"संयुक्त राष्ट्र"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"संयुक्त राज्य"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"हवाई"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"सरलीकृत चीनी वर्गीकरण"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"उरूग्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"प्रुशियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"उज़्बेकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"मध्य एटलस तमाज़ित"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"स्ट्रोक वर्गीकरण"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"गैम्बू"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"वेटिकन सिटी"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"पुरानी प्रोवेन्सल"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"सेंट विंसेंट और ग्रेनाडाइंस"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"वेनेज़ुएला"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ब्रिटिश वर्जिन द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"यू॰एस॰ वर्जिन द्वीपसमूह"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"वियतनाम"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"वनुआतू"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"नोगाई"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"रवा"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"पुराना नॉर्स"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ऑस्ट्रेलेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"मेलानेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"वालिस और फ़्यूचूना"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"पारम्पारिक वर्गीकरण"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"माइक्रोनेशियाई क्षेत्र"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"नगोंबा"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"लैकोटा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"वित्तीय अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"संगतता के लिए पिछला क्रमण"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"वाल्सर"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"समोआ"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"वलामो"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"वाशो"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"सूडो-एक्सेंट"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"वारै"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"सूडो-बायडायरेक्शनल"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"अवधी"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"पोलिनेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"कोसोवो"_s)
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
			$of(u"ऑल चिकी"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"वॉल्पेरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"बटकी"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"यमन"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"एन्को"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"मानक सॉर्ट क्रम"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"फैन्ग"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"फन्टी"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"सांकेतिक लेख"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"मायोते"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"दक्षिण अफ़्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"ढीली पंक्ति विच्छेद शैली"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"देवनागरी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"जॉर्जियन संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"हिरागाना"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ज़ाम्बिया"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"पिनयिन रोमनाइज़ेशन"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ज़िम्बाब्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"अज्ञात क्षेत्र"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"रूनिक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"मेट्रिक प्रणाली"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"आईएसओ-8601 कैलेंडर"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"मोंगो"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"उत्तरी सोथो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"तेलुगू अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"लुईज़ियाना क्रियोल"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"लोज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"मैकहैमे"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"सरलीकृत चीनी वित्तीय संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"हिलिगेनन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"विस्तृत अरबी-भारतीय अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"नुएर"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"दाकोता"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"पूर्ण चौड़ाई अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"हिताइत"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"दार्गवा"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"तैता"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"मयान हाइरोग्लिफ्स"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"उत्तरी लूरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"पारम्परिक नेवारी"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"उदमुर्त"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"लिम्बू"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"सन्डावे"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"रोमन संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"याकूत"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"सामैरिटन अरैमिक"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"सैम्बुरु"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"सासाक"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"संथाली"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"तिफिनाघ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"जुदेओ-पर्शियन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"सांख्यिक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"स्थानीय अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"न्गाम्बे"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"गुरमुखी"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"ल्यूबा-लुलुआ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"पूर्ण-चौड़ाई"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"सैंगु"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"लुइसेनो"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"न्यानकोल"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"न्यामवेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"लुन्डा"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"न्योरो"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"ल्युओ"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"फ़िलिपीनो"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"ह्मॉंग"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"डिलैवेयर"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"मिज़ो"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"बलूची"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"स्लेव"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"बालिनीस"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"युगैरिटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"ल्युईआ"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"बसा"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"जुदेओ-अरेबिक"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"यूरोपीय स्पेनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"न्ज़ीमा"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"स्कॉट्स"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"सिसिलियन"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"अफ़ार"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"अब्ख़ाज़ियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"नस्तालीक़"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"अवस्ताई"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"अफ़्रीकी"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"अकन"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"अम्हेरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"अर्गोनी"_s)
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
			$of(u"जापानी सिलेबरीज़"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"असमिया"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"लीनियर A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"अवेरिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"लीनियर बी"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"दक्षिणी कार्डिश"_s)
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
			$of("ba"_s),
			$of(u"बशख़िर"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"रेडिकल-स्ट्रोक क्रम विन्यास"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"बेलारूसी"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"बुल्गारियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"बिस्लामा"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"बाम्बारा"_s)
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
			$of(u"डोग्रिब"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ब्रेटन"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"बोस्नियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"म्यांमार"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"लाओ अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"सेना"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"एन्‘को"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"सेल्कप"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"कातालान"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"कोयराबोरो सेन्नी"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"चेचन"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"कमोरो"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"संशोधित वर्तनी"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"कोर्सीकन"_s)
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
			$of(u"चेक"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"चर्च साल्विक"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"चूवाश"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"वेल्श"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"इथियोपियाई संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"यी"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"डेनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"यूरोपीय पुर्तगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"मानक मुद्रा प्रारूप"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"बेजा"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"दिन्का"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"बेम्बा"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"पुरानी आइरिश"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"मंगोलियाई अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"दिवेही"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"लैटिन अमेरिकी स्पेनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ज़ोन्गखा"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"बेना"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"चीनी पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"झार्मा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"यूनानी संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ईवे"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"सामान्य पंक्ति विच्छेद शैली"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"मोलडावियन"_s)
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
			$of(u"एस्पेरेंतो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"पारम्पारिक चीनी वर्गीकरण"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"स्पेनी"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"एस्टोनियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"हांब"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"बास्क"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"बुहिद"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"हंगुल"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"समरिटन"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"तैचेल्हित"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"ऊपरी सॉर्बियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"हान"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"शैन"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"हनुनू"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"फ़ारसी"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"सरलीकृत"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"पश्चिमी अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"पारंपरिक"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"फुलाह"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"फ़िनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"फिजियन"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"फॉन"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"पश्चिमी बलोची"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"कैंटोनीज़"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"फ़ैरोइज़"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"BGN लिप्यंतरण"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"उम्बुन्डु"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"फ़्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"सिदामो"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"पश्चिमी फ़्रिसियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"आयरिश"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"स्कॉटिश गाएलिक"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"गैलिशियन"_s)
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
			$of(u"अज्ञात भाषा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"इथियोपिक अमेते अलेम कैलेंडर"_s)
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
			$of(u"हौसा"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"हिन्दी"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"हूपा"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"बिकोल"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"बिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"हिरी मोटू"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"क्रोएशियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"हैतियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"हंगेरियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"हरैरो"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"केजन फ़्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"इंटरलिंगुआ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"जामो"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"इंडोनेशियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"तिब्बती अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ईन्टरलिंगुइ"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ईग्बो"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"सिचुआन यी"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"मध्यकालीन फ़्रांसीसी"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"इनुपियाक्"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"पुरातन फ़्रांसीसी"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"इडौ"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"पूर्वी फ़्रीसियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"उत्तरी फ़्रीसियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"आइसलैंडिक"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"इतालवी"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"इनूकीटूत्"_s)
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
			$of(u"सराती"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"डोग्री"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"दक्षिणी सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"जावानीज़"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"शावियान"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"मादुरीस"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"ल्युल सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"मगही"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"मैथिली"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"इनारी सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"जॉर्जियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"सिक्सिका"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"मकासर"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"वू चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"स्कोल्ट सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"मन्डिन्गो"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"कोंगो"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"गोथिक"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"किकुयू"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"मसाई"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"क्वान्यामा"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"कज़ाख़"_s)
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
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"कनुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"कश्मीरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"किर्थ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"लेपचा"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"अवेस्तन"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"कुर्दिश"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"कोमी"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"कोर्निश"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"किर्गीज़"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"सोनिन्के"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"लग्ज़मबर्गी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"मलयालम अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"गांडा"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"रोन्गोरोन्गो"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"लिंबर्गिश"_s)
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
			$of(u"फ्रीयुलीयान"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"इम्पीरियल मापन प्रणाली"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"लिथुआनियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"ल्यूबा-कटांगा"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"लातवियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"सोग्डिएन"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"मालागासी"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"मार्शलीज़"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"डिफ़ॉल्ट यूनिकोड सॉर्ट क्रम"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"माओरी"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"मकदूनियाई"_s)
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
			$of(u"मराठी"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"मलय"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"माल्टीज़"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"बर्मीज़"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"सौराष्ट्र"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"मोक्ष"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"निचला सॉर्बियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"इम्पिरियल आर्मेनिक"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"नाउरू"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"सामान्य-उद्देश्य खोज"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"नॉर्वेजियाई बोकमाल"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"उत्तरी देबेल"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"नेपाली"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"डोन्गा"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"मंदार"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"डच"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"नॉर्वेजियाई नॉयनॉर्स्क"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"नॉर्वेजियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"दक्षिण देबेल"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"नावाजो"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"कारा-कल्पक"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"न्यानजा"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"काचिन"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"कबाइल"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"बहुस्वरीय"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ओसीटान"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ज्जु"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"कम्बा"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"मेन्डे"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"ओजिब्वा"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"मेरु"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"आर्मेनियाई संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ओरोमो"_s)
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
			$of(u"ओस्सेटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"कबार्डियन"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"मोरीस्येन"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"स्रानान टॉन्गो"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"पंजाबी"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"दुआला"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"सेरेर"_s)
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
			$of(u"मध्यकालीन पुर्तगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"दांगी कैलेंडर"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"पश्तो"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"पुर्तगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"मध्यकालीन आइरिश"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"सॉर्ट क्रम"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ब्राज़ीली पुर्तगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"त्याप"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"मैखुवा-मीट्टो"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"मुद्रा प्रारूप"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ब्रज"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"कैलेंडर"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"मेटा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 घंटों की प्रणाली (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 घंटों की प्रणाली (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"साहो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"म्यांमार अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"क्वेचुआ"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"ज़ेपोटेक"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"बोडो"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"लाना"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"मैकोंड"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"इथियोपियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 घंटों की प्रणाली (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 घंटों की प्रणाली (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"रोमान्श"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"रुन्दी"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"मुद्रा"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"रोमानियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"उड़िया अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"चीनी दशमलव संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"रूसी"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"किन्यारवांडा"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"काबुवेर्दियानु"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"मिकमैक"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"सुकुमा"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ऑस्ट्रेलियाई अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"संस्कृत"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"सार्दिनियन"_s)
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
			$of(u"नॉर्दन सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"मिनांग्काबाउ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"सांगो"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"सेर्बो-क्रोएशियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"सुमेरियन"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"स्लोवाक"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"स्लोवेनियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"ग्रन्थ"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"सामोन"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"शोणा"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"सोमाली"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"अरबी-भारतीय अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"अल्बानियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"सर्बियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"स्वाती"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"लेखांकन मुद्रा प्रारूप"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"दक्षिणी सेसेथो"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"जावानीस"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"सुंडानी"_s)
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
			$of("type.nu.hantfin"_s),
			$of(u"पारंपरिक चीनी वित्तीय संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"इबिबियो"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"इबान"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
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
			$of(u"पश्चिमी एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"ताजिक"_s)
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
			$of(u"कनाडाई अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"तुर्कमेन"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"टैगलॉग"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"सेत्स्वाना"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"टोंगन"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"जोला-फोंई"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"जापानी संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"सोंगा"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"कोमोरियन"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"तातार"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"ड्युला"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ट्वी"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"ताहितियन"_s)
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
			$of("dzg"_s),
			$of(u"दज़ागा"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"पश्चिमी यूरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"उइगर"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"पुरानी इटली"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"सामान्य"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"यूक्रेनियाई"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"कोप्टिक कैलेंडर"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"उर्दू"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"काल्मिक"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"ज़ेनान्गा"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"उज़्बेक"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"खासी"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"जर्मेनी की 1996 वर्तनी"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"निचली सैक्सन"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"सिलोती नागरी"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"वेन्दा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"चीनी गणतंत्र पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"वियतनामी"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"खोतानीस"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"कोयरा चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"घंटों का चक्र (12 बनाम 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"वोलापुक"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"क्लासिकल सिरिएक"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ओस्मान्या"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"किश"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"गा"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"वाल्लून"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"गागौज़"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"सिरिएक"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"लिडियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"सुमेरो अक्कादियन सुनिफॉर्म"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"वोलोफ़"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"मानक मोरक्कन तामाज़ाइट"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"आधुनिक मानक अरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"युनिफाइड कैनेडियन एबोरिजनल सिलेबिक्स"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"गायो"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"मन्चु"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"फ़्रैक्टुर लातिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"ग्बाया"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"मणिपुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"गेली लातिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"सरलीकृत चीनी संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"पारंपरिक चीनी संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ख़ोसा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"रोमन लोअरकेस संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ब्लिन"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"लिशियन"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ओसेज"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"मून"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"मोहौक"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"काको"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"यहूदी"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"मोस्सी"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"सिरियेक"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"डेसरेट"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"योरूबा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"परंपरागत अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"मैक्सिकन स्पेनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"पश्चिम सिरिएक"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ओटोमान तुर्किश"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"एस्त्रेन्जेलो सिरिएक"_s)
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
			$of(u"करैन"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"कलेंजिन"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"बोपोमोफ़ो"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"ओल्ड परमिक"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"पंक्ति विच्छेद शैली"_s)
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
			$of(u"जॉर्जियन"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"किम्बन्दु"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"जापानी वित्तीय संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"चाम"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"गीज़"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"पूर्व सिरिएक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"पुनर्निर्मित क्रम विन्यास"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"टैगालोग"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"इजिप्शियन डेमोटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"इजिप्शियन हाइरेटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"एम्बु"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"इजिप्शियन हाइरोग्लिफ्स"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"जॉर्जियन खुतसुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"सरलीकृत चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"कोमी-पर्मयाक"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"ऑल्ड हंगेरियन"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"कोंकणी"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"पारम्पारिक जर्मन वर्तनी"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"कोसरैन"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"पारंपरिक चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"सूडानी"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"क्पेल"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"खमेर अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"इलोको"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"काइप्रायट"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"मुंडैंग"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"गुरमुखी अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"एकाधिक भाषाएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"कैड्डो"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"मापन प्रणाली"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"क्रीक"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"ग्लेगोलिटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"गिल्बरतीस"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"कैरिब"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"तमिल अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"कराचय-बल्कार"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"इंगुश"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"दारी"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"करेलियन"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"एफिक"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"संख्याएँ"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"कुरूख"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"शम्बाला"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"बफिआ"_s)
		})
	}));
	return data;
}

LocaleNames_hi::LocaleNames_hi() {
}

$Class* LocaleNames_hi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_hi, name, initialize, &_LocaleNames_hi_ClassInfo_, allocate$LocaleNames_hi);
	return class$;
}

$Class* LocaleNames_hi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun