#include <sun/util/resources/cldr/ext/TimeZoneNames_brx.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE
#undef GMT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

void TimeZoneNames_brx::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_brx::getContents() {
	$useLocalObjectStack();
	$var($StringArray, GMT, $new($StringArray, {
		u"ग्रीनीच स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Acre, $new($StringArray, {
		u"आकर स्टैंडर्ड टाईम"_s,
		""_s,
		u"आकर समर टाईम"_s,
		""_s,
		u"आकर टाईम"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"कुक द्वीप स्टैंडर्ड टाईम"_s,
		""_s,
		u"कुक द्वीप अर्ध समर टाईम"_s,
		""_s,
		u"कुक द्वीप टाईम"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"क्युबा स्टैंडर्ड टाईम"_s,
		""_s,
		u"क्युबा डेलाईट टाईम"_s,
		""_s,
		u"क्युबा टाईम"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"फीजी स्टैंडर्ड टाईम"_s,
		""_s,
		u"फीजी समर टाईम"_s,
		""_s,
		u"फीजी टाईम"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"गल्फ़ स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"होव्ड स्टैंडर्ड टाईम"_s,
		""_s,
		u"होव्ड समर टाईम"_s,
		""_s,
		u"होव्ड टाईम"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"ईरान स्टैंडर्ड टाईम"_s,
		""_s,
		u"ईरान डेलाईट टाईम"_s,
		""_s,
		u"ईरान टाईम"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"नीऊई स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"ओम्स्क स्टैंडर्ड टाईम"_s,
		""_s,
		u"ओम्स्क समर टाईम"_s,
		""_s,
		u"ओम्स्क टाईम"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"पेरु स्टैंडर्ड टाईम"_s,
		""_s,
		u"पेरु समर टाईम"_s,
		""_s,
		u"पेरु टाईम"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"ट्रुक स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"वाके द्वीप स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"चीली स्टैंडर्ड टाईम"_s,
		""_s,
		u"चीली समर टाईम"_s,
		""_s,
		u"चीली टाईम"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"चाईना स्टैंडर्ड टाईम"_s,
		""_s,
		u"चाईना डेलाईट टाईम"_s,
		""_s,
		u"चाईना टाईम"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"कोको द्वीप स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"डेवीस स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"भारतीय स्टैंडर्ड टाईम"_s,
		"IST"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"जपान स्टैंडर्ड टाईम"_s,
		""_s,
		u"जपान डेलाईट टाईम"_s,
		""_s,
		u"जपान टाईम"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"कोरिया स्टैंडर्ड टाईम"_s,
		""_s,
		u"कोरिया डेलाईट टाईम"_s,
		""_s,
		u"कोरिया टाईम"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"नाऊरु स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"नेपाल स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"पलाऊ स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"समोआ स्टैंडर्ड टाईम"_s,
		""_s,
		u"समोआ समर टाईम"_s,
		""_s,
		u"समोआ टाईम"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"सीओवा स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"टॉंगा स्टैंडर्ड टाईम"_s,
		""_s,
		u"टॉंगा समर टाईम"_s,
		""_s,
		u"टॉंगा टाईम"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"अलास्का स्टैंडर्ड टाईम"_s,
		""_s,
		u"अलास्का डेलाईट टाईम"_s,
		""_s,
		u"अलास्का टाईम"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"अमाज़ोन स्टैंडर्ड टाईम"_s,
		""_s,
		u"अमाज़ोन समर टाईम"_s,
		""_s,
		u"अमाज़ोन टाईम"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"अनादीर स्टैंडर्ड टाईम"_s,
		""_s,
		u"अनादीर समर टाईम"_s,
		""_s,
		u"अनादीर टाईम"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"आज़ोर स्टैंडर्ड टाईम"_s,
		""_s,
		u"आज़ोर समर टाईम"_s,
		""_s,
		u"आज़ोर टाईम"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"भुटान स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"ब्रुनेई दर उस सलाम स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"ईस्टर आईलंड स्टैंडर्ड टाईम"_s,
		""_s,
		u"ईस्टर आईलंड समर टाईम"_s,
		""_s,
		u"ईस्टर आईलंड टाईम"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"गुयाना स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"ईस्राइल स्टैंडर्ड टाईम"_s,
		""_s,
		u"ईस्राइल डेलाईट टाईम"_s,
		""_s,
		u"ईस्राइल टाईम"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"कोसरी स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"मॉसन स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"मॉस्को स्टैंडर्ड टाईम"_s,
		""_s,
		u"मॉस्को समर टाईम"_s,
		""_s,
		u"मॉस्को टाईम"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"पोनापे (पोह्नपेई) स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"समारा स्टैंडर्ड टाईम"_s,
		""_s,
		u"समारा समर टाईम"_s,
		""_s,
		u"समारा टाईम"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"टाहिटी स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"तुवालु स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"वॉस्तॉक स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"वालीस एवं फ़ुतुना स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"अरबी स्टैंडर्ड टाईम"_s,
		""_s,
		u"अरबी डेलाईट टाईम"_s,
		""_s,
		u"अरबी टाईम"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"आरमीनी स्टैंडर्ड टाईम"_s,
		""_s,
		u"आरमीनी समर टाईम"_s,
		""_s,
		u"आरमीनी टाईम"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"बोलिविया स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"चैथम स्टैंडर्ड टाईम"_s,
		""_s,
		u"चैथम डेलाईट टाईम"_s,
		""_s,
		u"चैथम टाईम"_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"एक्वाडौर स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"गांबिये स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"जोर्जिया स्टैंडर्ड टाईम"_s,
		""_s,
		u"जोर्जिया समर टाईम"_s,
		""_s,
		u"जोर्जिया टाईम"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"ईरकुर्त्स्क स्टैंडर्ड टाईम"_s,
		""_s,
		u"ईरकुर्त्स्क समर टाईम"_s,
		""_s,
		u"ईरकुर्त्स्क टाईम"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"मगदन स्टैंडर्ड टाईम"_s,
		""_s,
		u"मगदन समर टाईम"_s,
		""_s,
		u"मगदन टाईम"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"म्यानमार स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"नॉरफोक स्टैंडर्ड टाईम"_s,
		""_s,
		u"नॉरफोक डेलाईट टाईम"_s,
		""_s,
		u"नॉरफोक टाईम"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"फेरनान्दो द नोरोन्हा स्टैंडर्ड टाईम"_s,
		""_s,
		u"फेरनान्दो द नोरोन्हा समर टाईम"_s,
		""_s,
		u"फेरनान्दो द नोरोन्हा टाईम"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"रियूनियन स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"रोथेरा स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"सॉलॉमन स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"टोकेलौ स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"ऊरुगुए स्टैंडर्ड टाईम"_s,
		""_s,
		u"ऊरुगुए समर टाईम"_s,
		""_s,
		u"ऊरुगुए टाईम"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"वनुआटु स्टैंडर्ड टाईम"_s,
		""_s,
		u"वनुआटु समर टाईम"_s,
		""_s,
		u"वनुआटु टाईम"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"याकुट्स्क स्टैंडर्ड टाईम"_s,
		""_s,
		u"याकुट्स्क समर टाईम"_s,
		""_s,
		u"याकुट्स्क टाईम"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"अटलांटीक स्टैंडर्ड टाईम"_s,
		""_s,
		u"अटलांटीक डेलाईट टाईम"_s,
		""_s,
		u"अटलांटीक टाईम"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"ब्राज़ीलिया स्टैंडर्ड टाईम"_s,
		""_s,
		u"ब्राज़ीलिया समर टाईम"_s,
		""_s,
		u"ब्राज़ीलिया टाईम"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"चामरो स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"कोलंबिया स्टैंडर्ड टाईम"_s,
		""_s,
		u"कोलंबिया समर टाईम"_s,
		""_s,
		u"कोलंबिया टाईम"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"फ़ाल्कलैण्ड स्टैंडर्ड टाईम"_s,
		""_s,
		u"फ़ाल्कलैण्ड समर टाईम"_s,
		""_s,
		u"फ़ाल्कलैण्ड टाईम"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"मलेशिया स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"मालदीव स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"मँगोलिया स्टैंडर्ड टाईम"_s,
		""_s,
		u"मँगोलिया समर टाईम"_s,
		""_s,
		u"मँगोलिया टाईम"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"पाकिस्तान स्टैंडर्ड टाईम"_s,
		""_s,
		u"पाकिस्तान समर टाईम"_s,
		""_s,
		u"पाकिस्तान टाईम"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"पारागुए स्टैंडर्ड टाईम"_s,
		""_s,
		u"पारागुए समर टाईम"_s,
		""_s,
		u"पारागुए टाईम"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"पीटकैर्न स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"सख़ालीन स्टैंडर्ड टाईम"_s,
		""_s,
		u"सख़ालीन समर टाईम"_s,
		""_s,
		u"सख़ालीन टाईम"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"सुरीनाम स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"अर्जनटिना स्टैंडर्ड टाईम"_s,
		""_s,
		u"अर्जण्टिना समर टाईम"_s,
		""_s,
		u"अर्जनटिना टाईम"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"क्रीसमस स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"गालापागोस स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"हाँगकॉंग स्टैंडर्ड टाईम"_s,
		""_s,
		u"हाँगकॉंग समर टाईम"_s,
		""_s,
		u"हाँगकॉंग टाईम"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"ईंडो चइना स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"पेत्रोपावलोस्क कामचटका स्टैंडर्ड टाईम"_s,
		""_s,
		u"पेत्रोपावलोस्क कामचटका समर टाईम"_s,
		""_s,
		u"पेत्रोपावलोस्क कामचटका टाईम"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"क़ीर्ग़स्तान स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"लार्ड़ होव स्टैंडर्ड टाईम"_s,
		""_s,
		u"लार्ड़ होव डेलाईट टाईम"_s,
		""_s,
		u"लार्ड़ होव टाईम"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"मार्केज़ास स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"मॉरिशीयस स्टैंडर्ड टाईम"_s,
		""_s,
		u"मॉरिशीयस समर टाईम"_s,
		""_s,
		u"मॉरिशीयस टाईम"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"सींगापुर स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"वेनेज़ुएला स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"वॉलगोग्राद स्टैंडर्ड टाईम"_s,
		""_s,
		u"वॉलगोग्राद समर टाईम"_s,
		""_s,
		u"वॉलगोग्राद टाईम"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"आज़रबैजान स्टैंडर्ड टाईम"_s,
		""_s,
		u"आज़रबैजान समर टाईम"_s,
		""_s,
		u"आज़रबैजान टाईम"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"बांगलादेश स्टैंडर्ड टाईम"_s,
		""_s,
		u"बांगलादेश समर टाईम"_s,
		""_s,
		u"बांगलादेश टाईम"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"काप वेर्दे स्टैंडर्ड टाईम"_s,
		""_s,
		u"काप वेर्दे समर टाईम"_s,
		""_s,
		u"काप वेर्दे टाईम"_s,
		""_s
	}));
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"ईस्ट टीमोर स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"सेशेल्स स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"ताजीक़ीस्तान स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"ऊज़्बेकिस्तान स्टैंडर्ड टाईम"_s,
		""_s,
		u"ऊज़्बेकिस्तान समर टाईम"_s,
		""_s,
		u"ऊज़्बेकिस्तान टाईम"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"अफ़गानी स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"क्रासनोयार्स्क स्टैंडर्ड टाईम"_s,
		""_s,
		u"क्रासनोयार्स्क समर टाईम"_s,
		""_s,
		u"क्रासनोयार्स्क टाईम"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"न्युज़ीलैण्ड स्टैंडर्ड टाईम"_s,
		""_s,
		u"न्युज़ीलैण्ड डेलाईट टाईम"_s,
		""_s,
		u"न्युज़ीलैण्ड टाईम"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"नोवोसीबीर्स्क स्टैंडर्ड टाईम"_s,
		""_s,
		u"नोवोसीबीर्स्क समर टाईम"_s,
		""_s,
		u"नोवोसीबीर्स्क टाईम"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"फीलीपीन्स स्टैंडर्ड टाईम"_s,
		""_s,
		u"फीलीपीन्स समर टाईम"_s,
		""_s,
		u"फीलीपीन्स टाईम"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"व्लादीवॉस्तॉक स्टैंडर्ड टाईम"_s,
		""_s,
		u"व्लादीवॉस्तॉक डेलाईट टाईम"_s,
		""_s,
		u"व्लादीवॉस्तॉक टाईम"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"भारतीय महासगर स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"लाईन द्वीप स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"न्युफाऊंडलैण्ड स्टैंडर्ड टाईम"_s,
		""_s,
		u"न्युफाऊंडलैण्ड डेलाईट टाईम"_s,
		""_s,
		u"न्युफाऊंडलैण्ड टाईम"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"तुर्कमेनीस्तान स्टैंडर्ड टाईम"_s,
		""_s,
		u"तुर्कमेनीस्तान समर टाईम"_s,
		""_s,
		u"तुर्कमेनीस्तान टाईम"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"फ्रान्सीसी गुयाना स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"न्यु कैलेडोनिया स्टैंडर्ड टाईम"_s,
		""_s,
		u"न्यु कैलेडोनिया समर टाईम"_s,
		""_s,
		u"न्यु कैलेडोनिया टाईम"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"साऊथ जॉर्जिया स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"येकातेरीनाबुर्ग स्टैंडर्ड टाईम"_s,
		""_s,
		u"येकातेरीनाबुर्ग समर टाईम"_s,
		""_s,
		u"येकातेरीनाबुर्ग टाईम"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"मध्य अफ्रीका स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"पूर्वी अफ्रीका स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"पश्चीम अफ्रीका स्टैंडर्ड टाईम"_s,
		""_s,
		u"पश्चीम अफ्रीका समर टाईम"_s,
		""_s,
		u"पश्चीम अफ्रीका टाईम"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"ड्युमों ड्युरवील स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"मध्य यूरोप स्टैंडर्ड टाईम"_s,
		""_s,
		u"मध्य यूरोप समर टाईम"_s,
		""_s,
		u"मध्य यूरोप टाईम"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"ईस्टर्न यूरोप स्टैंडर्ड टाईम"_s,
		""_s,
		u"ईस्टर्न यूरोप समर टाईम"_s,
		""_s,
		u"ईस्टर्न यूरोप टाईम"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"वेस्टर्न यूरोप स्टैंडर्ड टाईम"_s,
		""_s,
		u"वेस्टर्न यूरोप समर टाईम"_s,
		""_s,
		u"वेस्टर्न यूरोप टाईम"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"दक्षिण अफ्रीका स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"सैंट्रल अमरिका स्टैंडर्ड टाईम"_s,
		""_s,
		u"सैंट्रल अमरिका डेलाईट टाईम"_s,
		""_s,
		u"सैंट्रल अमरिका टाईम"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"ईस्टर्न अमरिका स्टैंडर्ड टाईम"_s,
		""_s,
		u"ईस्टर्न अमरिका डेलाईट टाईम"_s,
		""_s,
		u"ईस्टर्न अमरिका टाईम"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"पैसीफीक स्टैंडर्ड टाईम"_s,
		""_s,
		u"पैसीफीक डेलाईट टाईम"_s,
		""_s,
		u"पैसीफीक टाईम"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"दक्षिण फ्रान्सीसी स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"गीलबर्ट द्वीप स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"हवाई आलटन स्टैंडर्ड टाईम"_s,
		""_s,
		u"हवाई आलटन डेलाईट टाईम"_s,
		""_s,
		u"हवाई आलटन टाईम"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"फीनीक्स द्वीप स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"सेँ पीयॅर एवं मीकलों स्टैंडर्ड टाईम"_s,
		""_s,
		u"सेँ पीयॅर एवं मीकलों डेलाईट टाईम"_s,
		""_s,
		u"सेँ पीयॅर एवं मीकलों टाईम"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"अमरिका माऊन्टन स्टैंडर्ड टाईम"_s,
		""_s,
		u"अमरिका माऊन्टन डेलाईट टाईम"_s,
		""_s,
		u"अमरिका माऊन्टन टाईम"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"मार्शल र्स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"पापुआ न्यु गीनी स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"मध्य ओस्ट्रेलिया स्टैंडर्ड टाईम"_s,
		""_s,
		u"मध्य ओस्ट्रेलिया डेलाईट टाईम"_s,
		""_s,
		u"ओस्ट्रेलिया टाईम"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"पूर्वी ओस्ट्रेलिया स्टैंडर्ड टाईम"_s,
		""_s,
		u"पूर्वी ओस्ट्रेलिया डेलाईट टाईम"_s,
		""_s,
		u"पूर्वी ओस्ट्रेलिया टाईम"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"दक्षिण ओस्ट्रेलिया स्टैंडर्ड टाईम"_s,
		""_s,
		u"दक्षिण ओस्ट्रेलिया डेलाईट टाईम"_s,
		""_s,
		u"दक्षिण ओस्ट्रेलिया टाईम"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"ग्रीनलैण्ड ईस्टर्न स्टैंडर्ड टाईम"_s,
		""_s,
		u"ग्रीनलैण्ड ईस्टर्न समर टाईम"_s,
		""_s,
		u"ग्रीनलैण्ड ईस्टर्न टाईम"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"ग्रीनलैण्ड वेस्टर्न स्टैंडर्ड टाईम"_s,
		""_s,
		u"ग्रीनलैण्ड वेस्टर्न समर टाईम"_s,
		""_s,
		u"ग्रीनलैण्ड वेस्टर्न टाईम"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"ईंडोनीशिया स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"ईस्टर्न ईंडोनीशिया स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"वेस्टर्न ईंडोनीशिया स्टैंडर्ड टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"क़ज़ाख़स्तान टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"वेस्टर्न क़ज़ाख़स्तान टाईम"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"मध्य-पश्चीम ओस्ट्रेलिया स्टैंडर्ड टाईम"_s,
		""_s,
		u"मध्य-पश्चीम ओस्ट्रेलिया डेलाईट टाईम"_s,
		""_s,
		u"मध्य-पश्चीम ओस्ट्रेलिया टाईम"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"America/Los_Angeles"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"America/Denver"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Phoenix"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Chicago"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/New_York"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indianapolis"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Honolulu"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"America/Anchorage"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Halifax"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Sitka"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/St_Johns"_s,
			Newfoundland
		}),
		$$new($ObjectArray, {
			"Europe/Paris"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Jerusalem"_s,
			Israel
		}),
		$$new($ObjectArray, {
			"Asia/Tokyo"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"Europe/Bucharest"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Shanghai"_s,
			China
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			EMPTY_ZONE
		}),
		$$new($ObjectArray, {
			"ACT"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"AET"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"ART"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"AST"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"BET"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"BST"_s,
			Bangladesh
		}),
		$$new($ObjectArray, {
			"CAT"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"CNT"_s,
			Newfoundland
		}),
		$$new($ObjectArray, {
			"CST"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"CTT"_s,
			China
		}),
		$$new($ObjectArray, {
			"EAT"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"ECT"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"JST"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"NET"_s,
			Armenia
		}),
		$$new($ObjectArray, {
			"NST"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"PLT"_s,
			Pakistan
		}),
		$$new($ObjectArray, {
			"PNT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"PRT"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"PST"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"SST"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"EST5EDT"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Etc/GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"MST7MDT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"PST8PDT"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"Asia/Aden"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Baku"_s,
			Azerbaijan
		}),
		$$new($ObjectArray, {
			"Asia/Dili"_s,
			East_Timor
		}),
		$$new($ObjectArray, {
			"Asia/Gaza"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Hovd"_s,
			Hovd
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			Omsk
		}),
		$$new($ObjectArray, {
			"Asia/Oral"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Amman"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Chita"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Dhaka"_s,
			Bangladesh
		}),
		$$new($ObjectArray, {
			"Asia/Dubai"_s,
			Gulf
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			Afghanistan
		}),
		$$new($ObjectArray, {
			"Asia/Macau"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Qatar"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Seoul"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Africa/Juba"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Lome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Almaty"_s,
			Kazakhstan_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Anadyr"_s,
			Anadyr
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Atyrau"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Beirut"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			Brunei
		}),
		$$new($ObjectArray, {
			"Asia/Harbin"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Hebron"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Kuwait"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Manila"_s,
			Philippines
		}),
		$$new($ObjectArray, {
			"Asia/Muscat"_s,
			Gulf
		}),
		$$new($ObjectArray, {
			"Asia/Riyadh"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Saigon"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Asia/Tehran"_s,
			Iran
		}),
		$$new($ObjectArray, {
			"Europe/Kiev"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Oslo"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Riga"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Rome"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			Seychelles
		}),
		$$new($ObjectArray, {
			"Pacific/Yap"_s,
			Truk
		}),
		$$new($ObjectArray, {
			"Africa/Accra"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Cairo"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Ceuta"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Africa/Dakar"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Lagos"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Tunis"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"America/Adak"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			Peru
		}),
		$$new($ObjectArray, {
			"America/Nome"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Asia/Baghdad"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Bahrain"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Bangkok"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Asia/Bishkek"_s,
			Kyrgystan
		}),
		$$new($ObjectArray, {
			"Asia/Colombo"_s,
			India
		}),
		$$new($ObjectArray, {
			"Asia/Irkutsk"_s,
			Irkutsk
		}),
		$$new($ObjectArray, {
			"Asia/Jakarta"_s,
			Indonesia_Western
		}),
		$$new($ObjectArray, {
			"Asia/Karachi"_s,
			Pakistan
		}),
		$$new($ObjectArray, {
			"Asia/Kuching"_s,
			Malaysia
		}),
		$$new($ObjectArray, {
			"Asia/Magadan"_s,
			Magadan
		}),
		$$new($ObjectArray, {
			"Asia/Nicosia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Rangoon"_s,
			Myanmar
		}),
		$$new($ObjectArray, {
			"Asia/Tbilisi"_s,
			Georgia
		}),
		$$new($ObjectArray, {
			"Asia/Thimphu"_s,
			Bhutan
		}),
		$$new($ObjectArray, {
			"Asia/Yakutsk"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Yerevan"_s,
			Armenia
		}),
		$$new($ObjectArray, {
			"Europe/Malta"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Minsk"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Sofia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Vaduz"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			Cocos
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			Fiji
		}),
		$$new($ObjectArray, {
			"Pacific/Guam"_s,
			Chamorro
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			Niue
		}),
		$$new($ObjectArray, {
			"Pacific/Truk"_s,
			Truk
		}),
		$$new($ObjectArray, {
			"Pacific/Wake"_s,
			Wake
		}),
		$$new($ObjectArray, {
			"SystemV/AST4"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"SystemV/CST6"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/EST5"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"SystemV/MST7"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"SystemV/PST8"_s,
			Pitcairn
		}),
		$$new($ObjectArray, {
			"SystemV/YST9"_s,
			Gambier
		}),
		$$new($ObjectArray, {
			"Africa/Asmera"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Bamako"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bangui"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Banjul"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bissau"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Douala"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Harare"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Kigali"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Luanda"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Lusaka"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Malabo"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Maputo"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Maseru"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"Africa/Niamey"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"America/Aruba"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Bahia"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Belem"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Boise"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Jujuy"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Thule"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"Asia/Ashgabat"_s,
			Turkmenistan
		}),
		$$new($ObjectArray, {
			"Asia/Calcutta"_s,
			India
		}),
		$$new($ObjectArray, {
			"Asia/Damascus"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Dushanbe"_s,
			Tajikistan
		}),
		$$new($ObjectArray, {
			"Asia/Jayapura"_s,
			Indonesia_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Katmandu"_s,
			Nepal
		}),
		$$new($ObjectArray, {
			"Asia/Khandyga"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Makassar"_s,
			Indonesia_Central
		}),
		$$new($ObjectArray, {
			"Asia/Qostanay"_s,
			Kazakhstan_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Sakhalin"_s,
			Sakhalin
		}),
		$$new($ObjectArray, {
			"Asia/Tashkent"_s,
			Uzbekistan
		}),
		$$new($ObjectArray, {
			"Asia/Ust-Nera"_s,
			Vladivostok
		}),
		$$new($ObjectArray, {
			"Europe/Athens"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Berlin"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Dublin"_s,
			$$new($StringArray, {
				u"ग्रीनीच स्टैंडर्ड टाईम"_s,
				""_s,
				u"आईरीश समर टाईम"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Jersey"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Lisbon"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Europe/London"_s,
			$$new($StringArray, {
				u"ग्रीनीच स्टैंडर्ड टाईम"_s,
				""_s,
				u"ब्रीटीश समर टाईम"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Madrid"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Monaco"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Moscow"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Prague"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Samara"_s,
			Samara
		}),
		$$new($ObjectArray, {
			"Europe/Skopje"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Tirane"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Vienna"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Warsaw"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Zagreb"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Zurich"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Chagos"_s,
			Indian_Ocean
		}),
		$$new($ObjectArray, {
			"Indian/Comoro"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Efate"_s,
			Vanuatu
		}),
		$$new($ObjectArray, {
			"Pacific/Nauru"_s,
			Nauru
		}),
		$$new($ObjectArray, {
			"Pacific/Palau"_s,
			Palau
		}),
		$$new($ObjectArray, {
			"SystemV/HST10"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"Africa/Abidjan"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Algiers"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Africa/Conakry"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Kampala"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Mbabane"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"Africa/Nairobi"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Tripoli"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"America/Belize"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Bogota"_s,
			Colombia
		}),
		$$new($ObjectArray, {
			"America/Cancun"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Cayman"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Cuiaba"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Dawson"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			Guyana
		}),
		$$new($ObjectArray, {
			"America/Havana"_s,
			Cuba
		}),
		$$new($ObjectArray, {
			"America/Inuvik"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Juneau"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/La_Paz"_s,
			Bolivia
		}),
		$$new($ObjectArray, {
			"America/Maceio"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Manaus"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Merida"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Nassau"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Panama"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Recife"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Regina"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Asia/Chongqing"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Hong_Kong"_s,
			Hong_Kong
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			Kamchatka
		}),
		$$new($ObjectArray, {
			"Asia/Pontianak"_s,
			Indonesia_Western
		}),
		$$new($ObjectArray, {
			"Asia/Pyongyang"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Asia/Qyzylorda"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Samarkand"_s,
			Uzbekistan
		}),
		$$new($ObjectArray, {
			"Asia/Singapore"_s,
			Singapore
		}),
		$$new($ObjectArray, {
			"Asia/Vientiane"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Europe/Andorra"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Belfast"_s,
			$$new($StringArray, {
				u"ग्रीनीच स्टैंडर्ड टाईम"_s,
				""_s,
				u"ब्रीटीश समर टाईम"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Tallinn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Vatican"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Vilnius"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Mayotte"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Reunion"_s,
			Reunion
		}),
		$$new($ObjectArray, {
			"Pacific/Easter"_s,
			Easter
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			Kosrae
		}),
		$$new($ObjectArray, {
			"Pacific/Majuro"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Midway"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			New_Caledonia
		}),
		$$new($ObjectArray, {
			"Pacific/Ponape"_s,
			Ponape
		}),
		$$new($ObjectArray, {
			"Pacific/Saipan"_s,
			Chamorro
		}),
		$$new($ObjectArray, {
			"Pacific/Tahiti"_s,
			Tahiti
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			Gilbert_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			Wallis
		}),
		$$new($ObjectArray, {
			"Africa/Blantyre"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Djibouti"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Freetown"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Gaborone"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Khartoum"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Kinshasa"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Monrovia"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Ndjamena"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Sao_Tome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Timbuktu"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Windhoek"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"America/Antigua"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Caracas"_s,
			Venezuela
		}),
		$$new($ObjectArray, {
			"America/Cayenne"_s,
			French_Guiana
		}),
		$$new($ObjectArray, {
			"America/Cordoba"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Creston"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Curacao"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Detroit"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Godthab"_s,
			Greenland_Western
		}),
		$$new($ObjectArray, {
			"America/Grenada"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Iqaluit"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Jamaica"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Managua"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Marigot"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Mendoza"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Moncton"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Nipigon"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Noronha"_s,
			Noronha
		}),
		$$new($ObjectArray, {
			"America/Ojinaga"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Tijuana"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"America/Toronto"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Tortola"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Yakutat"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Asia/Choibalsan"_s,
			Mongolia
		}),
		$$new($ObjectArray, {
			"Asia/Phnom_Penh"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Atlantic/Azores"_s,
			Azores
		}),
		$$new($ObjectArray, {
			"Atlantic/Canary"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Atlantic/Faeroe"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Australia/Eucla"_s,
			Australia_CentralWestern
		}),
		$$new($ObjectArray, {
			"Australia/Perth"_s,
			Australia_Western
		}),
		$$new($ObjectArray, {
			"Europe/Belgrade"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Brussels"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Budapest"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Busingen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Chisinau"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Guernsey"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Helsinki"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Sarajevo"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Uzhgorod"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			Maldives
		}),
		$$new($ObjectArray, {
			"Pacific/Chatham"_s,
			Chatham
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			Tokelau
		}),
		$$new($ObjectArray, {
			"Pacific/Gambier"_s,
			Gambier
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			Norfolk
		}),
		$$new($ObjectArray, {
			"SystemV/AST4ADT"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"SystemV/CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/EST5EDT"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"SystemV/MST7MDT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"SystemV/PST8PDT"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"SystemV/YST9YDT"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Africa/Bujumbura"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Mogadishu"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"America/Anguilla"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Asuncion"_s,
			Paraguay
		}),
		$$new($ObjectArray, {
			"America/Barbados"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Dominica"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Edmonton"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Eirunepe"_s,
			Acre
		}),
		$$new($ObjectArray, {
			"America/Miquelon"_s,
			Pierre_Miquelon
		}),
		$$new($ObjectArray, {
			"America/Montreal"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Resolute"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Santarem"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Santiago"_s,
			Chile
		}),
		$$new($ObjectArray, {
			"America/Shiprock"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/St_Kitts"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/St_Lucia"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Winnipeg"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Antarctica/Davis"_s,
			Davis
		}),
		$$new($ObjectArray, {
			"Antarctica/Syowa"_s,
			Syowa
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Krasnoyarsk"_s,
			Krasnoyarsk
		}),
		$$new($ObjectArray, {
			"Asia/Novosibirsk"_s,
			Novosibirsk
		}),
		$$new($ObjectArray, {
			"Asia/Ulaanbaatar"_s,
			Mongolia
		}),
		$$new($ObjectArray, {
			"Asia/Vladivostok"_s,
			Vladivostok
		}),
		$$new($ObjectArray, {
			"Atlantic/Bermuda"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"Atlantic/Madeira"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Atlantic/Stanley"_s,
			Falkland
		}),
		$$new($ObjectArray, {
			"Australia/Currie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Darwin"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Hobart"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Sydney"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Amsterdam"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Gibraltar"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Ljubljana"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Mariehamn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Podgorica"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Stockholm"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Volgograd"_s,
			Volgograd
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			Christmas
		}),
		$$new($ObjectArray, {
			"Indian/Kerguelen"_s,
			French_Southern
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			Mauritius
		}),
		$$new($ObjectArray, {
			"Pacific/Auckland"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			Tuvalu
		}),
		$$new($ObjectArray, {
			"Pacific/Johnston"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"Pacific/Pitcairn"_s,
			Pitcairn
		}),
		$$new($ObjectArray, {
			"Africa/Libreville"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Lubumbashi"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Nouakchott"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Porto-Novo"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"America/Araguaina"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Boa_Vista"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Catamarca"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Fortaleza"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Glace_Bay"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Goose_Bay"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Guatemala"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Guayaquil"_s,
			Ecuador
		}),
		$$new($ObjectArray, {
			"America/Matamoros"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Menominee"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Monterrey"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Sao_Paulo"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/St_Thomas"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Vancouver"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			Mawson
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			Vostok
		}),
		$$new($ObjectArray, {
			"Asia/Kuala_Lumpur"_s,
			Malaysia
		}),
		$$new($ObjectArray, {
			"Asia/Novokuznetsk"_s,
			Krasnoyarsk
		}),
		$$new($ObjectArray, {
			"Europe/Bratislava"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Copenhagen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Luxembourg"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/San_Marino"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Simferopol"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Zaporozhye"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			Phoenix_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			Galapagos
		}),
		$$new($ObjectArray, {
			"Pacific/Kwajalein"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Marquesas"_s,
			Marquesas
		}),
		$$new($ObjectArray, {
			"Pacific/Pago_Pago"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			Cook
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			Tonga
		}),
		$$new($ObjectArray, {
			"Africa/Addis_Ababa"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Brazzaville"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Ouagadougou"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Costa_Rica"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Grand_Turk"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Guadeloupe"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Kralendijk"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Louisville"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Martinique"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Metlakatla"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Montevideo"_s,
			Uruguay
		}),
		$$new($ObjectArray, {
			"America/Montserrat"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Paramaribo"_s,
			Suriname
		}),
		$$new($ObjectArray, {
			"America/Rio_Branco"_s,
			Acre
		}),
		$$new($ObjectArray, {
			"America/St_Vincent"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Whitehorse"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"Antarctica/McMurdo"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Antarctica/Rothera"_s,
			Rothera
		}),
		$$new($ObjectArray, {
			"Asia/Yekaterinburg"_s,
			Yekaterinburg
		}),
		$$new($ObjectArray, {
			"Atlantic/Jan_Mayen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Atlantic/Reykjavik"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Atlantic/St_Helena"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Australia/Adelaide"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Brisbane"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Lindeman"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Isle_of_Man"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Kaliningrad"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Kiritimati"_s,
			Line_Islands
		}),
		$$new($ObjectArray, {
			"Africa/Johannesburg"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"America/El_Salvador"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Fort_Nelson"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Mexico_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Pangnirtung"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Porto_Velho"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Puerto_Rico"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Rainy_River"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Tegucigalpa"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Thunder_Bay"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Yellowknife"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"Arctic/Longyearbyen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Atlantic/Cape_Verde"_s,
			Cape_Verde
		}),
		$$new($ObjectArray, {
			"Australia/Lord_Howe"_s,
			Lord_Howe
		}),
		$$new($ObjectArray, {
			"Australia/Melbourne"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Antananarivo"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Guadalcanal"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"Africa/Dar_es_Salaam"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"America/Blanc-Sablon"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Buenos_Aires"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Campo_Grande"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Danmarkshavn"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Dawson_Creek"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Indiana/Knox"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Rankin_Inlet"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Scoresbysund"_s,
			Greenland_Eastern
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Port_Moresby"_s,
			Papua_New_Guinea
		}),
		$$new($ObjectArray, {
			"America/Cambridge_Bay"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Coral_Harbour"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vevay"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Lower_Princes"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Port_of_Spain"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Santo_Domingo"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/St_Barthelemy"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Swift_Current"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Antarctica/South_Pole"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Australia/Broken_Hill"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"America/Bahia_Banderas"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Port-au-Prince"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Atlantic/South_Georgia"_s,
			South_Georgia
		}),
		$$new($ObjectArray, {
			"America/Argentina/Salta"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Marengo"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Winamac"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Argentina/Tucuman"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/Ushuaia"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Tell_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vincennes"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			DumontDUrville
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aden"_s,
			u"एडन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baku"_s,
			u"बाकू"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dili"_s,
			u"डिली"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Gaza"_s,
			u"गाज़ा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hovd"_s,
			u"होव्ड"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Omsk"_s,
			u"ओम्स्क"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Oral"_s,
			u"ओराल"_s
		}),
		$$new($ObjectArray, {
			"America/Argentina/La_Rioja"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Juan"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Luis"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Petersburg"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Amman"_s,
			u"अमान"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtau"_s,
			u"अक्ताउ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dhaka"_s,
			u"ढाका"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dubai"_s,
			u"दुबई"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kabul"_s,
			u"काबूल"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Macau"_s,
			u"मकाऊ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qatar"_s,
			u"क़तार"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Seoul"_s,
			u"सोल"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tokyo"_s,
			u"टोक्यो"_s
		}),
		$$new($ObjectArray, {
			"America/Kentucky/Monticello"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Beulah"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Center"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lome"_s,
			u"लोमे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Almaty"_s,
			u"अल्माटी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Anadyr"_s,
			u"अनाडीर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtobe"_s,
			u"अक़्टोबे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Beirut"_s,
			u"बैरुत"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Brunei"_s,
			u"ब्रुनइ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuwait"_s,
			u"कुवैत"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Manila"_s,
			u"मनीला"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Muscat"_s,
			u"मस्कट"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Riyadh"_s,
			u"रियाध"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			u"साइगॉन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Taipei"_s,
			u"ताइपेइ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tehran"_s,
			u"तेहरान"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Urumqi"_s,
			u"उरुमकी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			u"अज्ञात"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kiev"_s,
			u"कीव"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Oslo"_s,
			u"ओस्लो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Riga"_s,
			u"रिगा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Rome"_s,
			u"रोम"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mahe"_s,
			u"माहे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Accra"_s,
			u"आक्रा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Cairo"_s,
			u"कायरो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ceuta"_s,
			u"सेउता"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dakar"_s,
			u"डाकार"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lagos"_s,
			u"लागोस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tunis"_s,
			u"ट्यूनिस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Adak"_s,
			u"एडेक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lima"_s,
			u"लीमा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nome"_s,
			u"नोम"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baghdad"_s,
			u"बग़दाद"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bahrain"_s,
			u"बहरीन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bangkok"_s,
			u"बैंगकॉक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bishkek"_s,
			u"बिश्केक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Colombo"_s,
			u"कोलंबो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Irkutsk"_s,
			u"ईर्कुत्स्क"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jakarta"_s,
			u"जाकार्ता"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Karachi"_s,
			u"कराची"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuching"_s,
			u"कूचिंग"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Magadan"_s,
			u"मगदन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Nicosia"_s,
			u"निकोसिया"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Rangoon"_s,
			u"रंगून"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tbilisi"_s,
			u"तिबिलिसी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Thimphu"_s,
			u"थिम्पु"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yakutsk"_s,
			u"याकूत्स्क"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yerevan"_s,
			u"येरेवान"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Malta"_s,
			u"माल्टा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Minsk"_s,
			u"मिन्स्क"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Paris"_s,
			u"पॅरिस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sofia"_s,
			u"सोफ़िया"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vaduz"_s,
			u"वादुज़"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Cocos"_s,
			u"कोकोस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Apia"_s,
			u"आपिआ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fiji"_s,
			u"फ़िजी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guam"_s,
			u"ग्वाम"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Niue"_s,
			u"नियुएई"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Truk"_s,
			u"ट्रुक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wake"_s,
			u"वाके"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Asmera"_s,
			u"अस्मेरा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bamako"_s,
			u"बामाको"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bangui"_s,
			u"बाँगी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Banjul"_s,
			u"बन्जुल"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bissau"_s,
			u"बिस्साउ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Douala"_s,
			u"दुआला"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Harare"_s,
			u"हरारे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kigali"_s,
			u"किगालि"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Luanda"_s,
			u"लुआँडा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lusaka"_s,
			u"लुसाका"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Malabo"_s,
			u"मालाबो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maputo"_s,
			u"मापुटो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maseru"_s,
			u"मसेरू"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Niamey"_s,
			u"नीआमे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Aruba"_s,
			u"अरूबा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia"_s,
			u"बाहिया"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belem"_s,
			u"बेलेम"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boise"_s,
			u"ब्वाज़"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jujuy"_s,
			u"जुजुई"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thule"_s,
			u"थ्यूल"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ashgabat"_s,
			u"अश्गाबात"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Damascus"_s,
			u"दमास्कस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dushanbe"_s,
			u"दुशांबे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jayapura"_s,
			u"जयापुरा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Katmandu"_s,
			u"काठमांडौ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Makassar"_s,
			u"माकास्सार"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Sakhalin"_s,
			u"सख़ालिन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tashkent"_s,
			u"ताशकंद"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Athens"_s,
			u"एथन्स"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Berlin"_s,
			u"बर्लिन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Dublin"_s,
			u"डबलिन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Lisbon"_s,
			u"लिस्बन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/London"_s,
			u"लंदन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Madrid"_s,
			u"मैड्रिड"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Monaco"_s,
			u"मोनाको"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Moscow"_s,
			u"मॉस्को"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Samara"_s,
			u"समारा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tirane"_s,
			u"टिरान"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vienna"_s,
			u"वियेना"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Warsaw"_s,
			u"वॉरसॉ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zurich"_s,
			u"ज़्युरिक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Chagos"_s,
			u"चागोस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Comoro"_s,
			u"कोमोरो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Efate"_s,
			u"एफ़ाटे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Nauru"_s,
			u"नौरू"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Palau"_s,
			u"पलाऊ"_s
		}),
		$$new($ObjectArray, {
			"America/Argentina/Rio_Gallegos"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/New_Salem"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Abidjan"_s,
			u"अबिद्जान"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Algiers"_s,
			u"आल्जीए"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Conakry"_s,
			u"कोनाक्री"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kampala"_s,
			u"कंपाला"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mbabane"_s,
			u"म्बाबने"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nairobi"_s,
			u"नैरोबी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tripoli"_s,
			u"त्रिपोली"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belize"_s,
			u"बेलिज़"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bogota"_s,
			u"बोगोटा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cancun"_s,
			u"कानकुन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayman"_s,
			u"केमॅन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cuiaba"_s,
			u"कुईआबा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson"_s,
			u"डॉसन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Denver"_s,
			u"डॅनवर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guyana"_s,
			u"गुयाना"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Havana"_s,
			u"हवाना"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Inuvik"_s,
			u"इनूविक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Juneau"_s,
			u"जुनो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/La_Paz"_s,
			u"ला पाज़"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Maceio"_s,
			u"माचेईओ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Manaus"_s,
			u"मनाउस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Merida"_s,
			u"मेरिडा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nassau"_s,
			u"नास्साउ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Panama"_s,
			u"पनामा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Recife"_s,
			u"रेसीफ़े"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Regina"_s,
			u"रेजिना"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hong_Kong"_s,
			u"हाँगकाँग"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jerusalem"_s,
			u"येरुसलम"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kamchatka"_s,
			u"कामचटका"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pontianak"_s,
			u"पोंतिआनाक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pyongyang"_s,
			u"प्योंगयाँग"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qyzylorda"_s,
			u"कीज़ीलोर्डा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Samarkand"_s,
			u"समरकंद"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Singapore"_s,
			u"सिंगापुर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vientiane"_s,
			u"वियंसियान"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Andorra"_s,
			u"अंडोरा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tallinn"_s,
			u"टैलिन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vilnius"_s,
			u"विल्निउस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mayotte"_s,
			u"मायोट"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Reunion"_s,
			u"रेयूनियॉं"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Easter"_s,
			u"ईस्टर आइलैंड"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kosrae"_s,
			u"कोसराए"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Majuro"_s,
			u"मजूरो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Midway"_s,
			u"मीडवे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Noumea"_s,
			u"नूमिया"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Ponape"_s,
			u"पोनापे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Saipan"_s,
			u"सइपान"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tahiti"_s,
			u"टाहिटी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tarawa"_s,
			u"तरावा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wallis"_s,
			u"वॅलिस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Blantyre"_s,
			u"ब्लांटीर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Djibouti"_s,
			u"ड्जिबुटी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/El_Aaiun"_s,
			u"अल आइउन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Freetown"_s,
			u"फ़्रीटाउन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Gaborone"_s,
			u"गैबोरोन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Khartoum"_s,
			u"खार्तूम"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kinshasa"_s,
			u"किन्शासा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Monrovia"_s,
			u"मोनरोविया"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ndjamena"_s,
			u"न्जामेना"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Sao_Tome"_s,
			u"साँव टोमे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Windhoek"_s,
			u"विन्डोक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Antigua"_s,
			u"एंटिगुआ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Caracas"_s,
			u"काराकास"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayenne"_s,
			u"कायेन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chicago"_s,
			u"शिकागो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cordoba"_s,
			u"कोर्डोबा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Curacao"_s,
			u"क्यूरासाओं"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Detroit"_s,
			u"डेट्रोई"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Godthab"_s,
			u"गॉडथैब"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grenada"_s,
			u"ग्रेनाडा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Halifax"_s,
			u"हैलिफेक्स"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Iqaluit"_s,
			u"इकाल्यूईत"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jamaica"_s,
			u"जमैका"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Managua"_s,
			u"मनागुआ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mendoza"_s,
			u"मेंडोज़ा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Moncton"_s,
			u"मोंक्ट्न"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nipigon"_s,
			u"निपिगॉन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Noronha"_s,
			u"नोरोन्हा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Phoenix"_s,
			u"फीनिक्स"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tijuana"_s,
			u"टिहुआना"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Toronto"_s,
			u"टोरोंटो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tortola"_s,
			u"टॉरटोला"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yakutat"_s,
			u"यकूतत"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Choibalsan"_s,
			u"चोइबालसन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Phnom_Penh"_s,
			u"नॉम पेन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Azores"_s,
			u"अज़ोर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Canary"_s,
			u"कनेरी द्वीप"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			u"फ़ैरो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Eucla"_s,
			u"यूक्ला"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Perth"_s,
			u"पर्थ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Brussels"_s,
			u"ब्रसल्स"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Budapest"_s,
			u"बुदापेस्ट"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Chisinau"_s,
			u"चिसीनौ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Helsinki"_s,
			u"हैल्सिंकी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Istanbul"_s,
			u"इस्तांबुल"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			u"उज़्गोरोड्"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Maldives"_s,
			u"मालदीव"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Chatham"_s,
			u"चॅथम"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fakaofo"_s,
			u"फ़काओफ़ो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Gambier"_s,
			u"गाम्बिये"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Norfolk"_s,
			u"नोरफ़ोक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bujumbura"_s,
			u"बुजुम्बुरा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mogadishu"_s,
			u"मोगाडिशू"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anguilla"_s,
			u"एंगिला"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Asuncion"_s,
			u"आसुनसीओन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Barbados"_s,
			u"बार्बाडोस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dominica"_s,
			u"डॉमिनिका"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Edmonton"_s,
			u"एडमंटन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Eirunepe"_s,
			u"एईरुनेपे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mazatlan"_s,
			u"माज़ाट्लान"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Miquelon"_s,
			u"मिकलों"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/New_York"_s,
			u"न्यू यार्क"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Resolute"_s,
			u"रॅज़ोल्यूट"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santiago"_s,
			u"सेंटिआगो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Johns"_s,
			u"सेंट जोन्स"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Kitts"_s,
			u"सेंट किट्स"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Lucia"_s,
			u"सेंट लुसीया"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Winnipeg"_s,
			u"विनीपॅग"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Casey"_s,
			u"केसी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Davis"_s,
			u"डेविस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Syowa"_s,
			u"स्योवा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Krasnoyarsk"_s,
			u"क्रास्नोयार्स्क"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novosibirsk"_s,
			u"नोवोसिबिर्स्क"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ulaanbaatar"_s,
			u"उलानबातर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vladivostok"_s,
			u"व्लाडिवॉस्टोक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Bermuda"_s,
			u"बर्मुडा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Madeira"_s,
			u"माडेरा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Stanley"_s,
			u"स्टैनली"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Currie"_s,
			u"करी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Darwin"_s,
			u"डार्विन्"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Hobart"_s,
			u"होबार्ट्"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Sydney"_s,
			u"सिडनी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Amsterdam"_s,
			u"ऐम्स्टरडम"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bucharest"_s,
			u"बुकारेस्ट"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Gibraltar"_s,
			u"जिब्राल्टर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Stockholm"_s,
			u"स्टॉकहॉम"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Volgograd"_s,
			u"वोल्गोग्राड"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Christmas"_s,
			u"क्रिस्मस आइलैंड"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Kerguelen"_s,
			u"कॅरगेइलेन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mauritius"_s,
			u"मॉरिशस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Auckland"_s,
			u"औकलैण्ड"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Funafuti"_s,
			u"फ़ुनाफ़ूटी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Honolulu"_s,
			u"होनोलुलु"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Johnston"_s,
			u"जौन्स्टन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pitcairn"_s,
			u"पिट्कैर्न"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Casablanca"_s,
			u"काज़ाब्लाँका"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Libreville"_s,
			u"लिब्रविल"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lubumbashi"_s,
			u"लुबुम्बाशी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nouakchott"_s,
			u"न्वाकशॉट"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Porto-Novo"_s,
			u"पोर्टो-नोवो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anchorage"_s,
			u"ऐन्करेज"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Araguaina"_s,
			u"अरागुआईना"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boa_Vista"_s,
			u"बोआ विस्टा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Catamarca"_s,
			u"काटामार्का"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chihuahua"_s,
			u"चिवावा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fortaleza"_s,
			u"फ़ोर्टालेज़ा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Glace_Bay"_s,
			u"ग्लास (खाडी) बे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Goose_Bay"_s,
			u"गूस (खाडी) बे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guatemala"_s,
			u"ग्वाटेमाला"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guayaquil"_s,
			u"गुआयाकिल"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Menominee"_s,
			u"मेनोमिनी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Monterrey"_s,
			u"मोंटेरे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sao_Paulo"_s,
			u"साँव पावलो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			u"सेंट टॉमस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Vancouver"_s,
			u"वानकुवर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Mawson"_s,
			u"मॉसन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Palmer"_s,
			u"पामर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Vostok"_s,
			u"वॉस्तॉक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuala_Lumpur"_s,
			u"क्वाला लम्पुर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Copenhagen"_s,
			u"कोपनहागन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Luxembourg"_s,
			u"लक्ज़मबर्ग"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Simferopol"_s,
			u"सिम्फेरोपोल"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zaporozhye"_s,
			u"झापरोझ्य"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Enderbury"_s,
			u"एंडरबरी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Galapagos"_s,
			u"गॅलापागोस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kwajalein"_s,
			u"क्वाजालैन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Marquesas"_s,
			u"मार्केसास"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pago_Pago"_s,
			u"पागो पागो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Rarotonga"_s,
			u"रारोटॉंगा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tongatapu"_s,
			u"टॉंगाटापु"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Addis_Ababa"_s,
			u"ऍडिस अबाबा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Brazzaville"_s,
			u"ब्राज़ावील"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ouagadougou"_s,
			u"ऊगाडुगु"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Costa_Rica"_s,
			u"कॉस्टा रिका"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grand_Turk"_s,
			u"ग्रॅंड टर्क"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guadeloupe"_s,
			u"गुआदलुप"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Hermosillo"_s,
			u"हर्मोसिलो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Louisville"_s,
			u"लुईवील"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Martinique"_s,
			u"मार्टीनीक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montevideo"_s,
			u"मोन्टेवीडिओ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montserrat"_s,
			u"मॉंसेरा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Paramaribo"_s,
			u"पारामारिबो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rio_Branco"_s,
			u"रियो ब्रान्को"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Vincent"_s,
			u"सेंट विन्संट"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Whitehorse"_s,
			u"व्हाईट हॉर्स"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/McMurdo"_s,
			u"मकमर्डो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Rothera"_s,
			u"रोथेरा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yekaterinburg"_s,
			u"येकातेरिनबर्ग"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Reykjavik"_s,
			u"रीकयाविक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/St_Helena"_s,
			u"सेंट हेलेना"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Adelaide"_s,
			u"एडलेड्"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Brisbane"_s,
			u"ब्रीसबेन्"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lindeman"_s,
			u"लिंडमेन्"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kaliningrad"_s,
			u"कालिलीनग्राड"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kiritimati"_s,
			u"किरीतिमाति"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Johannesburg"_s,
			u"जोहानेसबर्ग"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/El_Salvador"_s,
			u"ऍल साल्वादोर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Los_Angeles"_s,
			u"लोस ऐंजिलेस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mexico_City"_s,
			u"मेक्सिको सिटी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Pangnirtung"_s,
			u"पंग्नीरटुँग्"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Porto_Velho"_s,
			u"पोर्टो वेल्हो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Puerto_Rico"_s,
			u"पुएर्तो रिको"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rainy_River"_s,
			u"रेनी रीवर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thunder_Bay"_s,
			u"थंडर खाडी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yellowknife"_s,
			u"यलोनाईफ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Cape_Verde"_s,
			u"केप वॅर्दे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lord_Howe"_s,
			u"लोर्ड होव्"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Melbourne"_s,
			u"मेलबोर्न्"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Antananarivo"_s,
			u"ऐंटनानरीवो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guadalcanal"_s,
			u"ग्वाडालकनाल"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dar_es_Salaam"_s,
			u"दार एस सलाम"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Blanc-Sablon"_s,
			u"ब्लाँ-साबलोन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Buenos_Aires"_s,
			u"बुएनोस एरेस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Campo_Grande"_s,
			u"काम्पो ग्रांडे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Danmarkshavn"_s,
			u"डेनमार्क्सहैवन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson_Creek"_s,
			u"डॉसन क्रिक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Knox"_s,
			u"नॉक्स"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indianapolis"_s,
			u"इन्डियानापोलिस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rankin_Inlet"_s,
			u"रेनकिन इनलेट"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Scoresbysund"_s,
			u"स्कोर्सबाइसुंड"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Port_Moresby"_s,
			u"पोर्ट मोर्सबी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cambridge_Bay"_s,
			u"केम्ब्रिज खाडी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Coral_Harbour"_s,
			u"कॉरल बन्दरगाह"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vevay"_s,
			u"वेवे"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port_of_Spain"_s,
			u"पोर्ट ऑफ़ स्पेन"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santo_Domingo"_s,
			u"साँतो डोमिंगो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Swift_Current"_s,
			u"स्विफ्ट करंट"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Broken_Hill"_s,
			u"ब्रोकन हिल्"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port-au-Prince"_s,
			u"पॉर-ओ-प्रँस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/South_Georgia"_s,
			u"साउथ जॉर्जिया"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Marengo"_s,
			u"मारेंगो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Winamac"_s,
			u"विनामॅक"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Tucuman"_s,
			u"टुकुमान"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Ushuaia"_s,
			u"उशूआयिया"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Tell_City"_s,
			u"टॅल सिटी"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vincennes"_s,
			u"वॅंसेन्"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/DumontDUrville"_s,
			u"डुमॉं ड्युरवील"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/La_Rioja"_s,
			u"ला रिओख़ा"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Juan"_s,
			u"सान हुआँ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Luis"_s,
			u"सान लुईस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Petersburg"_s,
			u"पिटर्सबर्ग"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kentucky/Monticello"_s,
			u"मोंटीचेलो"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Center"_s,
			u"सैन्टर"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Rio_Gallegos"_s,
			u"रियो गालेगोस"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/New_Salem"_s,
			u"न्यू सॅलेम"_s
		})
	}));
	return data;
}

TimeZoneNames_brx::TimeZoneNames_brx() {
}

$Class* TimeZoneNames_brx::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_brx, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_brx, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_brx",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_brx, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_brx);
	});
	return class$;
}

$Class* TimeZoneNames_brx::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun