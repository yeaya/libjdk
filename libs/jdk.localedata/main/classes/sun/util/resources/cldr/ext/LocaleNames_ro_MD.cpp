#include <sun/util/resources/cldr/ext/LocaleNames_ro_MD.h>
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

void LocaleNames_ro_MD::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ro_MD::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MM"_s,
			"Myanmar"_s
		}),
		$$new($ObjectArray, {
			"wal"_s,
			"wolaytta"_s
		}),
		$$new($ObjectArray, {
			"sw_CD"_s,
			"swahili (R. D. Congo)"_s
		})
	}));
	return data;
}

LocaleNames_ro_MD::LocaleNames_ro_MD() {
}

$Class* LocaleNames_ro_MD::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ro_MD, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ro_MD, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_ro_MD",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_ro_MD, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_ro_MD);
	});
	return class$;
}

$Class* LocaleNames_ro_MD::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun