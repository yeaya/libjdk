#include <sun/util/resources/cldr/ext/LocaleNames_mai.h>

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

$MethodInfo _LocaleNames_mai_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mai, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mai, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_mai_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mai",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mai_MethodInfo_
};

$Object* allocate$LocaleNames_mai($Class* clazz) {
	return $of($alloc(LocaleNames_mai));
}

void LocaleNames_mai::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mai::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ब्राज़ील"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"चीन"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"जर्मनी"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"फ़्रांस"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"यूनाइटेड किंगडम"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"भारत"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"इटली"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"जापान"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"रूस"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"संयुक्त राज्य"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"अज्ञात क्षेत्र"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"स्पेनी"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"फ़्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"इतालवी"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"जापानी"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"पुर्तगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"रूसी"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"मैथिली"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"अज्ञात भाषा"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"अरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"सिरिलिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"देवनागरी"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"सरलीकृत"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"पारंपरिक"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"लैटिन"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"अलिखित"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"अज्ञात लिपि"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ऑस्ट्रियाई जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"स्विस उच्च जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ऑस्ट्रेलियाई अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"कनाडाई अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ब्रिटिश अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"अमेरिकी अंग्रेज़ी"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"यूरोपीय स्पेनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"मैक्सिकन स्पेनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"कनाडाई फ़्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"स्विस फ़्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ब्राज़ीली पुर्तगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"यूरोपीय पुर्तगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"लैटिन अमेरिकी स्पेनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"सरलीकृत चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"पारंपरिक चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"देवनागरी अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"पश्चिमी अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"मानक सॉर्ट क्रम"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ग्रेगोरियन कैलेंडर"_s)
		})
	}));
	return data;
}

LocaleNames_mai::LocaleNames_mai() {
}

$Class* LocaleNames_mai::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mai, name, initialize, &_LocaleNames_mai_ClassInfo_, allocate$LocaleNames_mai);
	return class$;
}

$Class* LocaleNames_mai::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun