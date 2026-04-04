#include <sun/util/resources/ext/LocaleNames_lt.h>
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

void LocaleNames_lt::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_lt::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"LT"_s,
			"Lietuva"_s
		}),
		$$new($ObjectArray, {
			"lt"_s,
			u"Lietuvių"_s
		})
	});
}

LocaleNames_lt::LocaleNames_lt() {
}

$Class* LocaleNames_lt::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_lt, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_lt, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.LocaleNames_lt",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_lt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_lt);
	});
	return class$;
}

$Class* LocaleNames_lt::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun