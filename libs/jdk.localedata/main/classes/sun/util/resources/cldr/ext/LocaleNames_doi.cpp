#include <sun/util/resources/cldr/ext/LocaleNames_doi.h>

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

$MethodInfo _LocaleNames_doi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_doi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_doi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_doi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_doi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_doi_MethodInfo_
};

$Object* allocate$LocaleNames_doi($Class* clazz) {
	return $of($alloc(LocaleNames_doi));
}

void LocaleNames_doi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_doi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ब्राजील"_s)
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
			$of(u"फ्रांस"_s)
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
			$of(u"यूएस"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"अनजांता खेत्तर"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"अंगरेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"स्पैनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"फ्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"इटालियन"_s)
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
			$of("doi"_s),
			$of(u"डोगरी"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"अनजांती भाशा"_s)
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
			$of(u"रवायती"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"लैटिन"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"अनलिखत"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"अनजांती लिपि"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"आस्ट्रियाई जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"स्विस हाई जर्मन"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"आस्ट्रेलियाई अंगरेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"कैनेडियन अंगरेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ब्रिटिश अंगरेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"अमरीकी अंगरेजी"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"यूरोपी स्पैनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"मैक्सिन स्पैनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"कैनेडियन फ्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"स्विस फ्रेंच"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ब्राजीली पुर्तगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"यूरोपी पुर्तगाली"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"लैटिन अमरीकी स्पैनिश"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"सरलीकृत चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"रवायती चीनी"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"अरबी-इंडिक अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"देवनागरी अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"पच्छमी अंक"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"मानक ताल तरतीब"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ग्रेगोरी कैलेन्डर"_s)
		})
	}));
	return data;
}

LocaleNames_doi::LocaleNames_doi() {
}

$Class* LocaleNames_doi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_doi, name, initialize, &_LocaleNames_doi_ClassInfo_, allocate$LocaleNames_doi);
	return class$;
}

$Class* LocaleNames_doi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun