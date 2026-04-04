#include <sun/util/resources/cldr/ext/LocaleNames_de_AT.h>
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

void LocaleNames_de_AT::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_de_AT::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"SJ"_s,
			"Svalbard und Jan Mayen"_s
		}),
		$$new($ObjectArray, {
			"ha"_s,
			"Hausa"_s
		}),
		$$new($ObjectArray, {
			"sh"_s,
			"Serbokroatisch"_s
		}),
		$$new($ObjectArray, {
			"car"_s,
			"karibische Sprache"_s
		}),
		$$new($ObjectArray, {
			"chb"_s,
			"Chibcha-Sprache"_s
		}),
		$$new($ObjectArray, {
			"del"_s,
			"Delawarisch"_s
		}),
		$$new($ObjectArray, {
			"fur"_s,
			"Friulanisch"_s
		}),
		$$new($ObjectArray, {
			"haw"_s,
			"Hawaiianisch"_s
		}),
		$$new($ObjectArray, {
			"hmn"_s,
			"Miao-Sprache"_s
		}),
		$$new($ObjectArray, {
			"mus"_s,
			"Muskogee-Sprache"_s
		}),
		$$new($ObjectArray, {
			"niu"_s,
			"Niueanisch"_s
		}),
		$$new($ObjectArray, {
			"pag"_s,
			"Pangasinensisch"_s
		}),
		$$new($ObjectArray, {
			"szl"_s,
			"Schlesisch"_s
		}),
		$$new($ObjectArray, {
			"ar_001"_s,
			"modernes Hocharabisch"_s
		})
	}));
	return data;
}

LocaleNames_de_AT::LocaleNames_de_AT() {
}

$Class* LocaleNames_de_AT::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_de_AT, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_de_AT, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_de_AT",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_de_AT, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_de_AT);
	});
	return class$;
}

$Class* LocaleNames_de_AT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun