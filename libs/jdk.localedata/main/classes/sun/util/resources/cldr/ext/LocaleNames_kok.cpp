#include <sun/util/resources/cldr/ext/LocaleNames_kok.h>

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

$MethodInfo _LocaleNames_kok_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_kok, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_kok, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_kok_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_kok",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_kok_MethodInfo_
};

$Object* allocate$LocaleNames_kok($Class* clazz) {
	return $of($alloc(LocaleNames_kok));
}

void LocaleNames_kok::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_kok::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_FJ, u"फिजी"_s);
	$var($String, metaValue_bn, u"बांग्ला"_s);
	$var($String, metaValue_gu, u"गुजराती"_s);
	$var($String, metaValue_he, u"हिब्रू"_s);
	$var($String, metaValue_hy, u"आर्मेनियन"_s);
	$var($String, metaValue_ja, u"जपानी"_s);
	$var($String, metaValue_lo, u"लाओ"_s);
	$var($String, metaValue_or, u"ओडिया"_s);
	$var($String, metaValue_th, u"थाई"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"कोलोनियन"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"मिरांडीस"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"चिन्नां"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ईमोजी"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"चक्मा"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"तिम्ने"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"तेसो"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"रापान्यु"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"असेशन आयलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"रारोटोंगान"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"तेतम"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"अंडोरा"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"युनाइटेड अरब इमीरॅट्स"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"फ्लेमिश"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"अफगानिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"एँटिगुआ आनी बारबुडा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"इथियोपिक दिनदर्शिका"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"अंगुला"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"अल्बानीया"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"आर्मीनीया"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"अंगोला"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"अंटार्क्टिका"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"अर्जेंटिना"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"अमेरिकी सामोआ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ऑस्ट्रिया"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ऑस्ट्रेलीया"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"अरुबा"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"अमेरिकन इंग्लीश"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"अलांड जुवे"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"अजरबैजान"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"बोस्निया आनी हेर्जेगोविना"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"बारबाडोस"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"सिबौना"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"बांगलादेश"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"कुमयक"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"बेल्जियम"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"बुर्किना फॅसो"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"बल्गेरीया"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"बेहरेन"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"बुरुंडी"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"बेनीन"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"सॅंट बार्थेल्मी"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"बर्मुडा"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"एरझिया"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ब्रूनेई"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"बोलिव्हिया"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"कॅरिबियन निदरलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ब्राझील"_s)
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
			$of(u"भूतान"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"बोवट आयलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"बोत्सवाना"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"बेलारूस"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"बेलिझ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"पर्शियन दिनदर्शिका"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"हिब्रू संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"कॅनडा"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"कोकोस (कीलिंग) आयलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"मझांडेराणी"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"कोंगो - किंशासा"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"मध्य अफ्रीकी लोकसत्तकराज्य"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"कोंगो - ब्राझाविला"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"स्विट्ज़रलैंड"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"कोत द’ईवोआर"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"कुक आयलँड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"चिली"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"कॅमेरून"_s)
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
			$of(u"क्लिपरटॉन आयलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"कोस्ता रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"क्युबा"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"केप वर्दी"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"कुरसावो"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"क्रिसमस आयलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"सायप्रस"_s)
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
			$of("ace"_s),
			$of(u"अचायनीज"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"चिगा"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"दिगो गार्सिया"_s)
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
			$of("Brai"_s),
			$of(u"ब्रैल"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"डोमिनीका"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"आर्मेनियन लोवरकेस संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"डोमिनिकन प्रजासत्ताक"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"गोरोंटालो"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"झून"_s)
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
			$of(u"पांगासियान"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"सिटा आनी मेलिल्ला"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"पांपान्गा"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"इक्वाडोर"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"पापिमेंटो"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"अडांग्मे"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"एस्टोनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ईजिप्त"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"अस्तंत सहारा"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"पालुयान"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"छुनिस"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"मारी"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"चोताव"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"चॅरोकी"_s)
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
			$of(u"युरोपियन युनियन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ग्रेगोरियन कॅलॅण्डर"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"युरोझोन"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"चेयनी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"गुजराती अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"अडिघे"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"फिनलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"फ़ॉकलैंड आइलैंड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"मायक्रोनेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"फैरो आयलँड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"तमीळ"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"फ्रान्स"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"गॅबोन"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"युनायटेड किंगडम"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"नायझेरियन पिडगीन"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ग्रेनॅडा"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"जॉर्जिया"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"फ्रेन्च गयाना"_s)
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
			$of("GI"_s),
			$of(u"जिब्राल्टर"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ग्रीनलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"गॅम्बिया"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"गुएनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ग्वाडेलोप"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"इक्वेटोरियल गुएनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"ग्रीस"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"दक्षिण जोर्जिया आनी दक्षिण सॅण्डविच आयलँड्स"_s)
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
			$of(u"गुअनिया-बिसाउ"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"क्लिंगन"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"गयाना"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"मध्य खुर्दीश"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"अणकार सामुग्री ना"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ऑस्ट्रियन जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"हाँग काँग SAR चीन"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"हर्ड आयलँड्स ऍंड मॅक्डोनाल्ड आयलँड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"हॉनडुरस"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"क्रोयेशीया"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"अघेम"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"स्विज जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"हैती"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"हंगेरी"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"कॅनरी आयलैंड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"इंडोनेशीया"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"आयरलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"नेपोलिटन"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"नामा"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"झाझा"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"इज़राइल"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"इसले ऑफ मॅन"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"भारत"_s)
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
			$of(u"इरान"_s)
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
			$of(u"गणिताची चिन्नां"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"थाय अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"बांग्ला अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"जर्सी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ईस्लामीक दिनदर्शिका"_s)
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
			$of(u"जपान"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"आयनू"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"गुसी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"कन्नड अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"स्विझ हाय जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"बुध्दीश्ट दिनदर्शिका"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"केनया"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"लॅटीन अमेरिका"_s)
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
			$of("KN"_s),
			$of(u"सेंट किट्स आनी नेविस"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"कन्नड"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"कॅनडियन फ्रेंच"_s)
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
			$of("fr_CH"_s),
			$of(u"स्विझ फ्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"कुवेत"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"तोक पिसीन"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"कैमेन आइलैंड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"कझाकस्तान"_s)
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
			$of(u"सँट लुसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ग्विच"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"निम्न जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"लिचेंस्टीन"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"श्री लंका"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"लायबेरीया"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"लिसोथो"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"लिथुआनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"लक्सेमबर्ग"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"लॅटविया"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"कटाकाना"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"लीबिया"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"लाडिनो"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"वुंजो"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"लांगी"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"थाणा"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"मोरोक्को"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"मोनॅको"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"माल्डोवा"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"मॉन्टॅनग्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"सॅंट मार्टिन"_s)
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
			$of(u"मार्शल आयलँड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"आलिट"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"उत्तर मॅसिडोनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"माली"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"म्यानमार (बर्मा)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"मंगोलिया"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"नेवरी"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"मकाव SAR चीन"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"उत्तरी मरिना आयसलैण्ड"_s)
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
			$of(u"मॉन्टसेराट"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"माल्टा"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"मॉरिशस"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"दक्षिणी अल्टाय"_s)
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
			$of(u"मेक्सिको"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"जपानी दिनदर्शिका"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"मलेशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"मॉझांबीक"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"नामीबिया"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"उप-सहाराई आफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"हिब्रू दिनदर्शिका"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"न्यू कॅलिडोनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"नायजर"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"नॉरफॉक आयलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"नायजेरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"तारोको"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"निकारगुवा"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"नॅदरलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"नॉर्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"नेपाळ"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"नावरू"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"नीयू"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"रोम्बो"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"न्युझीलॅन्ड"_s)
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
			$of(u"सेसेल्वा क्रयॉल फ्रेन्च"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"पनामा"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ब्रिटीश इंग्लीश"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"पेरू"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"फ्रेन्च पोलिनेसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"पापुआ न्यु गिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"फिलीपिन्झ"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"पाकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"पोलंड"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"एवोंडो"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"सँ. पायरे आनी मिकेलन"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"पिटकॅरन आयलँड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"पिर्टो रिको"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"पेलेस्टीनियन प्रांत"_s)
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
			$of(u"ग्रीक लोवरकेस संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"पैराग्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"तुंबुका"_s)
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
			$of("niu"_s),
			$of(u"नियुन"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"आवटलायींग ओशेनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"लेझघियान"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"तुवालू"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"जग"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"आफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"उत्तर अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"रीयूनियन"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"दक्षिण अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"लोबजान"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ओसेनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"रोमानीया"_s)
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
			$of("SA"_s),
			$of(u"सऊदी अरेबिया"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"सोलोमन आइलँड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"तासावाक"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"अस्तंत आफ्रिका"_s)
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
			$of(u"उदेंत आफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"उत्तरीय आफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"सिंगापूर"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"सेंट हेलिना"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"सक्तीची रेग खंड शैली"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"मध्य आफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"स्लोवेनिया"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"दक्षिण आफ्रिका"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"स्वालबार्ड आनी जान मेयन"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"अमेरिकास"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"स्लोवाकिया"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"सिएरा लियॉन"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"सॅन मारीनो"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"सिनिगल"_s)
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
			$of(u"पारंपारीक तमिळ संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"सुरीनाम"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"दक्षिण सुडान"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"साओ टोम आनी प्रिन्सिप"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"एल साल्वाडोर"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"सिंट मार्टेन"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"सिरिया"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"इस्वातिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"त्रिस्तान दा कुन्हा"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"असु"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"युएस मापन प्रणाली"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"उत्तरीय अमेरिका"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"तुर्क्स आनी कॅकोज आयलँड्स"_s)
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
			$of("TF"_s),
			$of(u"फ्रेंच दक्षिणी प्रांत"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"टोगो"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"थायलँड"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"तजीकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"कॅरिबियन"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"टोकलाऊ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"तिमोर-लेस्ते"_s)
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
			$of(u"ट्यूनीशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"टोंगा"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"तुर्की"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ट्रिनीडाड आनी टोबॅगो"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"टुवालू"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"तायवान"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"अस्टुरियान"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"तांझानिया"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"ख्वासी"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"अज्ञात लिपी"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"युक्रेन"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"आरोमेनियन"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"उदेंत आशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"तुविनियन"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"काँगो स्वाहिली"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"दक्षिण आशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"आग्नेय आशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"युगांडा"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"दक्षिण येवरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"सिन्हाला"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"यु. एस. मायनर आवटलायींग आयलँड्\u200dस"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"युनायटेड नेशन्स"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"युनायटेड स्टेट्स"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"हवायियान"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"उरूग्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"प्रुसियन"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"उज़्बेकिस्तान"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"केंद्रीय अटलास तामाझायट"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"न्गेबून"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"वॅटिकन सिटी"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"सेंट विंसेंट ऐंड द ग्रेनेडाइंस"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"विनेझुएला"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ब्रिटिश वर्जिन आयलँड्स"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"यु. एस. वर्जिन आयलँड्\u200dस"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"व्हिएतनाम"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"वनातू"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"नोगाय"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"रवा"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ऑस्ट्रेलेसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"मेलानेसिया"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"वालिस आनी फ्यूचूना"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"मायक्रोनेशियन प्रांत"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"न्गोंबा"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"लाकोटा"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"वाल्सर"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"सामोआ"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"वोलायटा"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"स्युडो-ऍक्सेंट"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"वरय"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"स्युडो-बिडी"_s)
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
			$of(u"अलिखीत"_s)
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
			$of(u"प्रमाणित वर्गवारी क्रम"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"मेयोट"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"दक्षिण आफ्रीका"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"सुटी रेग खंड शैली"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"देवनागरी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"जॉर्जियन संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"हिरागना"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"झांबिया"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"जिम्बाब्वे"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"अज्ञात प्रांत"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"मॅट्रीक प्रणाली"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"आयएसओ-8601 दिनदर्शिका"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"उत्तरीय सोथो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"तेलुगू अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"लोझीं"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"मचामे"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"सोंपी केल्ली चिनी महसूल संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"हिलीगायनॉन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"विस्तारीत अरेबीक-भारतीय अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"न्युयर"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"डाकोटा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"पूर्ण-रुंदी अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"दार्ग्वा"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"तायता"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"उत्तरीय लुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"उडमुर्त"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"खमेर"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"संडावे"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"रोमन संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"सखा"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"साम्बरू"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"संथाली"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"गांबे"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"गुरमुखी"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"लुबा-लुलुआ"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"सांगू"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"नानकोले"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"लुंडा"_s)
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
			$of(u"मोंग"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"मिझो"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"बालिनिस"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"लुय"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"बस्सा"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"युरोपियन स्पॅनीश"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"स्कॉट्स"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"सिसिलियान"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"अफार"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"अबखेज़ियन"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"अफ्रिकान्स"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"अकान"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"अमहारिक्"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"आरागोनिस"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"आरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"अरेबिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"जपानी अक्षरमाळ"_s)
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
			$of("ay"_s),
			$of(u"ऐमरा"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"अज़रबैजानी"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"बष्किर"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"बैलोरुसियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"बल्गेरियन"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"बिसलमा"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"बंबारा"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"तिबेटी"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"डोगरीब"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ब्रेटन"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"बोस्नियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"म्यानमार"_s)
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
			$of("ca"_s),
			$of(u"कटलान"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"कोयराबोरो सेन्नी"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"चिचेन"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"चामोर्रो"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"कोर्शियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"चेक"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"चर्च स्लेव्हीक"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"छुवास"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"वेळ्ष्"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"इथियोपिक संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"डॅनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"युरोपियन पोर्तुगीज"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"प्रमाणित चलन स्वरुप"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"बेम्बा"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"दिवेही"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"लातीं अमेरिकन स्पॅनीश"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"झोंग्खा"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"बेना"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"चीनी दिनदर्शिका"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"झर्मा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"ग्रीक संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"एव"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"सामान्य रेग खंड शैली"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"मोल्डावियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"ग्रीक्"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"इंग्लीश"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"इस्परान्टो"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"स्पॅनीश"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"इस्टोनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"बोपोफोमो वरवीं हान"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"बास्क"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"हंगूल"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ताछेहीट"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"अपर सोर्बियन"_s)
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
			$of("fa"_s),
			$of(u"पर्शियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"सोंपी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"अस्तंतीय अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"पारंपारीक"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"फुला"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"फिन्निष्"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"फोन"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"कांटोसी"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"फेरोस्"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"यमबुंडु"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"फ्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"पश्चिमी फ्रिशियन"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ऐरिष"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"स्कॉटीश गॅलीक"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"गेलीशियन"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"गौरानी"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"भोजपुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"अज्ञात भास"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"मॅन्स"_s)
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
			$of(u"हुपा"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"बिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"क्रोयेषियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"हैतियन क्रेयॉल"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"हंगेरियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"हिरिरो"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"इन्टरलिंग्वा"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"जामो"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"इंडोनेशियन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"तिबेतियन अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"इन्टरलिंग्"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"इग्बो"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"सिच्युआन यी"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"इनूपेयाक्"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"इदो"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"आईस्लान्डिक"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"इटालियन"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"इन्युकट्ट"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"मलयाळम"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"दक्षिणी सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"जावनीस्"_s)
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
			$of(u"मगाही"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"मैथिली"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ईनारी सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"जार्जियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"सिकसिका"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"माक"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"स्कोल्ट सामी"_s)
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
			$of(u"कुयांमा"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"कज़ख्"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"कालाल्लिसुट"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"कंबोडियन"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"कन्नडा"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"कोरियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"कानुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"कश्मीरी"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"कुर्दिष"_s)
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
			$of(u"किर्गिज़"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"सोनिके"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"लाटिन"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"लक्सेमबर्गीश"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"मल्याळम अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"गांडा"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"लिंबुर्ग"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"तिबेटन"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"लिंगाला"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"फ्रिलियन"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"भव्य मापन प्रणाली"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"लिथुआनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"लुबा-काटांगा"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"लाट्वियन् (लेट्टिष्)"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"मलागसी"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"मार्शली"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"डिफॉल्ट युनिकोड वर्गवारी क्रम"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"मुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"मसीडोनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"मळियाळम"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"मंगोलियन"_s)
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
			$of(u"मालतीस्"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"बर्मीज़्"_s)
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
			$of(u"लोवर सोर्बियन"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"नौरो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"सामान्य-उद्देशान केल्लो सोद"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"नॉर्वेजियन बोकमाल"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"उत्तर न्डेबेले"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"नेपाळी"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"डोंगा"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"डच्"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"नॉर्वेजियन नायनोर्स्क"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"नोर्वेजियन"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"दक्षिण डेबेले"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"नावाजो"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"नांन्जा"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"काचीन"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"काबायले"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ओसिटान्"_s)
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
			$of(u"मेंडे"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"मेरू"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"आर्मेनियन संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ओरोमो"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ओसेटिक"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"काबार्डियन"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"मोरिसेन"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"श्रानन टोंगो"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"पंजाबी"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"डौल"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"पॉलीश"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"डांगी दिनदर्शिका"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"पाष्टो"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"पोर्तुगीज"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"वर्गवारी क्रम"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ब्राझिलियन पोर्तुगीज"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"त्याप"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"माखुवा-मिट्टो"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"चलनाचें स्वरूप"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"दिनदर्शिका"_s)
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
			$of(u"24 वरांची यंत्रणा (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 वरांची यंत्रणा (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"साहो"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"म्यानमार अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"क्वेच्वा"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"बोडो"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"माकोंडे"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"इथियोपीक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 वरांची यंत्रणा (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 वरांची यंत्रणा (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"रोमान्श"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"रुंदी"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"चलन"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"रोमानियन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ओडिया अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"चिनी दशांश संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"रशियन"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"किन्यार्वान्डा"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"काबुवर्डियनु"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"मिक्माक"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"सुकुमा"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ऑस्ट्रेलियन इंग्लीश"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"संस्कृत"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"सार्डिनियान"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"सिंधी"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"उत्तरीय सामी"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"मिनाग्काबौ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"सांगो"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"सेर्बो-क्रोयेषियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"सिनहालीस"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"स्लोवाक"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"स्लोवानियन"_s)
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
			$of("type.nu.arab"_s),
			$of(u"अरेबिक-भारतीय अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"आल्बेनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"सर्बियन"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"स्वाती"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"लेखा चलन स्वरूप"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"सावथर्न सोथो"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"सुंदनीस"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"स्विडीश"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"स्वाहिली"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"पारंपारीक चिनी महसूल संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ईबिबियो"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"आयबन"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"तमिळ"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"आशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"मध्य आशिया"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"तेलुगू"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"अस्तंत आशिया"_s)
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
			$of(u"तिग्रिन्या"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"बगिनिस"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"कोरो"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"कॅनडियन इंग्लीश"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"तुर्कमेन"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"तगालोग"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"सेत्स्वाना"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"तोंगा"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"जोला-फोनी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"जपानी संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"तुर्किष"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"त्सोगा"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"कोमोरियन"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"तटार"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"त्वि"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"ताहीशियन"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"येवरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"उदेंत येवरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"उत्तर येवरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"डाझागा"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"अस्तंत येवरोप"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"उयघूर"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"कोरियन"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"सामान्य"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"युक्रेनियन्"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"उर्दू"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"कालमायक"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"उझबेक"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"खासी"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"वेंदा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"मिंगुआ दिनदर्शिका (अणकाराची कुरू: जाका चिनी दिनदर्शिकेचें प्रजासत्ताक\", \"रिपब्लिकन दिनदर्शिका\")"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"वियत्नामीज़"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"कोयरा छिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"वराचें चक्र (12 वि 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ओलापुक"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"किचे"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"गा"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"वालून"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"सिरियाक"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"ग्रीक"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"उलोफ़"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"प्रमाणीत मॉरोक्कन तमाझीट"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"आधुनिक प्रमाणित अरेबिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"मोंगोलियन"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"मणिपुरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"लॅटीन"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"सोंपी केल्ली चिनी संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"पारंपारीक चिनी संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"झ़ौसा"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"रोमन लोवरकेस संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ब्लीन"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"मोहाक"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"काको"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"इद्दिष्"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"मोस्सी"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"यूरुबा"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"मॅक्सिकन स्पॅनीश"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"वाई"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"झ्हुन्ग"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"कालेंजीन"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"चिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"बोपोमोफो"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"रेग खंड करपाची शैली"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"जुलू"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"जॉर्जियन"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"किंबुंडु"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"जपानी महसूल संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"गेझ"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"एम्बु"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"सोंपी चिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"कोंकणी"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"पारंपारीक चिनी"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"पेल्ले"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"कंबोडियन अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"लोको"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"मुडांग"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"गुरुमुखी अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"साबार भाशा"_s)
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
			$of("gil"_s),
			$of(u"गिलबर्टीस"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"तमिळ अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"कराची-बाल्कर"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"इंगूश"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"दारी"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"कारेलियन"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"एफीक"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"संख्या"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"कुरुख"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"शांबाला"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"तेलगू"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"बाफिया"_s)
		})
	}));
	return data;
}

LocaleNames_kok::LocaleNames_kok() {
}

$Class* LocaleNames_kok::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_kok, name, initialize, &_LocaleNames_kok_ClassInfo_, allocate$LocaleNames_kok);
	return class$;
}

$Class* LocaleNames_kok::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun