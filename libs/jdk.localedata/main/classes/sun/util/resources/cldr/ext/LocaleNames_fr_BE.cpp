#include <sun/util/resources/cldr/ext/LocaleNames_fr_BE.h>
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

void LocaleNames_fr_BE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_fr_BE::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"GS"_s,
			u"Îles Géorgie du Sud et Sandwich du Sud"_s
		}),
		$$new($ObjectArray, {
			"gu"_s,
			"gujarati"_s
		}),
		$$new($ObjectArray, {
			"frp"_s,
			u"franco-provençal"_s
		}),
		$$new($ObjectArray, {
			"goh"_s,
			"ancien haut-allemand"_s
		}),
		$$new($ObjectArray, {
			"njo"_s,
			"ao"_s
		})
	}));
	return data;
}

LocaleNames_fr_BE::LocaleNames_fr_BE() {
}

$Class* LocaleNames_fr_BE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_fr_BE, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_fr_BE, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_fr_BE",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_fr_BE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_fr_BE);
	});
	return class$;
}

$Class* LocaleNames_fr_BE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun