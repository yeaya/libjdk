#include <sun/util/resources/cldr/ext/LocaleNames_en_001.h>
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

void LocaleNames_en_001::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_001::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"UM"_s,
			"US Outlying Islands"_s
		}),
		$$new($ObjectArray, {
			"VI"_s,
			"US Virgin Islands"_s
		}),
		$$new($ObjectArray, {
			"mus"_s,
			"Creek"_s
		}),
		$$new($ObjectArray, {
			"sah"_s,
			"Yakut"_s
		}),
		$$new($ObjectArray, {
			"nds_NL"_s,
			"West Low German"_s
		}),
		$$new($ObjectArray, {
			"type.hc.h11"_s,
			u"12-Hour System (0–11)"_s
		}),
		$$new($ObjectArray, {
			"type.hc.h12"_s,
			u"12-Hour System (1–12)"_s
		}),
		$$new($ObjectArray, {
			"type.hc.h23"_s,
			u"24-Hour System (0–23)"_s
		}),
		$$new($ObjectArray, {
			"type.hc.h24"_s,
			u"24-Hour System (1–24)"_s
		})
	}));
	return data;
}

LocaleNames_en_001::LocaleNames_en_001() {
}

$Class* LocaleNames_en_001::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_001, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_001, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_en_001",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_en_001, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_en_001);
	});
	return class$;
}

$Class* LocaleNames_en_001::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun