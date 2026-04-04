#include <sun/util/resources/ext/LocaleNames_uk.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

void LocaleNames_uk::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_uk::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"UA"_s,
			u"Україна"_s
		}),
		$$new($ObjectArray, {
			"uk"_s,
			u"українська"_s
		})
	});
}

LocaleNames_uk::LocaleNames_uk() {
}

$Class* LocaleNames_uk::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_uk, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_uk, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.LocaleNames_uk",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_uk, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_uk);
	});
	return class$;
}

$Class* LocaleNames_uk::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun