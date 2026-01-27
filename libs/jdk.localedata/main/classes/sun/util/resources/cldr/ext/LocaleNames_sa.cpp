#include <sun/util/resources/cldr/ext/LocaleNames_sa.h>

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

$MethodInfo _LocaleNames_sa_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sa, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sa, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sa_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sa",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sa_MethodInfo_
};

$Object* allocate$LocaleNames_sa($Class* clazz) {
	return $of($alloc(LocaleNames_sa));
}

void LocaleNames_sa::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sa::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ब्राजील"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"चीन:"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"जर्मनीदेश:"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"फ़्रांस:"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"संयुक्त राष्ट्र:"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"भारतः"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"इटली:"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"जापन:"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"रष्यदेश:"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"संयुक्त राज्य:"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"अज्ञात क्षेत्र:"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"जर्मनभाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"आङ्ग्लभाषा"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"स्पेनीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"फ़्रांसदेशीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"इटलीदेशीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"सूर्यमूलीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"पुर्तगालदेशीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"रष्यदेशीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"संस्कृत भाषा"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"अचिनीस्"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"अचोलि"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"अङ्गिक"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"अज्ञात भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"अरबी"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"सिरिलिक:"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"सरलीकृत"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"परम्परागत"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"लैटिन:"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"अलिखित:"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"अज्ञात लिपि:"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ऑस्ट्रियाई जर्मनभाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"स्विस उच्च जर्मनभाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ऑस्ट्रेलियादेशः आङ्ग्लभाषा"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"कनाडादेशः आङ्ग्लभाषा"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"आङ्ग्लदेशीय आङ्ग्लभाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"अमेरिकादेशीय आङ्ग्लभाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"फिरङ्गिन् स्पेनीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"मैक्सिकन स्पेनीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"कनाडादेशः फ़्रांसदेशीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"स्विस फ़्रांसदेशीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ब्राज़ीली पुर्तगालदेशीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"फिरङ्गिन् पुर्तगालदेशीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"लैटिन अमेरिकादेशीय स्पेनीय भाषा:"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"सरलीकृत चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"परम्परागत चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"पाश्चात्य अङ्कः"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"मानक न्यूनतम क्रम"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ग्रेगोरियन पञ्चाङ्ग"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"परम्परागत न्यूनतम क्रम"_s)
		})
	}));
	return data;
}

LocaleNames_sa::LocaleNames_sa() {
}

$Class* LocaleNames_sa::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sa, name, initialize, &_LocaleNames_sa_ClassInfo_, allocate$LocaleNames_sa);
	return class$;
}

$Class* LocaleNames_sa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun