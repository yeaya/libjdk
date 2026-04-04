#include <sun/util/resources/cldr/ext/TimeZoneNames_pa.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ETC_UTC
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

void TimeZoneNames_pa::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_pa::getContents() {
	$useLocalObjectStack();
	$var($StringArray, GMT, $new($StringArray, {
		u"ਗ੍ਰੀਨਵਿਚ ਮੀਨ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"ਐਪੀਆ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਐਪੀਆ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਐਪੀਆ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"ਕੁੱਕ ਆਈਲੈਂਡ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਕੁੱਕ ਆਈਲੈਂਡ ਅੱਧ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਕੁੱਕ ਆਈਲੈਂਡ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"ਕਿਊਬਾ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਕਿਊਬਾ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਕਿਊਬਾ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"ਫ਼ਿਜ਼ੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਫ਼ਿਜ਼ੀ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਫ਼ਿਜ਼ੀ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"ਖਾੜੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"ਹੋਵਡ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਹੋਵਡ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਹੋਵਡ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"ਈਰਾਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਈਰਾਨ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਈਰਾਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"ਨੀਊ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"ਓਮਸਕ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਓਮਸਕ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਓਮਸਕ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"ਪੇਰੂ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਪੇਰੂ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਪੇਰੂ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"ਚੂਕ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"ਵੇਕ ਆਈਲੈਂਡ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Casey, $new($StringArray, {
		u"ਕੇਸੀ ਸਮਾਂ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"ਚਿਲੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਚਿਲੀ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਚਿਲੀ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"ਚੀਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਚੀਨ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਚੀਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"ਕੋਕਸ ਆਈਲੈਂਡ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"ਡੇਵਿਸ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"ਭਾਰਤੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		"IST"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"ਜਪਾਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਜਪਾਨ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਜਪਾਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"ਕੋਰੀਆਈ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਕੋਰੀਆਈ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਕੋਰੀਆਈ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"ਨਾਉਰੂ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"ਨੇਪਾਲ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"ਪਲਾਉ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"ਸਾਮੋਆ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਸਾਮੋਆ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਸਾਮੋਆ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"ਸਿਓਵਾ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"ਟੋਂਗਾ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਟੋਂਗਾ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਟੋਂਗਾ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"ਅਲਾਸਕਾ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਅਲਾਸਕਾ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਅਲਾਸਕਾ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"ਅਮੇਜ਼ਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਅਮੇਜ਼ਨ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਅਮੇਜ਼ਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"ਅਜੋਰੇਸ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਅਜੋਰੇਸ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਅਜੋਰੇਸ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"ਭੂਟਾਨ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"ਬਰੂਨੇਈ ਦਾਰੂਸਲਾਮ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"ਈਸਟਰ ਆਈਲੈਂਡ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਈਸਟਰ ਆਈਲੈਂਡ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਈਸਟਰ ਆਈਲੈਂਡ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"ਗੁਯਾਨਾ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"ਇਜ਼ਰਾਈਲ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਇਜ਼ਰਾਈਲ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਇਜ਼ਰਾਈਲ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"ਕੋਸਰੇ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"ਮੌਸਨ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"ਮਾਸਕੋ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਮਾਸਕੋ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਮਾਸਕੋ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"ਪੋਨਾਪੇ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"ਤਾਹੀਤੀ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"ਤੈਪਈ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਤੈਪਈ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਤੈਪਈ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"ਟੁਵਾਲੂ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"ਵੋਸਟੋਕ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"ਵਾਲਿਸ ਅਤੇ ਫੁਟੂਨਾ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"ਅਰਬੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਅਰਬੀ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਅਰਬੀ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"ਅਰਮੀਨੀਆ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਅਰਮੀਨੀਆ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਅਰਮੀਨੀਆ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"ਬੋਲੀਵੀਆ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"ਚੈਥਮ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਚੈਥਮ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਚੈਥਮ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"ਕੋਔਰਡੀਨੇਟੇਡ ਵਿਆਪਕ ਵੇਲਾ"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"ਇਕਵੇਡੋਰ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"ਗੈਂਬੀਅਰ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"ਜਾਰਜੀਆ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਜਾਰਜੀਆ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਜਾਰਜੀਆ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"ਇਰਕੁਤਸਕ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਇਰਕੁਤਸਕ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਇਰਕੁਤਸਕ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"ਮੈਗੇਡਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਮੈਗੇਡਨ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਮੈਗੇਡਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"ਮਿਆਂਮਾਰ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"ਨੋਰਫੌਕ ਆਈਲੈਂਡ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਨੋਰਫੌਕ ਆਈਲੈਂਡ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਨੋਰਫੌਕ ਆਈਲੈਂਡ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"ਫਰਨਾਂਡੋ ਡੇ ਨੋਰੋਨਹਾ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਫਰਨਾਂਡੋ ਡੇ ਨੋਰੋਨਹਾ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਫਰਨਾਂਡੋ ਡੇ ਨੋਰੋਨਹਾ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"ਰਿਯੂਨੀਅਨ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"ਰੋਥੇਰਾ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"ਸੋਲੋਮਨ ਆਈਲੈਂਡਸ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"ਟੋਕੇਲਾਉ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"ਉਰੂਗਵੇ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਉਰੂਗਵੇ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਉਰੂਗਵੇ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"ਵਾਨੂਆਟੂ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਵਾਨੂਆਟੂ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਵਾਨੂਆਟੂ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"ਯਕੁਤਸਕ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਯਕੁਤਸਕ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਯਕੁਤਸਕ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"ਅਟਲਾਂਟਿਕ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਅਟਲਾਂਟਿਕ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਅਟਲਾਂਟਿਕ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"ਬ੍ਰਾਜ਼ੀਲੀਆ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਬ੍ਰਾਜ਼ੀਲੀਆ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਬ੍ਰਾਜ਼ੀਲੀਆ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"ਚਾਮੋਰੋ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"ਕੋਲੰਬੀਆ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਕੋਲੰਬੀਆ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਕੋਲੰਬੀਆ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"ਫ਼ਾਕਲੈਂਡ ਆਈਲੈਂਡਸ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਫ਼ਾਕਲੈਂਡ ਆਈਲੈਂਡਸ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਫ਼ਾਕਲੈਂਡ ਆਈਲੈਂਡਸ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"ਮਲੇਸ਼ੀਆ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"ਮਾਲਦੀਵ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"ਉਲਨ ਬਟੋਰ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਉਲਨ ਬਟੋਰ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਉਲਨ ਬਟੋਰ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"ਪਾਕਿਸਤਾਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਪਾਕਿਸਤਾਨ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਪਾਕਿਸਤਾਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"ਪੈਰਾਗਵੇ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਪੈਰਾਗਵੇ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਪੈਰਾਗਵੇ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"ਪਿਟਕੈਰਨ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"ਸਖਲੀਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਸਖਲੀਨ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਸਖਲੀਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"ਸੂਰੀਨਾਮ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"ਅਰਜਨਟੀਨਾ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਅਰਜਨਟੀਨਾ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਅਰਜਨਟੀਨਾ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"ਕ੍ਰਿਸਮਸ ਆਈਲੈਂਡ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"ਗਲਾਪਾਗੋਸ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"ਹਾਂਗ ਕਾਂਗ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਹਾਂਗ ਕਾਂਗ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਹਾਂਗ ਕਾਂਗ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"ਇੰਡੋਚਾਈਨਾ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"ਕਿਰਗਿਸਤਾਨ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"ਲੌਰਡ ਹੋਵੇ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਲੌਰਡ ਹੋਵੇ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਲੌਰਡ ਹੋਵੇ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"ਮਾਰਕਿਸਾਸ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"ਮੌਰਿਸ਼ਸ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਮੌਰਿਸ਼ਸ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਮੌਰਿਸ਼ਸ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"ਸਿੰਗਾਪੁਰ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"ਵੈਨੇਜ਼ੂਏਲਾ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"ਵੋਲਗੋਗ੍ਰੇਡ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਵੋਲਗੋਗ੍ਰੇਡ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਵੋਲਗੋਗ੍ਰੇਡ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"ਅਜ਼ਰਬਾਈਜਾਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਅਜ਼ਰਬਾਈਜਾਨ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਅਜ਼ਰਬਾਈਜਾਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"ਬੰਗਲਾਦੇਸ਼ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਬੰਗਲਾਦੇਸ਼ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਬੰਗਲਾਦੇਸ਼ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"ਕੇਪ ਵਰਡ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਕੇਪ ਵਰਡ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਕੇਪ ਵਰਡ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"ਪੂਰਬੀ ਤਿਮੂਰ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"ਸੇਸ਼ਲਸ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"ਤਾਜਿਕਿਸਤਾਨ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"ਉਜ਼ਬੇਕਿਸਤਾਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਉਜ਼ਬੇਕਿਸਤਾਨ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਉਜ਼ਬੇਕਿਸਤਾਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"ਅਫ਼ਗਾਨਿਸਤਾਨ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"ਕ੍ਰਾਸਨੋਯਾਰਸਕ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਕ੍ਰਾਸਨੋਯਾਰਸਕ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਕ੍ਰਾਸਨੋਯਾਰਸਕ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"ਨਿਊਜ਼ੀਲੈਂਡ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਨਿਊਜ਼ੀਲੈਂਡ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਨਿਊਜ਼ੀਲੈਂਡ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"ਨੌਵੋਸਿਬੀਰਸਕ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਨੌਵੋਸਿਬੀਰਸਕ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਨੌਵੋਸਿਬੀਰਸਕ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"ਫਿਲਿਪੀਨੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਫਿਲਿਪੀਨੀ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਫਿਲਿਪੀਨੀ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"ਵਲਾਦੀਵੋਸਤਕ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਵਲਾਦੀਵੋਸਤਕ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਵਲਾਦੀਵੋਸਤਕ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"ਹਿੰਦ ਮਹਾਂਸਾਗਰ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"ਲਾਈਨ ਆਈਲੈਂਡ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"ਨਿਊਫਾਉਂਡਲੈਂਡ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਨਿਊਫਾਉਂਡਲੈਂਡ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਨਿਊਫਾਉਂਡਲੈਂਡ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"ਤੁਰਕਮੇਨਿਸਤਾਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਤੁਰਕਮੇਨਿਸਤਾਨ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਤੁਰਕਮੇਨਿਸਤਾਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"ਫ੍ਰੈਂਚ ਗੁਏਨਾ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"ਨਿਊ ਕੈਲੇਡੋਨੀਆ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਨਿਊ ਕੈਲੇਡੋਨੀਆ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਨਿਊ ਕੈਲੇਡੋਨੀਆ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"ਦੱਖਣੀ ਜਾਰਜੀਆ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"ਯਕੇਤਰਿਨਬਰਗ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਯਕੇਤਰਿਨਬਰਗ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਯਕੇਤਰਿਨਬਰਗ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"ਕੇਂਦਰੀ ਅਫਰੀਕਾ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"ਪੂਰਬੀ ਅਫਰੀਕਾ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"ਪੱਛਮੀ ਅਫਰੀਕਾ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਪੱਛਮੀ ਅਫਰੀਕਾ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਪੱਛਮੀ ਅਫਰੀਕਾ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"ਡਿਉਮੋਂਟ ਡਿਉਰਵਿਲੇ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"ਮੱਧ ਯੂਰਪੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਮੱਧ ਯੂਰਪੀ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਮੱਧ ਯੂਰਪੀ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"ਪੂਰਬੀ ਯੂਰਪੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਪੂਰਬੀ ਯੂਰਪੀ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਪੂਰਬੀ ਯੂਰਪੀ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"ਪੱਛਮੀ ਯੂਰਪੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਪੱਛਮੀ ਯੂਰਪੀ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਪੱਛਮੀ ਯੂਰਪੀ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"ਮੈਕਸੀਕਨ ਪੈਸਿਫਿਕ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਮੈਕਸੀਕਨ ਪੈਸਿਫਿਕ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਮੈਕਸੀਕਨ ਪੈਸਿਫਿਕ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"ਦੱਖਣੀ ਅਫ਼ਰੀਕਾ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਕੇਂਦਰੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਕੇਂਦਰੀ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਕੇਂਦਰੀ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਪੂਰਬੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਪੂਰਬੀ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਪੂਰਬੀ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਪੈਸਿਫਿਕ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਪੈਸਿਫਿਕ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਪੈਸਿਫਿਕ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"ਫ੍ਰੈਂਚ ਦੱਖਣੀ ਅਤੇ ਐਂਟਾਰਟਿਕ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"ਗਿਲਬਰਟ ਆਈਲੈਂਡ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"ਹਵਾਈ-ਅਲੇਯੂਸ਼ਿਅਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਹਵਾਈ-ਅਲੇਯੂਸ਼ਿਅਨ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਹਵਾਈ-ਅਲੇਯੂਸ਼ਿਅਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"ਫਿਨਿਕਸ ਆਈਲੈਂਡ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"ਸੈਂਟ ਪੀਅਰੇ ਅਤੇ ਮਿਕੇਲਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਸੈਂਟ ਪੀਅਰੇ ਅਤੇ ਮਿਕੇਲਨ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਸੈਂਟ ਪੀਅਰੇ ਅਤੇ ਮਿਕੇਲਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਮਾਉਂਟੇਨ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਮਾਉਂਟੇਨ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਉੱਤਰੀ ਅਮਰੀਕੀ ਮਾਉਂਟੇਨ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"ਮਾਰਸ਼ਲ ਆਈਲੈਂਡ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"ਉੱਤਰ ਪੱਛਮੀ ਮੈਕਸੀਕੋ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਉੱਤਰ ਪੱਛਮੀ ਮੈਕਸੀਕੋ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਉੱਤਰ ਪੱਛਮੀ ਮੈਕਸੀਕੋ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"ਪਾਪੂਆ ਨਿਊ ਗਿਨੀ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"ਆਸਟ੍ਰੇਲੀਆਈ ਕੇਂਦਰੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਆਸਟ੍ਰੇਲੀਆਈ ਕੇਂਦਰੀ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਕੇਂਦਰੀ ਆਸਟ੍ਰੇਲੀਆਈ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"ਆਸਟ੍ਰੇਲੀਆਈ ਪੂਰਬੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਆਸਟ੍ਰੇਲੀਆਈ ਪੂਰਬੀ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਪੂਰਬੀ ਆਸਟ੍ਰੇਲੀਆਈ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"ਆਸਟ੍ਰੇਲੀਆਈ ਪੱਛਮੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਆਸਟ੍ਰੇਲੀਆਈ ਪੱਛਮੀ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਪੱਛਮੀ ਆਸਟ੍ਰੇਲੀਆਈ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"ਪੂਰਬੀ ਗ੍ਰੀਨਲੈਂਡ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਪੂਰਬੀ ਗ੍ਰੀਨਲੈਂਡ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਪੂਰਬੀ ਗ੍ਰੀਨਲੈਂਡ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"ਪੱਛਮੀ ਗ੍ਰੀਨਲੈਂਡ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਪੱਛਮੀ ਗ੍ਰੀਨਲੈਂਡ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
		""_s,
		u"ਪੱਛਮੀ ਗ੍ਰੀਨਲੈਂਡ ਵੇਲਾ"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"ਮੱਧ ਇੰਡੋਨੇਸ਼ੀਆਈ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"ਪੂਰਬੀ ਇੰਡੋਨੇਸ਼ੀਆ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"ਪੱਛਮੀ ਇੰਡੋਨੇਸ਼ੀਆ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"ਪੂਰਬੀ ਕਜ਼ਾਖ਼ਸਤਾਨ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"ਪੱਛਮੀ ਕਜ਼ਾਖ਼ਸਤਾਨ ਵੇਲਾ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"ਆਸਟ੍ਰੇਲੀਆਈ ਕੇਂਦਰੀ ਪੱਛਮੀ ਮਿਆਰੀ ਵੇਲਾ"_s,
		""_s,
		u"ਆਸਟ੍ਰੇਲੀਆਈ ਕੇਂਦਰੀ ਪੱਛਮੀ ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s,
		""_s,
		u"ਆਸਟ੍ਰੇਲੀਆਈ ਕੇਂਦਰੀ ਪੱਛਮੀ ਵੇਲਾ"_s,
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
			ETC_UTC
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
			"MIT"_s,
			Apia
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
			"Etc/UTC"_s,
			ETC_UTC
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
			"Asia/Taipei"_s,
			Taipei
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
			"Pacific/Apia"_s,
			Apia
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
				u"ਗ੍ਰੀਨਵਿਚ ਮੀਨ ਵੇਲਾ"_s,
				""_s,
				u"ਆਇਰਿਸ਼ ਮਿਆਰੀ ਵੇਲਾ"_s,
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
				u"ਗ੍ਰੀਨਵਿਚ ਮੀਨ ਵੇਲਾ"_s,
				""_s,
				u"ਬ੍ਰਿਟਿਸ਼ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
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
				u"ਗ੍ਰੀਨਵਿਚ ਮੀਨ ਵੇਲਾ"_s,
				""_s,
				u"ਬ੍ਰਿਟਿਸ਼ ਗਰਮੀਆਂ ਦਾ ਵੇਲਾ"_s,
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
			"America/Mazatlan"_s,
			Mexico_Pacific
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
			"Antarctica/Casey"_s,
			Casey
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
			"America/Chihuahua"_s,
			Mexico_Pacific
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
			"America/Hermosillo"_s,
			Mexico_Pacific
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
			"America/Santa_Isabel"_s,
			Mexico_Northwest
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
			u"ਅਡੇਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baku"_s,
			u"ਬਾਕੂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dili"_s,
			u"ਡਿਲੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Gaza"_s,
			u"ਗਾਜ਼ਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hovd"_s,
			u"ਹੋਵਡ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Omsk"_s,
			u"ਓਮਸਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Oral"_s,
			u"ਓਰਲ"_s
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
			u"ਅਮਾਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtau"_s,
			u"ਅਕਤੌ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Chita"_s,
			u"ਚਿਤਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dhaka"_s,
			u"ਢਾਕਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dubai"_s,
			u"ਦੁਬਈ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kabul"_s,
			u"ਕਾਬੁਲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Macau"_s,
			u"ਮਕਾਉ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qatar"_s,
			u"ਕਤਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Seoul"_s,
			u"ਸਿਉਲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tokyo"_s,
			u"ਟੋਕੀਓ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tomsk"_s,
			u"ਟੋਮਸਕ"_s
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
			"timezone.excity.Africa/Juba"_s,
			u"ਜੂਬਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lome"_s,
			u"ਲੋਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Almaty"_s,
			u"ਅਲਮੇਟੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Anadyr"_s,
			u"ਐਨਾਡਾਇਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtobe"_s,
			u"ਅਕਤੋਬੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Atyrau"_s,
			u"ਏਤੇਰਾਓ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Beirut"_s,
			u"ਬੈਰੂਤ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Brunei"_s,
			u"ਬਰੂਨੇਈ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hebron"_s,
			u"ਹੇਬਰਾਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuwait"_s,
			u"ਕੁਵੈਤ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Manila"_s,
			u"ਮਨੀਲਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Muscat"_s,
			u"ਮਸਕਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Riyadh"_s,
			u"ਰਿਆਧ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			u"ਹੋ ਚੀ ਮਿਨ੍ਹ ਸਿਟੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Taipei"_s,
			u"ਤੈਪਈ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tehran"_s,
			u"ਤੇਹਰਾਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Urumqi"_s,
			u"ਊਰੂਮਕੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			u"ਅਣਪਛਾਤਾ ਸ਼ਹਿਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kiev"_s,
			u"ਕੀਵ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Oslo"_s,
			u"ਓਸਲੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Riga"_s,
			u"ਰਿਗਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Rome"_s,
			u"ਰੋਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mahe"_s,
			u"ਮਾਹੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Accra"_s,
			u"ਅੱਕਰਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Cairo"_s,
			u"ਕੈਰੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ceuta"_s,
			u"ਸੀਊਟਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dakar"_s,
			u"ਡਕਾਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lagos"_s,
			u"ਲਾਗੋਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tunis"_s,
			u"ਟੁਨਿਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Adak"_s,
			u"ਏਡਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lima"_s,
			u"ਲੀਮਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nome"_s,
			u"ਨੋਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baghdad"_s,
			u"ਬਗਦਾਦ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bahrain"_s,
			u"ਬਹਿਰੀਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bangkok"_s,
			u"ਬੈਂਕਾਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Barnaul"_s,
			u"ਬਰਨੌਲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bishkek"_s,
			u"ਬਿਸ਼ਕੇਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Colombo"_s,
			u"ਕੋਲੰਬੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Irkutsk"_s,
			u"ਇਰਕੁਤਸਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jakarta"_s,
			u"ਜਕਾਰਤਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Karachi"_s,
			u"ਕਰਾਚੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuching"_s,
			u"ਕੁਚਿੰਗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Magadan"_s,
			u"ਮੈਗੇਡਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Nicosia"_s,
			u"ਨਿਕੋਸੀਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Rangoon"_s,
			u"ਰੰਗੂਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tbilisi"_s,
			u"ਟਬਿਲਿਸੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Thimphu"_s,
			u"ਥਿੰਫੂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yakutsk"_s,
			u"ਯਕੁਤਸਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yerevan"_s,
			u"ਯੇਰੇਵਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kirov"_s,
			u"ਕੀਰੋਵ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Malta"_s,
			u"ਮਾਲਟਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Minsk"_s,
			u"ਮਿੰਸਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Paris"_s,
			u"ਪੈਰਿਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sofia"_s,
			u"ਸੋਫੀਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vaduz"_s,
			u"ਵਾਡੁਜ਼"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Cocos"_s,
			u"ਕੋਕੋਜ਼"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Apia"_s,
			u"ਐਪੀਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fiji"_s,
			u"ਫ਼ਿਜੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guam"_s,
			u"ਗੁਆਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Niue"_s,
			u"ਨਿਯੂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Truk"_s,
			u"ਚੂਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wake"_s,
			u"ਵੇਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Asmera"_s,
			u"ਅਸਮਾਰਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bamako"_s,
			u"ਬਮੇਕੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bangui"_s,
			u"ਬਾਂਗੁਈ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Banjul"_s,
			u"ਬਾਂਜੁਲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bissau"_s,
			u"ਬਿਸਾਉ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Douala"_s,
			u"ਡੌਆਲਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Harare"_s,
			u"ਹਰਾਰੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kigali"_s,
			u"ਕਿਗਾਲੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Luanda"_s,
			u"ਲੁਆਂਡਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lusaka"_s,
			u"ਲੁਸਾਕਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Malabo"_s,
			u"ਮਾਲਾਬੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maputo"_s,
			u"ਮਾਪੁਟੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maseru"_s,
			u"ਮਸੇਰੂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Niamey"_s,
			u"ਨਿਆਮੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Aruba"_s,
			u"ਅਰੂਬਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia"_s,
			u"ਬਾਹੀਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belem"_s,
			u"ਬੇਲੇਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boise"_s,
			u"ਬੋਇਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jujuy"_s,
			u"ਜੂਜੁਏ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sitka"_s,
			u"ਸਿਟਕਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thule"_s,
			u"ਥੁਲੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ashgabat"_s,
			u"ਅਸ਼ਗਾਬਾਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Calcutta"_s,
			u"ਕੋਲਕਾਤਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Damascus"_s,
			u"ਡੈਮਸਕਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dushanbe"_s,
			u"ਦੁਸ਼ਾਂਬੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jayapura"_s,
			u"ਜਯਾਪੁਰਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Katmandu"_s,
			u"ਕਾਠਮਾਂਡੂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Khandyga"_s,
			u"ਖਾਨਡਿਗਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Makassar"_s,
			u"ਮਕਸਾਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qostanay"_s,
			u"ਕੋਸਤਾਨਾਏ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Sakhalin"_s,
			u"ਸਖਲੀਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Shanghai"_s,
			u"ਸ਼ੰਘਾਈ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tashkent"_s,
			u"ਤਾਸ਼ਕੰਦ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ust-Nera"_s,
			u"ਉਸਤ-ਨੇਰਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Athens"_s,
			u"ਏਥਨਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Berlin"_s,
			u"ਬਰਲਿਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Dublin"_s,
			u"ਡਬਲਿਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Jersey"_s,
			u"ਜਰਸੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Lisbon"_s,
			u"ਲਿਸਬਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/London"_s,
			u"ਲੰਡਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Madrid"_s,
			u"ਮੈਡ੍ਰਿਡ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Monaco"_s,
			u"ਮੋਨਾਕੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Moscow"_s,
			u"ਮਾਸਕੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Prague"_s,
			u"ਪ੍ਰਾਗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Samara"_s,
			u"ਸਮਾਰਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Skopje"_s,
			u"ਸਕੋਪਜੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tirane"_s,
			u"ਤਿਰਾਨੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vienna"_s,
			u"ਵਿਆਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Warsaw"_s,
			u"ਵਾਰਸਾਅ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zagreb"_s,
			u"ਜ਼ਗਰੇਬ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zurich"_s,
			u"ਜਿਊਰਿਖ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Chagos"_s,
			u"ਚਾਗੋਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Comoro"_s,
			u"ਕੋਮੋਰੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Efate"_s,
			u"ਇਫੇਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Nauru"_s,
			u"ਨਾਉਰੂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Palau"_s,
			u"ਪਲਾਉ"_s
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
			u"ਅਬੀਦਜਾਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Algiers"_s,
			u"ਅਲਜੀਅਰਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Conakry"_s,
			u"ਕੋਨੇਕਰੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kampala"_s,
			u"ਕੰਪਾਲਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mbabane"_s,
			u"ਏਮਬਾਬਾਨੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nairobi"_s,
			u"ਨੈਰੋਬੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tripoli"_s,
			u"ਤ੍ਰਿਪੋਲੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belize"_s,
			u"ਬੇਲੀਜ਼"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bogota"_s,
			u"ਬੋਗੋਟਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cancun"_s,
			u"ਕੈਨਕੁਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayman"_s,
			u"ਕੇਮੈਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cuiaba"_s,
			u"ਕਯੁਏਬਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson"_s,
			u"ਡੌਅਸਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Denver"_s,
			u"ਡੇਨਵਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guyana"_s,
			u"ਗੁਆਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Havana"_s,
			u"ਹਵਾਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Inuvik"_s,
			u"ਇਨੁਵਿਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Juneau"_s,
			u"ਜਯੂਨੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/La_Paz"_s,
			u"ਲਾ ਪਾਜ਼"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Maceio"_s,
			u"ਮੈਸੀਓ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Manaus"_s,
			u"ਮਨੌਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Merida"_s,
			u"ਮੇਰਿਡਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nassau"_s,
			u"ਨਾਸਾਓ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Panama"_s,
			u"ਪਨਾਮਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Recife"_s,
			u"ਰੇਸੀਫੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Regina"_s,
			u"ਰੈਜੀਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Famagusta"_s,
			u"ਫਾਮਾਗੁਸਟਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hong_Kong"_s,
			u"ਹਾਂਗ ਕਾਂਗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jerusalem"_s,
			u"ਜੇਰੂਸਲਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kamchatka"_s,
			u"ਕਮਚਟਕਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pontianak"_s,
			u"ਪੌਂਟੀਆਨਾਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pyongyang"_s,
			u"ਪਯੋਂਗਯਾਂਗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qyzylorda"_s,
			u"ਕਿਜ਼ੀਲੋਰਡਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Samarkand"_s,
			u"ਸਮਰਕੰਦ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Singapore"_s,
			u"ਸਿੰਗਾਪੁਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vientiane"_s,
			u"ਵਾਏਨਟਿਆਨੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Andorra"_s,
			u"ਅੰਡੋਰਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Saratov"_s,
			u"ਸੈਰਾਟੋਵ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tallinn"_s,
			u"ਟੱਲਿਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vatican"_s,
			u"ਵੈਟਿਕਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vilnius"_s,
			u"ਵਿਲਨਿਅਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mayotte"_s,
			u"ਮਾਯੋਟੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Reunion"_s,
			u"ਰਿਯੂਨੀਅਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Easter"_s,
			u"ਈਸਟਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kosrae"_s,
			u"ਕੋਸ੍ਰਾਏ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Majuro"_s,
			u"ਮੇਜੁਰੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Midway"_s,
			u"ਮਿਡਵੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Noumea"_s,
			u"ਨੌਮਿਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Ponape"_s,
			u"ਪੋਹਨਪੇਈ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Saipan"_s,
			u"ਸੈਪਾਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tahiti"_s,
			u"ਤਹਿਤੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tarawa"_s,
			u"ਟਾਰਾਵਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wallis"_s,
			u"ਵਾਲਿਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Blantyre"_s,
			u"ਬਲੰਟਾਇਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Djibouti"_s,
			u"ਜ਼ੀਬੂਤੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/El_Aaiun"_s,
			u"ਅਲ ਅਯੂਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Freetown"_s,
			u"ਫਰੀਟਾਉਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Gaborone"_s,
			u"ਗਾਬੋਰੋਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Khartoum"_s,
			u"ਖਾਰਟੌਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kinshasa"_s,
			u"ਕਿੰਸ਼ਾਸਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Monrovia"_s,
			u"ਮੋਨਰੋਵੀਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ndjamena"_s,
			u"ਐਂਜਾਮੇਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Sao_Tome"_s,
			u"ਸਾਓ ਟੋਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Windhoek"_s,
			u"ਵਿੰਡਹੋਇਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Antigua"_s,
			u"ਐਂਟੀਗੁਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Caracas"_s,
			u"ਕੈਰਾਕਾਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayenne"_s,
			u"ਕੇਯੇਨੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chicago"_s,
			u"ਸ਼ਿਕਾਗੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cordoba"_s,
			u"ਕੋਰਡੋਬਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Creston"_s,
			u"ਕ੍ਰੈਸਟਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Curacao"_s,
			u"ਕੁਰਾਕਾਓ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Detroit"_s,
			u"ਡਿਟਰੋਇਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Godthab"_s,
			u"ਨੂਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grenada"_s,
			u"ਗ੍ਰੇਨਾਡਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Halifax"_s,
			u"ਹੈਲੀਫੈਕਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Iqaluit"_s,
			u"ਇਕਾਲੁਈਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jamaica"_s,
			u"ਜਮਾਇਕਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Managua"_s,
			u"ਮਨਾਗੁਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Marigot"_s,
			u"ਮੈਰੀਗੋਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mendoza"_s,
			u"ਮੈਂਡੋਜ਼ਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Moncton"_s,
			u"ਮੋਂਕਟਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nipigon"_s,
			u"ਨਿਪਿਗੌਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Noronha"_s,
			u"ਨੌਰੋਨਹਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Ojinaga"_s,
			u"ਓਜੀਨਾਗਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Phoenix"_s,
			u"ਫਿਨਿਕਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tijuana"_s,
			u"ਟਿਜੂਆਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Toronto"_s,
			u"ਟੋਰਾਂਟੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tortola"_s,
			u"ਟੋਰਟੋਲਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yakutat"_s,
			u"ਯਕੁਤਤ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Choibalsan"_s,
			u"ਚੋਇਲਬਾਲਸਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Phnom_Penh"_s,
			u"ਫਨੋਮ ਪੇਨਹ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Azores"_s,
			u"ਅਜੋਰੇਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Canary"_s,
			u"ਕੇਨੇਰੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			u"ਫੈਰੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Eucla"_s,
			u"ਯੂਕਲਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Perth"_s,
			u"ਪਰਥ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Belgrade"_s,
			u"ਬੈਲਗ੍ਰੇਡ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Brussels"_s,
			u"ਬਰੱਸਲਜ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Budapest"_s,
			u"ਬੁਡਾਪੈਸਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Busingen"_s,
			u"ਬੁਸਿੰਜੇਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Chisinau"_s,
			u"ਚਿਸਿਨੌ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Guernsey"_s,
			u"ਗਰਨਜੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Helsinki"_s,
			u"ਹੇਲਸਿੰਕੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Istanbul"_s,
			u"ਇਸਤਾਂਬੁਲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sarajevo"_s,
			u"ਸਾਰਾਜੇਵੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			u"ਉਜ਼ਗੋਰੋਡ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Maldives"_s,
			u"ਮਾਲਦੀਵ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Chatham"_s,
			u"ਚੈਥਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fakaofo"_s,
			u"ਫਕਾਉਫੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Gambier"_s,
			u"ਗੈਂਬੀਅਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Norfolk"_s,
			u"ਨੋਰਫੌਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bujumbura"_s,
			u"ਬੁਜੁੰਬੁਰਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mogadishu"_s,
			u"ਮੋਗਾਦਿਸ਼ੂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anguilla"_s,
			u"ਅੰਗੁਇਲਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Asuncion"_s,
			u"ਐਸੁੰਕੀਅਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Barbados"_s,
			u"ਬਾਰਬਾਡੋਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dominica"_s,
			u"ਡੋਮੀਨਿਕਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Edmonton"_s,
			u"ਐਡਮੋਂਟਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Eirunepe"_s,
			u"ਯੁਰੂਨੀਪੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mazatlan"_s,
			u"ਮਜ਼ੇਤਲਾਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Miquelon"_s,
			u"ਮਿਕੇਲਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/New_York"_s,
			u"ਨਿਊ ਯਾਰਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Resolute"_s,
			u"ਰੈਜ਼ੋਲਿਊਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santarem"_s,
			u"ਸੇਂਟਾਰਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santiago"_s,
			u"ਸੇਂਟੀਆਗੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Johns"_s,
			u"ਸੇਂਟ ਜੌਹਨਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Kitts"_s,
			u"ਸੇਂਟ ਕਿਟਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Lucia"_s,
			u"ਸੇਂਟ ਲੁਸੀਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Winnipeg"_s,
			u"ਵਿਨੀਪੈਗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Casey"_s,
			u"ਕਾਸੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Davis"_s,
			u"ਡੇਵਿਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Syowa"_s,
			u"ਸਵੋਯਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Troll"_s,
			u"ਟਰੋਲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Krasnoyarsk"_s,
			u"ਕਰੈਸਨੇਜਰਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novosibirsk"_s,
			u"ਨੋਵੋਸਿਬੀਰਸਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ulaanbaatar"_s,
			u"ਉਲਾਨਬਾਤਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vladivostok"_s,
			u"ਵਲਾਦੀਵੋਸਤਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Bermuda"_s,
			u"ਬਰਮੂਡਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Madeira"_s,
			u"ਮਡੀਅਰਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Stanley"_s,
			u"ਸਟੇਨਲੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Currie"_s,
			u"ਕਰੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Darwin"_s,
			u"ਡਾਰਵਿਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Hobart"_s,
			u"ਹੋਬਾਰਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Sydney"_s,
			u"ਸਿਡਨੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Amsterdam"_s,
			u"ਐਮਸਟਰਡਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Astrakhan"_s,
			u"ਆਸਟ੍ਰਾਖਾਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bucharest"_s,
			u"ਬੂਕਾਰੈਸਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Gibraltar"_s,
			u"ਜਿਬਰਾਲਟਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ljubljana"_s,
			u"ਲਜੁਬਲਜਾਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Mariehamn"_s,
			u"ਮਾਰੀਏਹਾਮੇਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Podgorica"_s,
			u"ਪੋਡਗੋਰੀਕਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Stockholm"_s,
			u"ਸਟਾਕਹੋਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ulyanovsk"_s,
			u"ਯੁਲਿਆਨੋਸਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Volgograd"_s,
			u"ਵੋਲਗੋਗ੍ਰੇਡ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Christmas"_s,
			u"ਕ੍ਰਿਸਮਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Kerguelen"_s,
			u"ਕਰਗਯੂਲੇਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mauritius"_s,
			u"ਮੌਰਿਸ਼ਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Auckland"_s,
			u"ਆਕਲੈਂਡ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Funafuti"_s,
			u"ਫੁਨਾਫੁਟੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Honolulu"_s,
			u"ਹੋਨੋਲੁਲੂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Johnston"_s,
			u"ਜੋਨਸਟਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pitcairn"_s,
			u"ਪਿਟਕੈਰਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Casablanca"_s,
			u"ਕਾਸਾਬਲਾਂਕਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Libreville"_s,
			u"ਲਿਬਰਵਿਲੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lubumbashi"_s,
			u"ਲੁਬੁਮਬਾਸ਼ੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nouakchott"_s,
			u"ਨੌਆਕਸ਼ਾਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Porto-Novo"_s,
			u"ਪੋਰਟੋ-ਨੋਵੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anchorage"_s,
			u"ਐਂਕਰੇਜ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Araguaina"_s,
			u"ਆਰਗੁਆਇਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boa_Vista"_s,
			u"ਬੋਆ ਵਿਸਟਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Catamarca"_s,
			u"ਕੈਟਾਮਾਰਕਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chihuahua"_s,
			u"ਚਿਹੁਆਹੁਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fortaleza"_s,
			u"ਫੋਰਟਾਲੇਜ਼ਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Glace_Bay"_s,
			u"ਗਲੇਸ ਬੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Goose_Bay"_s,
			u"ਗੂਜ਼ ਬੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guatemala"_s,
			u"ਗੁਆਟੇਮਾਲਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guayaquil"_s,
			u"ਗੁਆਇਕਵਿਲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Matamoros"_s,
			u"ਮਾਟਾਮੋਰਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Menominee"_s,
			u"ਮੈਨੋਮਿਨੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Monterrey"_s,
			u"ਮੋਨਟੇਰੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sao_Paulo"_s,
			u"ਸਾਓ ਪੌਲੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			u"ਸੇਂਟ ਥੋਮਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Vancouver"_s,
			u"ਵੈਨਕੂਵਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Mawson"_s,
			u"ਮੌਸਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Palmer"_s,
			u"ਪਾਮਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Vostok"_s,
			u"ਵੋਸਟੋਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuala_Lumpur"_s,
			u"ਕੁਆਲਾਲੰਪੁਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novokuznetsk"_s,
			u"ਨੋਵੋਕੁਜ਼ਨੇਟਸਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bratislava"_s,
			u"ਬ੍ਰਾਟਿਸਲਾਵਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Copenhagen"_s,
			u"ਕੋਪਨਹੇਗਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Luxembourg"_s,
			u"ਲਕਜ਼ਮਬਰਗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/San_Marino"_s,
			u"ਸੈਨ ਮਰੀਨੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Simferopol"_s,
			u"ਸਿਮਫਰੋਪੋਲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zaporozhye"_s,
			u"ਜਪੋਰੋਜ਼ਾਏ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Enderbury"_s,
			u"ਏਂਡਰਬਰੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Galapagos"_s,
			u"ਗਲਪੇਗੋਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kwajalein"_s,
			u"ਕਵਾਜਾਲੀਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Marquesas"_s,
			u"ਮਾਰਕਿਸਾਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pago_Pago"_s,
			u"ਪਾਗੋ ਪਾਗੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Rarotonga"_s,
			u"ਰਾਰੋਟੋਂਗਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tongatapu"_s,
			u"ਟੋਂਗਾਟਾਪੂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Addis_Ababa"_s,
			u"ਐਡਿਸ ਅਬਾਬਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Brazzaville"_s,
			u"ਬ੍ਰਾਜ਼ਾਵਿਲੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ouagadougou"_s,
			u"ਉਆਗਾਡੂਗੂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Costa_Rica"_s,
			u"ਕੋਸਟਾ ਰੀਕਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grand_Turk"_s,
			u"ਗਰਾਂਡ ਤੁਰਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guadeloupe"_s,
			u"ਗੁਆਡੇਲੋਪ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Hermosillo"_s,
			u"ਹਰਮੋਸਿੱਲੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kralendijk"_s,
			u"ਕ੍ਰਾਲੇਂਦਿਜਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Louisville"_s,
			u"ਲੁਈਸਵਿਲੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Martinique"_s,
			u"ਮਾਰਟੀਨਿਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Metlakatla"_s,
			u"ਮੇਟਲਾਕਾਟਲਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montevideo"_s,
			u"ਮੋਂਟੇਵੀਡੀਓ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montserrat"_s,
			u"ਮੋਂਟਸੇਰਾਤ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Paramaribo"_s,
			u"ਪੈਰਾਮਰੀਬੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rio_Branco"_s,
			u"ਰੀਓ ਬ੍ਰਾਂਕੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Vincent"_s,
			u"ਸੇਂਟ ਵਿਨਸੇਂਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Whitehorse"_s,
			u"ਵਾਈਟਹੌਰਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/McMurdo"_s,
			u"ਮੈਕਮੁਰਡੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Rothera"_s,
			u"ਰੋਥੇਰਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Srednekolymsk"_s,
			u"ਸਰਿਡਨੀਕੋਲਿਸਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yekaterinburg"_s,
			u"ਯਕੇਤਰਿਨਬਰਗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Reykjavik"_s,
			u"ਰੇਕਜਾਵਿਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/St_Helena"_s,
			u"ਸੇਂਟ ਹੇਲੇਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Adelaide"_s,
			u"ਐਡੀਲੇਡ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Brisbane"_s,
			u"ਬ੍ਰਿਸਬੇਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lindeman"_s,
			u"ਲਿੰਡੇਮਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Isle_of_Man"_s,
			u"ਆਇਲ ਆਫ ਮੈਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kaliningrad"_s,
			u"ਕਲੀਨਿੰਗ੍ਰੇਡ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kiritimati"_s,
			u"ਕਿਰਿਤਿਮਤੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Johannesburg"_s,
			u"ਜੋਹਨਸਬਰਗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/El_Salvador"_s,
			u"ਅਲ ਸਲਵਾਡੋਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fort_Nelson"_s,
			u"ਫੋਰਟ ਨੈਲਸਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Los_Angeles"_s,
			u"ਲਾਸ ਐਂਜਲਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mexico_City"_s,
			u"ਮੈਕਸੀਕੋ ਸਿਟੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Pangnirtung"_s,
			u"ਪੈਂਗਨਿਰਟੰਗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Porto_Velho"_s,
			u"ਪੋਰਟੋ ਵੇਲ੍ਹੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Puerto_Rico"_s,
			u"ਪਿਊਰਟੋ ਰੀਕੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rainy_River"_s,
			u"ਰੇਨੀ ਰਿਵਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tegucigalpa"_s,
			u"ਟੇਗੁਸੀਗਲਪਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thunder_Bay"_s,
			u"ਥੰਡਰ ਬੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yellowknife"_s,
			u"ਯੈਲੋਨਾਈਫ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Arctic/Longyearbyen"_s,
			u"ਲੋਂਗਈਅਰਬਾਇਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Cape_Verde"_s,
			u"ਕੇਪ ਵਰਡ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lord_Howe"_s,
			u"ਲੌਰਡ ਹੋਵੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Melbourne"_s,
			u"ਮੈਲਬੋਰਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Antananarivo"_s,
			u"ਅੰਟਾਨਨੇਰਿਵੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guadalcanal"_s,
			u"ਗੁਆਡਾਕੇਨਲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dar_es_Salaam"_s,
			u"ਦਾਰ ਏਸ ਸਲਾਮ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Blanc-Sablon"_s,
			u"ਬਲੈਂਕ-ਸੈਬਲਾਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Buenos_Aires"_s,
			u"ਬੂਈਨਸ ਆਇਰਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Campo_Grande"_s,
			u"ਕੈਂਪੋ ਗ੍ਰਾਂਡੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Danmarkshavn"_s,
			u"ਡੈਨਮਾਰਕਸ਼ੌਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson_Creek"_s,
			u"ਡੌਅਸਨ ਕ੍ਰੀਕ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Knox"_s,
			u"ਨੋਕਸ, ਇੰਡੀਆਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indianapolis"_s,
			u"ਇੰਡੀਆਨਾਪੋਲਿਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Punta_Arenas"_s,
			u"ਪੰਟਾ ਅਰੇਨਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rankin_Inlet"_s,
			u"ਰੈਂਕਿਨ ਇਨਲੈਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santa_Isabel"_s,
			u"ਸੈਂਟਾ ਇਸਾਬੇਲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Scoresbysund"_s,
			u"ਇੱਟੋਕੋਰਟੂਰਮੀਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Macquarie"_s,
			u"ਮੈਕਕਵੈਰੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Bougainville"_s,
			u"ਬੋਗਨਵਿਲੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Port_Moresby"_s,
			u"ਪੋਰਟ ਮੋਰੇਸਬੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cambridge_Bay"_s,
			u"ਕੈਮਬ੍ਰਿਜ ਬੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Coral_Harbour"_s,
			u"ਐਟੀਕੋਕਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vevay"_s,
			u"ਵੇਵੇ, ਇੰਡੀਆਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lower_Princes"_s,
			u"ਲੋਅਰ ਪ੍ਰਿੰਸ’ਸ ਕਵਾਰਟਰ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port_of_Spain"_s,
			u"ਪੋਰਟ ਔਫ ਸਪੇਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santo_Domingo"_s,
			u"ਸੇਂਟੋ ਡੋਮਿੰਗੋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Barthelemy"_s,
			u"ਸੇਂਟ ਬਾਰਥੇਲੇਮੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Swift_Current"_s,
			u"ਸਵਿਫਟ ਕਰੰਟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Broken_Hill"_s,
			u"ਬ੍ਰੋਕਨ ਹਿਲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia_Banderas"_s,
			u"ਬਾਹੀਆ ਬਾਂਦੇਰਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port-au-Prince"_s,
			u"ਪੋਰਟ-ਔ-ਪ੍ਰਿੰਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/South_Georgia"_s,
			u"ਦੱਖਣੀ ਜਾਰਜੀਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Salta"_s,
			u"ਸਾਲਟਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Marengo"_s,
			u"ਮਾਰੇਂਗੋ, ਇੰਡੀਆਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Winamac"_s,
			u"ਵਿਨਮੈਕ, ਇੰਡੀਆਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Tucuman"_s,
			u"ਟੁਕੁਮਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Ushuaia"_s,
			u"ਉਸ਼ਵਾਇਆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Tell_City"_s,
			u"ਟੈਲ ਸਿਟੀ, ਇੰਡੀਆਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vincennes"_s,
			u"ਵਿੰਸੇਨੇਸ, ਇੰਡੀਆਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/DumontDUrville"_s,
			u"ਡਿਉਮੋਂਟ ਡਿਉਰਵਿਲੇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/La_Rioja"_s,
			u"ਲਾ ਰਿਉਜਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Juan"_s,
			u"ਸੇਨ ਜੁਆਨ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Luis"_s,
			u"ਸੇਨ ਲੂਈਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Petersburg"_s,
			u"ਪੀਟਰਸਬਰਗ, ਇੰਡੀਆਨਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kentucky/Monticello"_s,
			u"ਮੋਂਟੀਸੈਲੋ, ਕੈਂਟਕੀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Beulah"_s,
			u"ਬਿਉਲਾ, ਉੱਤਰੀ ਡਕੋਟਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Center"_s,
			u"ਸੇਂਟਰ, ਉੱਤਰੀ ਡਕੋਟਾ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Rio_Gallegos"_s,
			u"ਰਿਓ ਗੈਲੇਗੋਸ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/New_Salem"_s,
			u"ਨਿਊ ਸਲੇਮ, ਉੱਤਰੀ ਡਕੋਟਾ"_s
		})
	}));
	return data;
}

TimeZoneNames_pa::TimeZoneNames_pa() {
}

$Class* TimeZoneNames_pa::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_pa, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_pa, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_pa",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_pa, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_pa);
	});
	return class$;
}

$Class* TimeZoneNames_pa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun