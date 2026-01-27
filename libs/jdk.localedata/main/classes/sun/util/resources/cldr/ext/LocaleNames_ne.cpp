#include <sun/util/resources/cldr/ext/LocaleNames_ne.h>

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

$MethodInfo _LocaleNames_ne_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ne, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ne, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ne_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ne",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ne_MethodInfo_
};

$Object* allocate$LocaleNames_ne($Class* clazz) {
	return $of($alloc(LocaleNames_ne));
}

void LocaleNames_ne::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ne::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, u"नाउरू"_s);
	$var($String, metaValue_WS, u"सामोआ"_s);
	$var($String, metaValue_ar, u"अरबी"_s);
	$var($String, metaValue_bo, u"तिब्बती"_s);
	$var($String, metaValue_el, u"ग्रीक"_s);
	$var($String, metaValue_gu, u"गुजराती"_s);
	$var($String, metaValue_he, u"हिब्रु"_s);
	$var($String, metaValue_hy, u"आर्मेनियाली"_s);
	$var($String, metaValue_ja, u"जापानी"_s);
	$var($String, metaValue_jv, u"जाभानी"_s);
	$var($String, metaValue_ka, u"जर्जियाली"_s);
	$var($String, metaValue_km, u"खमेर"_s);
	$var($String, metaValue_la, u"ल्याटिन"_s);
	$var($String, metaValue_lo, u"लाओ"_s);
	$var($String, metaValue_ta, u"तामिल"_s);
	$var($String, metaValue_te, u"तेलुगु"_s);
	$var($String, metaValue_th, u"थाई"_s);
	$var($String, metaValue_ban, u"बाली"_s);
	$var($String, metaValue_chr, u"चेरोकी"_s);
	$var($String, metaValue_got, u"गोथिक"_s);
	$var($String, metaValue_syr, u"सिरियाक"_s);
	$var($String, metaValue_vai, u"भाइ"_s);
	$var($String, metaValue_Deva, u"देवानागरी"_s);
	$var($String, metaValue_Hans, u"सरलिकृत चिनियाँ"_s);
	$var($String, metaValue_Hant, u"परम्परागत चिनियाँ"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"कोलोग्नियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ओघाम"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"मिरान्डी"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"प्रतीकहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"अट्साम"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"माडवारी"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"एमिलियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of(u"मेन्टावाई"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"टाग्वान्वा"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"इमोजी"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"मिनग्रेलियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"चाक्मा"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"पुरातन इजिप्टी"_s)
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
			$of("AC"_s),
			$of(u"असेन्सन टापु"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"रारोटोङ्गान"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"टेटुम"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"अन्डोर्रा"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"संयुक्त अरब इमिराट्स"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"फ्लेमिस"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"अफगानिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"एन्टिगुआ र बारबुडा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"इथिओपिक पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"गिलाकी"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"आङ्गुइला"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"अल्बेनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"आर्मेनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"टेङ्वार"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"अङ्गोला"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"अन्टारटिका"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"अर्जेन्टिना"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"पिआरटी"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"अमेरिकी समोआ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"अष्ट्रिया"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"अस्ट्रेलिया"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"अरुबा"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"अमेरिकी अङ्ग्रेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"अलान्ड टापुहरु"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"म्येने"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"अजरबैजान"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"पूर्वी आर्मेनियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"बोस्निया एण्ड हर्जगोभिनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"बार्बाडोस"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"सेबुआनो"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"बङ्गलादेश"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"कुमिक"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"बेल्जियम"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"मध्य उच्च जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"बुर्किना फासो"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"बुल्गेरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"बहराइन"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"बुरूण्डी"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"बेनिन"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"सेन्ट बार्थेलेमी"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"बर्मुडा"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"कुतेनाइ"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"इर्ज्या"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ब्रुनाइ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"बोलिभिया"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"क्यारिवियन नेदरल्याण्ड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ब्राजिल"_s)
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
			$of(u"भुटान"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"बुभेट टापु"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"बोट्स्वाना"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"बेलारूस"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"बेलिज"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"दृश्यमय वाणी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"फारसी पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"हिब्रु अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"क्यानाडा"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"कोकोस (किलिंग) टापुहरु"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"मजानडेरानी"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"कङ्गो - किन्शासा"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"मध्य अफ्रिकी गणतन्त्र"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"कङ्गो ब्राजाभिल"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"स्विजरल्याण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"कोट दिभोर"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"कुक टापुहरु"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"चिली"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"क्थी"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"क्यामरून"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"चीन"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"कोलोम्बिया"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"क्लिप्पेर्टन टापु"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"कोष्टारिका"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"क्युबा"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"केप भर्डे"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"कुराकाओ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"क्रिष्टमस टापु"_s)
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
			$of(u"पुरातन उच्च जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"अचाइनिज"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"चिगा"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"डियगो गार्सिया"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"गोवा कोन्कानी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(metaValue_Deva)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"डिजिबुटी"_s)
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
			$of(u"गोन्डी"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ब्रेल"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"ब्राह्मी"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"डोमिनिका"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"आर्मेनियाली साना अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"डोमिनिकन गणतन्त्र"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"गोरोन्टालो"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of(u"मुख्य-फ्राङ्कोनियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"माइटेइ मायेक"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"जुनी"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"टिग्रे"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"अल्जेरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"पाङ्गासिनान"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"पाहलावी"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"सिउटा र मेलिला"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"चिब्चा"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"पामपाङ्गा"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"इक्वेडोर"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"पापियामेन्तो"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"अदाङमे"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"इस्टोनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"इजिप्ट"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"पश्चिमी साहारा"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"चागाटाई"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"पालाउवाली"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"चुकेसे"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"चिनुक जार्गन"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"मारी"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"चिपेव्यान"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"चोक्टाव"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"एरिट्रीया"_s)
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
			$of(u"युरोपियन युनियन"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"एलामाइट"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ग्रेगोरियन पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"युरोजोन"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"चेयेन्ने"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"गुजराती अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"इन्दुस"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"अदिघे"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"फिनल्याण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"फिजी"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"फकल्याण्ड टापुहरु"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"माइक्रोनेसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"फारो टापुहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"फ्रान्स"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"पिकार्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"ग्रेबो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"भारतीय राष्ट्रिय पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"पुरातन ग्रिक"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"गावोन"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"संयुक्त अधिराज्य"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"नाइजेरियाली पिड्जिन"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ग्रेनाडा"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"जर्जिया"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"फ्रान्सेली गायना"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ग्यूर्न्सी"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"घाना"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"टाइले"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"जिब्राल्टार"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"अफ्रिहिली"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ग्रिनल्याण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"मध्य अङ्ग्रेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"गाम्विया"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"गिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ग्वाडेलुप"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"भू-मध्यीय गिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"ग्रीस"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"दक्षिण जर्जिया र दक्षिण स्यान्डवीच टापुहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"ग्वाटेमाला"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"गुवाम"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of(u"पेन्सिलभानियाली जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"गिनी-बिसाउ"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"क्लिङ्गन"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"न्यू टाइ लुइ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"गुयाना"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"मध्यवर्ती कुर्दिस"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"भाषिक सामग्री छैन"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"अस्ट्रिएन जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"हङकङ चिनियाँ विशेष प्रशासनिक क्षेत्र"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"हर्ड टापु र म्याकडोनाल्ड टापुहरु"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"हन्डुरास"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"क्रोएशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"आघेम"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"स्वीस जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"हैटी"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"हङ्गेरी"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"क्यानारी टापुहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"मिन नान चिनियाँ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"इन्डोनेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"पुरातन फारसी"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"आयरल्याण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"नेपोलिटान"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"नामा"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"जाजा"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"इजरायल"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"आइल अफ म्यान"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"भारत"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"बेलायती हिन्द महासागर क्षेत्र"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"इराक"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"इरान"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"आइस्ल्याण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"इटली"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"गणितीय चिन्ह"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"थाई अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"कम्प्युटर"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"बङ्गाली अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"पालाटिन जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"जर्सी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"इस्लामी पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"जमैका"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"बङ्गाली"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"जोर्डन"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of(u"फ्राफ्रा"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"जापान"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"अइनु"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"गुसी"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"न्यास टोङ्गा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"कन्नाडा अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"कायाहली"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"स्वीस हाई जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"इन्ग्रियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"बुद्धिष्ट पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"केन्या"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ल्याटिन अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"किर्गिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"कम्बोडिया"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"किरिबाटी"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"कोमोरोस"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"सेन्ट किट्स र नेभिस"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"कान्नाडा"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"इन्हेरिटेड"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"क्यानेडाली फ्रान्सेली"_s)
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
			$of(u"पोल्लार्ड फोनेटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"स्विस फ्रेन्च"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"कुवेत"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"टोक पिसिन"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"केयमान टापु"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"काजाकस्तान"_s)
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
			$of(u"लेबनन"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"सेन्ट लुसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"फोनिसियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"गुइचिन"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"तल्लो जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"लिकटेन्सटाइन"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"श्रीलङ्का"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"अक्कादियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"कोप्टिक"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"लाइबेरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"केन्द्रीय युपिक"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"लेसोथो"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"बुक पहल्भी"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"लिथुएनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"लक्जेमबर्ग"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"लाट्भिया"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"काताकाना"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"लिबिया"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"लाडिनो"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"भुन्जो"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"अलाबामा"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"लाहन्डा"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"लाङ्गी"_s)
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
			$of(u"माल्डोभा"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"मोन्टेनिग्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"सेन्ट मार्टिन"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"लाम्बा"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"माडागास्कर"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"मार्शल टापुहरु"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"अलेउट"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"उत्तर म्यासेडोनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"माली"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"म्यान्मार (बर्मा)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"मङ्गोलिया"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"नेवारी"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"मकाउ चिनियाँ विशेष प्रशासनिक क्षेत्र"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"घेग अल्बानियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"उत्तरी मारिआना टापु"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"मार्टिनिक"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"माउरिटानिया"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"मोन्टसेर्राट"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"माल्टा"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of(u"कापिज्नोन"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"मौरिसियस"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"दक्षिणी आल्टाइ"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"माल्दिभ्स"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"मालावी"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"मेक्सिको"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"जापानी पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"मलेसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"मोजाम्बिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"फ्लि"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"नामिबिया"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"उप-साहारा अफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"हिब्रु पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"न्यु क्यालेडोनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"नाइजर"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"नोरफोल्क टापु"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"नाइजेरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"टारोको"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"फ्ल्प"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"निकारागुवा"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"पहावह हमोङ्ग"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"नेदरल्याण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"नर्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"नेपाल"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"नियुइ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"फोनिसियन"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"रोम्बो"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"न्युजिल्याण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"मेरियोटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"क्रिमियाली तुर्क"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"पुरातन अङ्ग्रेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ओमन"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"अङ्गिका"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"सेसेल्वा क्रिओल फ्रान्सेली"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"पुरानो पर्सियन"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"प्यानामा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"इस्लामी नागरिक पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"कासुवियन"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"बेलायती अङ्ग्रेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"पेरू"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"मुस्लिम टाट"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"फ्रान्सेली पोलिनेसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"पपुआ न्यू गाइनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"फिलिपिन्स"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"पाकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"पोल्याण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"इवोन्डो"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"सेन्ट पिर्रे र मिक्केलोन"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"पिटकाइर्न टापुहरु"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"पुएर्टो रिको"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"प्यालेस्टिनी भू-भागहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"पोर्चुगल"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"पलाउ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"नियास"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"ग्रीक साना अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"प्याराग्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"टुम्बुका"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"कतार"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"जमैकाली क्रेओले अङ्ग्रेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"पिएडमोन्तेसे"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"निउएन"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"बाह्य ओसनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"एक्सट्रेमादुराली"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"लाज्घियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"टुभालु"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"टाभ्ट"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"विश्व"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"अफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"अओ नागा"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"उत्तर अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"रियुनियन"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"दक्षिण अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"लिङ्गुवा फ्राङ्का नोभा"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"लोज्बान"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"पोन्टिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"रेजाङ"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ओसनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"रोमेनिया"_s)
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
			$of(u"रवाण्डा"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"मानिकाएन"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"युगारिटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"खारोस्थिति"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"साउदी अरब"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"मान्डाएन"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"सोलोमन टापुहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"तासावाक"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"पश्चिमी अफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"सेचेलेस"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"सुडान"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"केन्द्रीय अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"स्विडेन"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"पूर्वी अफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"अरामाइक"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"उत्तरी अफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"सिङ्गापुर"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"सेन्ट हेलेना"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"पङ्क्ति विच्छेदको कडा शैली"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"मध्य अफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"स्लोभेनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"दक्षिणी अफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"सभाल्बार्ड र जान मायेन"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"अमेरिकास"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"स्लोभाकिया"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"सिएर्रा लिओन"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"सान् मारिनो"_s)
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
			$of(u"मापुचे"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"अरापाहो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"परम्परागत तामिल अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"सुरिनेम"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"अराओना"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"दक्षिण सुडान"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"साओ टोमे र प्रिन्सिप"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"अल्जेरियाली अरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"एल् साल्भाडोर"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"सिन्ट मार्टेन"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"सिरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"स्वाजिल्याण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"अरावाक"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"इजिप्ट अरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"मोरोक्कोली अरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ट्रिस्टान डा कुन्हा"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"आसु"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"संयुक्त राज्य मापन प्रणाली"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"उत्तरी अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"तुर्क र काइकोस टापु"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"याङ्बेन"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"चाड"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"फ्रेन्च दक्षिणी राज्यहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"अमेरिकी साङ्केतिक भाषा"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"टोगो"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"थाइल्याण्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ताजिकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"क्यारिबियन"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"तोकेलाउ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"टिमोर-लेस्टे"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"येम्बा"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"तुर्कमेनिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ट्युनिसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"टोंगा"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"टर्की"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"त्रिनिडाड एण्ड टोबागो"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"तुभालु"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ताइवान"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"अस्टुरियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"ओर्खोन"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"तान्जानिया"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"क्वासियो"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"अज्ञात लिपि"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"युक्रेन"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"लिगुरियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"अरोमानीयाली"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"पूर्वी एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"टुभिनियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"कङ्गो स्वाहिली"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"दक्षिणी एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"हाइदा"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"दक्षिण पूर्वी एशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"युगाण्डा"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"हक्का चिनियाँ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"पिनयिन क्रमबद्धता पद्दति"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"दक्षिणी युरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"सिन्हाला"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"संयुक्त राज्यका बाह्य टापुहरु"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"लिभोनियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"संयुक्त राष्ट्र संघ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"संयुक्त राज्य"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"हवाइयन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"सरलिकृत चिनियाँ क्रमबद्धता पद्दति-गीबीटुथ्रीवानटु"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"उरूग्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"प्रसियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"उज्बेकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"केन्द्रीय एट्लास टामाजिघट"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"स्ट्रोक क्रमबद्धता पद्दति"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"न्गिएम्बुन"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"भेटिकन सिटी"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"पुरातन प्रोभेन्काल"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"सेन्ट भिन्सेन्ट र ग्रेनाडिन्स"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"भेनेजुएला"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"बेलायती भर्जिन टापुहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"संयुक्त राज्य भर्जिन टापुहरु"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"भिएतनाम"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"भानुआतु"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"नोगाइ"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"र्\u200cवा"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"पुरानो नोर्से"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"अष्ट्रालासिया"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"मेलानेसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"वालिस र फुटुना"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"परम्परागत क्रमबद्धता पद्दति"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"माइक्रोनेसियाली क्षेत्र"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"न्गोम्बा"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"लाकोता"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of(u"नोभियल"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of(u"कोटावा"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"वाल्सर"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(metaValue_WS)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"वोलेट्टा"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"सिउडो-एक्सेन्ट्स"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"वारे"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"सिउडो-बिडी"_s)
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
			$of(u"कोसोभो"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"नलेखिएको"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ओलचिकी"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"वार्ल्पिरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"बाटक"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"ब्लिजसिम्बोल्स"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"येमेन"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"नको"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"मानक क्रमबद्धता"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"लोम्बार्ड"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"फाङ"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"फान्टी"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"साइनराइटिङ"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"मायोट्ट"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"दक्षिण अफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"पङ्क्ति विच्छेदको खुला शैली"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(metaValue_Deva)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"जर्जियाली अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"हिरागना"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"जाम्बिया"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"जिम्बाबवे"_s)
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
			$of(u"ISO-8601 पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"मोङ्गो"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"उत्तरी सोथो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"तेलेगु अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"लोजी"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"माचामे"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"फिजी हिन्दी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"सरलिकृत चिनियाँ वित्तीय अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"हिलिगायनोन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"विस्तृत अरबी भारतीय अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"नुएर"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"डाकोटा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"पूरा चौंडाइका अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"हिट्टिटे"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"दार्ग्वा"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"ताइता"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"माया हाइरोग्लिफ्स"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"उत्तरी लुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"कप्टिक"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"परम्परागत नेवारी"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"उड्मुर्ट"_s)
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
			$of(u"सान्डेअ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"रोमन अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"साखा"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of(u"लाट्गाली"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"साम्बुरू"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"सान्ताली"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"टिफिनाघ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"जुडियो-फारसी"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"न्गामबाय"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"गुरूमुखी"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"लुबा-लुलुआ"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"साङ्गु"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"लुइसेनो"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"न्यान्कोल"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"न्यामवेजी"_s)
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
			$of(u"लुओ"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"फिलिपिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"हमोङ"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"देलावर"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"मिजो"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"बालुची"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"लुइया"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"बाभारियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"बासा"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"बामुन"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"जुडियो-अरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"युरोपेली स्पेनी"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"नजिमा"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"स्कट्स"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"सिसिलियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"अफार"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"अब्खाजियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"बाताक तोबा"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"अवेस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"अफ्रिकान्स"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"आकान"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"घोमाला"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"अम्हारिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"अरागोनी"_s)
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
			$of(u"काताकाना वा हिरागाना"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"आसामी"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"अवारिक"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"दक्षिणी कुर्दिश"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ऐमारा"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"अजरबैजानी"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"बास्किर"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"बेलारुसी"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"बुल्गेरियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"बिस्लाम"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"बाम्बारा"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"बंगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"दोग्रिब"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ब्रेटन"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"बोस्नियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"म्यान्मार"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"लाओ अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"सेना"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"एन्को"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"क्याटालन"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"कोयराबोरो सेन्नी"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"चेचेन"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"चामोर्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"कोर्सिकन"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"ओडिया"_s)
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
			$of(u"चर्च स्लाभिक"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of(u"न्हिनगातु"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"चुभास"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"वेल्श"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"इथियोपाली अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"यी"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"डेनिस"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"युरोपेली पोर्तुगी"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("cf-standard"_s)
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
			$of("jut"_s),
			$of(u"जुटिस"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"बुगिनिज"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"बेम्बा"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"पुरातन आयरीस"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"दिबेही"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"ल्याटिन अमेरिकी स्पेनी"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"बेटावी"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"जोङ्खा"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"बेना"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"चिनियाँ पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"साहित्यिक चिनियाँ"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"जर्मा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"ग्रीक अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"इवी"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"बाफुट"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"पङ्क्ति विच्छेदको सामान्य शैली"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"मोल्डाभियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"अङ्ग्रेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"एस्पेरान्तो"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"बडागा"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of(u"लाज"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"परम्परागत चिनिँया क्रमबद्धता पद्दति - बिग फाइभ"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"स्पेनी"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"इस्टोनियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"हान्ब"_s)
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
			$of(u"हान्गुल"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"समारिटन"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"टाचेल्हिट"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"माथिल्लो सोर्बियन"_s)
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
			$of(u"फारसी"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(metaValue_Hans)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"पश्चिमी अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"फुलाह"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"चाड अरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"जियाङ चिनियाँ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"फिनिस"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"फिजियन"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"फोन"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"पश्चिम बालोची"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"क्यान्टोनिज"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"फारोज"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"उम्बुन्डी"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"फ्रान्सेली"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"पश्चिमी फ्रिसियन"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"आइरिस"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"स्कटिस गाएलिक"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"गलिसियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"गुवारानी"_s)
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
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"मान्क्स"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"हाउसा"_s)
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
			$of(u"हुपा"_s)
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
			$of(u"हिरी मोटु"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"क्रोयसियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"हैटियाली क्रियोल"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"हङ्गेरियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"हेरेरो"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"काहुन फ्रान्सेली"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"इन्टर्लिङ्गुआ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"जामो"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"इन्डोनेसियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"तिब्बती अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"इन्टरलिङ्ग्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"इग्बो"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"सिचुआन यि"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"मध्य फ्रान्सेली"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"इनुपिआक्"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"पुरातन फ्रान्सेली"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"अर्पितान"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"इडो"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"पूर्वी फ्रिसियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"बन्जार"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"उत्तरी फ्रिजी"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"आइसल्यान्डियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"इटालेली"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"इनुक्टिटुट"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"तल्लो सिलेसियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"मलायालम"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"सारती"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"डोगरी"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"कोम"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"दक्षिणी सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"शाभियन"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"मादुरेसे"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"लुले सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"मगधी"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"माफा"_s)
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
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"सिक्सिका"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"माकासार"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"स्कोइट सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"मान्दिङो"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"कोङ्गो"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
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
			$of(u"कुआन्यामा"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"काजाख"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"कालालिसुट"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"कन्नाडा"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"कोरियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"कानुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"कास्मिरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"किर्थ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"लेप्चा"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"आभेस्टान"_s)
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
			$of(u"कोर्निस"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"किर्गिज"_s)
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
			$of(u"लक्जेम्बर्गी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"मलायलम अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"गान्डा"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"रोङ्गोरोङ्गो"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"लिम्बुर्गी"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"लिङ्गाला"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"फ्रिउलियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"इम्पेरियल मापन प्रणाली"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"लिथुआनियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"लुबा-काताङ्गा"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"लात्भियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"मलागासी"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"मार्साली"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"पूर्वनिर्धारित युनिकोडको क्रमबद्धता सूची"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"माओरी"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"म्यासेडोनियन"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"मलयालम"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"मङ्गोलियाली"_s)
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
			$of(u"माल्टिज"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"बर्मेली"_s)
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
			$of("mde"_s),
			$of(u"माबा"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"तल्लो सोर्बियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"आर्मी"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"सामान्य उद्देशीय खोजी"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"नर्वेली बोकमाल"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"उत्तरी न्डेबेले"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"नेपाली"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"न्दोन्गा"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"मन्दर"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"डच"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"नर्वेली नाइनोर्स्क"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"नर्वेली"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"दक्षिण न्देबेले"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"नाभाजो"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"कारा-काल्पाक"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"न्यान्जा"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"काचिन"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"काबिल"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"अक्सिटन"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ज्जु"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"काम्बा"_s)
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
			$of(u"मेरू"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"आर्मेनियाली अङ्कहरू"_s)
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
			$of("dtp"_s),
			$of(u"केन्द्रीय दुसुन"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"उडिया"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ओस्सेटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"विष्णुप्रिया"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"काबार्दियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"मोरिसेन"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"स्रानान टोङ्गो"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"पंजाबी"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"दुवाला"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"कानेम्बु"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"पाली"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"बाख्तिआरी"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"पोलिस"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"मध्य डच"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"डाङ्गी पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"पास्तो"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"पोर्तुगी"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"मध्य आयरिस"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"क्रमबद्ध सुची"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ब्राजिली पोर्तुगी"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"टुआप"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"माखुवा-मिट्टो"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"मुद्राको ढाँचा"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ब्रज"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"पात्रो"_s)
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
			$of("hc-h23"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of("hc-h24"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"साहो"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"ब्राहुइ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"म्यान्मारका अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"क्वेचुवा"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"बोडो"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"लान्ना"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"माकोन्डे"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"इथियोपिक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of("hc-h12"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of("hc-h11"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"रोमानिस"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"रुन्डी"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"मुद्रा"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"रोमानियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ओरिया अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"चिनियाँ दशमलव अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"रसियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"अकुज"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"किन्यारवान्डा"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"ब्लिससिम्बोल्स"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"काबुभेर्डियानु"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"मिकमाक"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"सुकुमा"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"अस्ट्रेलियाली अङ्ग्रेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"संस्कृत"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"सार्डिनियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"सुसू"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"सिन्धी"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"उत्तरी सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"मिनाङकाबाउ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"साङ्गो"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of(u"केनयाङ"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"सिन्हाली"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"सुमेरियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"स्लोभाकियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"स्लोभेनियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(metaValue_WS)
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
			$of("type.nu.arab"_s),
			$of(u"अरबी भारतीय अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"अल्बानियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"सर्बियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"स्वाती"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("cf-account"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"दक्षिणी सोथो"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"सुडानी"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"स्विडिस"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"स्वाहिली"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"परम्परागत चिनियाँ वित्तीय अङ्कहरू"_s)
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
			$of(u"बुरिआत"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"केन्द्रीय एशिया"_s)
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
			$of("ti"_s),
			$of(u"टिग्रिन्या"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"बुगिनियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"कोरो"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"क्यानाडेली अङ्ग्रेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"टर्कमेन"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ट्स्वाना"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"टोङ्गन"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"बुलु"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"जोला-फोनिल"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"जापानी अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"टर्किश"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ट्सोङ्गा"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"कोमोरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"काक्म्"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"तातार"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"द्युला"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"टाहिटियन"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"युरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"पूर्वी युरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"उत्तरी युरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"दाजागा"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"पश्चिमी युरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"उइघुर"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"पुरानो इटालिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"कोरियन"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of(u"काइनगाङ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"साझा"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"युक्रेनी"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"उर्दु"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"काल्मिक"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"उज्बेकी"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"खासी"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"तल्लो साक्सन"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"स्ल्योटी नाग्री"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"भेन्डा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"चिनियाँ गणतन्त्रको पात्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"भियतनामी"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"खोटानी"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"कोयरा चिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"समय चक्र (12 तथा 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"भोलापिक"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"खोवार"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"परम्परागत सिरियाक"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ओस्मान्या"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"किचे"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"चिम्बोराजो उच्चस्थान किचुआ"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"गा"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"वाल्लुन"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"गगाउज"_s)
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
			$of(u"गान चिनियाँ"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"किर्मान्जकी"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"लाइडियन"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"वुलुफ"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"मानक मोरोक्कोन तामाजिघट"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"आधुनिक मानक अरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"गायो"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"मङ्गोल"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"मान्चु"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"फ्राक्टुर ल्याटिन"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"ग्बाया"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"मनिपुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"ग्यालिक ल्याटिन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"सरलिकृत चिनियाँ अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"परम्परागत चिनियाँ अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"खोसा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"रोमन साना केसका अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ब्लिन"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"लाइसियन"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ओसागे"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"मेडुम्बा"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"जून"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"मोहक"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"काको"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"यिद्दिस"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"मोस्सी"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"डेसेरेट"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"योरूवा"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"मेक्सिकन स्पेनी"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"पश्चिमी सिरियाक"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"अटोमन तुर्की"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"इस्ट्रेनजेलो सिरियाक"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"कारियन"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"कालेन्जिन"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"चिनियाँ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"बोपोमोफो"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"पुरानो पर्मिक"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"पङ्क्ति विच्छेदको शैली"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"जुलु"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"टेलिफोन पुस्तिका क्रमबद्धतापद्दति"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"किम्बुन्डु"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"जापानी वित्तीय अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"चाम"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"गिज"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"पूर्वी सिरियाक"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"टागालोग"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"इजिप्टियन डेमोटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"इजिप्टियन हाइरटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"एम्बु"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"इजिप्टियन हाइरोग्लिफ्स"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"ग्रुजियाली खुट्सुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(metaValue_Hans)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"कोमी-पर्म्याक"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"पुरानो हङ्गेरियाली"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"कोन्कानी"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"कोस्राली"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"क्पेल्ले"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"खमेर अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"इयोको"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"कप्रियट"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"मुन्डाङ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"गुरूमुखी अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"बहुभाषा"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"काड्डो"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"मापन प्रणाली"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"क्रिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"ग्लागोलिटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"गिल्बर्टी"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"क्यारिब"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"कायुगा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"तामिल अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"काराचाय-बाल्कर"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"इन्गस"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of(u"किनाराय-ए"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of(u"क्रिओ"_s)
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
			$of(u"अङ्कहरू"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"कुरुख"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"शाम्बाला"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"बाफिया"_s)
		})
	}));
	return data;
}

LocaleNames_ne::LocaleNames_ne() {
}

$Class* LocaleNames_ne::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ne, name, initialize, &_LocaleNames_ne_ClassInfo_, allocate$LocaleNames_ne);
	return class$;
}

$Class* LocaleNames_ne::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun