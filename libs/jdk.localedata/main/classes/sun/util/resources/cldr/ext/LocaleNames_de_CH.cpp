#include <sun/util/resources/cldr/ext/LocaleNames_de_CH.h>
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

void LocaleNames_de_CH::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_de_CH::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BN"_s,
			"Brunei"_s
		}),
		$$new($ObjectArray, {
			"BW"_s,
			"Botswana"_s
		}),
		$$new($ObjectArray, {
			"CV"_s,
			"Kapverden"_s
		}),
		$$new($ObjectArray, {
			"GB"_s,
			"Grossbritannien"_s
		}),
		$$new($ObjectArray, {
			"QO"_s,
			u"Äusseres Ozeanien"_s
		}),
		$$new($ObjectArray, {
			"SB"_s,
			"Salomon-Inseln"_s
		}),
		$$new($ObjectArray, {
			"TL"_s,
			"Osttimor"_s
		}),
		$$new($ObjectArray, {
			"ZW"_s,
			"Zimbabwe"_s
		}),
		$$new($ObjectArray, {
			"ace"_s,
			"Aceh-Sprache"_s
		}),
		$$new($ObjectArray, {
			"ach"_s,
			"Acholi-Sprache"_s
		}),
		$$new($ObjectArray, {
			"ars"_s,
			"Nadschd-Arabisch"_s
		}),
		$$new($ObjectArray, {
			"bas"_s,
			"Basaa-Sprache"_s
		}),
		$$new($ObjectArray, {
			"bik"_s,
			"Bikol-Sprache"_s
		}),
		$$new($ObjectArray, {
			"bin"_s,
			"Bini-Sprache"_s
		}),
		$$new($ObjectArray, {
			"chb"_s,
			"Chibcha-Sprache"_s
		}),
		$$new($ObjectArray, {
			"din"_s,
			"Dinka-Sprache"_s
		}),
		$$new($ObjectArray, {
			"fan"_s,
			"Pangwe-Sprache"_s
		}),
		$$new($ObjectArray, {
			"gba"_s,
			"Gbaya-Sprache"_s
		}),
		$$new($ObjectArray, {
			"kmb"_s,
			"Kimbundu-Sprache"_s
		}),
		$$new($ObjectArray, {
			"mus"_s,
			"Muskogee-Sprache"_s
		}),
		$$new($ObjectArray, {
			"prg"_s,
			"Altpreussisch"_s
		}),
		$$new($ObjectArray, {
			"key.ms"_s,
			"Mass-System"_s
		}),
		$$new($ObjectArray, {
			"type.ms.uksystem"_s,
			"britisches Mass-System"_s
		}),
		$$new($ObjectArray, {
			"type.ms.ussystem"_s,
			"US Mass-System"_s
		})
	}));
	return data;
}

LocaleNames_de_CH::LocaleNames_de_CH() {
}

$Class* LocaleNames_de_CH::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_de_CH, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_de_CH, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_de_CH",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_de_CH, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_de_CH);
	});
	return class$;
}

$Class* LocaleNames_de_CH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun