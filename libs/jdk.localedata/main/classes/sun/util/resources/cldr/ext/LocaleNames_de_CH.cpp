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

$MethodInfo _LocaleNames_de_CH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_de_CH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_de_CH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_de_CH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_de_CH",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_de_CH_MethodInfo_
};

$Object* allocate$LocaleNames_de_CH($Class* clazz) {
	return $of($alloc(LocaleNames_de_CH));
}

void LocaleNames_de_CH::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_de_CH::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kapverden"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Grossbritannien"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Äusseres Ozeanien"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomon-Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Osttimor"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Aceh-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acholi-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Nadschd-Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basaa-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("Bikol-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Bini-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("Chibcha-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Dinka-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Pangwe-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Muskogee-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Altpreussisch"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Mass-System"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("britisches Mass-System"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("US Mass-System"_s)
		})
	}));
	return data;
}

LocaleNames_de_CH::LocaleNames_de_CH() {
}

$Class* LocaleNames_de_CH::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_de_CH, name, initialize, &_LocaleNames_de_CH_ClassInfo_, allocate$LocaleNames_de_CH);
	return class$;
}

$Class* LocaleNames_de_CH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun