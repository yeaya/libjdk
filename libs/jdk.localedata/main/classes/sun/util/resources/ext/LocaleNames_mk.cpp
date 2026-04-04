#include <sun/util/resources/ext/LocaleNames_mk.h>
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

void LocaleNames_mk::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_mk::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MK"_s,
			u"Македонија"_s
		}),
		$$new($ObjectArray, {
			"mk"_s,
			u"македонски"_s
		})
	});
}

LocaleNames_mk::LocaleNames_mk() {
}

$Class* LocaleNames_mk::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mk, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mk, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.LocaleNames_mk",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_mk, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_mk);
	});
	return class$;
}

$Class* LocaleNames_mk::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun